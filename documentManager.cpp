#include "documentManager.h"

#include <map>
#include <queue>
#include <string>

using namespace std;

void documentManager::addDocument(string name, int id, int borrowLimit) {
  documentMap.insert(pair<string, int>(name, id));
};

void documentManager::addPatron(int patronID){
  patrons.push_back(patronID);
};

// returns docid if name is in the document collection or 0 if the name is not
  // in the collection
int documentManager::search(std::string name){
  if (documentMap[name] != NULL){
    return documentMap[name];
  } else{
    return 0;
  }
};

bool borrowDocument(int docid, int patronID){
  
}


