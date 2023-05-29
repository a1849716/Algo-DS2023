#include "DocumentManager.h"

#include <map>
#include <queue>
#include <string>

using namespace std;

void DocumentManager::addDocument(string name, int id, int licence_limit) {
  Document new_document;
  new_document.name = name;
  new_document.id = id;
  new_document.licence_limit = licence_limit;
  new_document.borrowed_amount = 0;
  documents_map[id] = new_document;
};

void DocumentManager::addPatron(int patronID){
  patrons.insert(patronID);
};

// returns docid if name is in the document collection or 0 if the name is not
  // in the collection
int DocumentManager::search(std::string name){
  for (auto const& i : documents_map){
    if (document.first.name == name){
      return document.second;
    }
    return 0;
  } 
};

bool DocumentManager::borrowDocument(int docid, int patronID){
  //if either document or patron didnt exist
  if(documents_map.find(docid) == documents_map.end()||patron.find(patronID)==patron.end()){
    return 0;
  }
  //set the document to point to docid
  Document& new_document = documents_map[docid];

  //if maxed out borrow
  if (licence_limit <= new_document.borrowed_copies){
    return 0;
  }
  //else borrow document
  new_document.borrowed_amount++;
  borrowed_copies.push(docid);
  return 1;
};

void returnDocument(int docid, int patronID){
  //if either document or patron didnt exist
  if(documents_map.find(docid) == documents_map.end()||patron.find(patronID)==patron.end()){
    return 0;
  }
  //set the document to point to docid
  Document& new_document = documents_map[docid];

  if(borrowed_amount > 0 && borrowed_copies.first.id == docid){
    new_document.borrowed_amount--;
    borrowed_copies.erase(patronID);
  }
};



