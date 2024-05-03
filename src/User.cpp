#include "User.h"

User::User()
{
  ID = 0;
  username = "JohnDoe";
  password = 12345678;
  borrowedBooks = nullptr;
}

User::~User()
{
  borrowedBooks = nullptr;
}

User::User(const User& other)
{
  ID = other.ID;
  username = other.username;
  password = other.password;
  borrowedBooks = other.borrowedBooks;
}

User& User::operator=(const User& other)
{
  if (this != &other) {
    ID = other.ID;
    username = other.username;
    password = other.password;
    borrowedBooks = other.borrowedBooks;
  }
  return *this;
}
