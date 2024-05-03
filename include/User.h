#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include "LinkedLists.h"

class User
{
private:
  int ID;
  std::string username;
  std::string password;
  LinkedLists* borrowedBooks;
public:
  User();
  ~User();
  User(const User& other);
  User& operator=(const User& other);
};

#endif
