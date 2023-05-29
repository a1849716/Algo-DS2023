#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H
#include <unordered_map>
#include <string>
#include <unordered_set>

struct Document{
    std::string name;
    int license_limit;
    int id;
    int borrowed_amount;
  }

class DocumentManager {
 private:
  std::unordered_map<std::string, int> documents_map;
  std::unordered_map<int, int> borrowedCopies;
  std::unordered_set<int> patrons;
  
 public:
  void addDocument(std::string name, int id, int licence_limit);

  void addPatron(int patronID);

  // returns docid if name is in the document collection or 0 if the name is not
  // in the collection
  int search(std::string name);

  // returns true if document is borrowed, false if it can not be borrowed
  // (invalid patronid or the number of copies current borrowed has reached the
  // license limit)
  bool borrowDocument(int docid, int patronID);

  void returnDocument(int docid, int patronID);
};

#endif