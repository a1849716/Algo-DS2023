#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H
#include <map>
#include <string>
#include <vector>

class documentManager {
 private:
  std::map<std::string, int> documentMap;
  std::vector<int> patrons;
  


 public:
  void addDocument(std::string name, int id, int borrowLimit);

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