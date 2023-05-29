#include "DocumentManager.h"

#include <iostream>
#include <map>
#include <queue>
#include <string>

using namespace std;

void DocumentManager::addDocument(string name, int id, int licence_limit) {
  documents_map[id] = make_pair(name, licence_limit);
  borrowed_copies[id] = 0;
};

void DocumentManager::addPatron(int patronID) { patrons.insert(patronID); };

// returns docid if name is in the document collection or 0 if the name is not
// in the collection
int DocumentManager::search(string name) {
  it = documents_map.begin();
  if (it->second.first == name) {
    return it->first;
  }
  return 0;
};

bool DocumentManager::borrowDocument(int docid, int patronID) {
  it = documents_map.begin();
  // if either document or patron didnt exist
  if (documents_map.find(docid) == documents_map.end() ||
      patrons.find(patronID) == patrons.end()) {
    return 0;
  }
  // if maxed out borrow
  if (it->second.second <= borrowed_copies.at(docid)) {
    return 0;
  }

  // else borrow document
  borrowed_copies.at(docid)++;
  return 1;
};

void DocumentManager::returnDocument(int docid, int patronID) {
  // if either document or patron didnt exist
  if (documents_map.find(docid) == documents_map.end() ||
      patrons.find(patronID) == patrons.end()) {
    cout << "Could not find document or patron" << '\n';
  }

  if (borrowed_copies.at(docid) > 0 && borrowed_copies[docid] == docid) {
    borrowed_copies.at(docid)--;
  }
};
