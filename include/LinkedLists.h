#ifndef LINKEDLISTS_H
#define LINKEDLISTS_H

#include "LinkedLists.h"
#include "BorrowedBooks.h"
#include <iostream>

class LinkedLists {
private:
  BorrowedBooks* head;
public:
  LinkedLists();
  //Append Node
  void appendNode(BorrowedBooks& b);
  void insertNode(BorrowedBooks& b, int index = 0);
  void deleteHead(BorrowedBooks&b, int index = 0);
  void display() const;
};
#endif
