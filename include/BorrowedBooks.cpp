#ifndef BORROWED_BOOKS_H
#define BORROWED_BOOKS_H

#include <string>

/*
* This allows us to create nodes
* After instantiating them, the address is null
* We need to make sure the address of the current node
* points to the data of the next node
*/
class BorrowedBooks
{
public:
  std::string title;
  BorrowedBooks *next;
  BorrowedBooks(std::string title);
};


#endif
