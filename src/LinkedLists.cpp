#include "LinkedLists.h"

LinkedLists::LinkedLists()
{
  this->head = nullptr;
}

void LinkedLists::appendNode(BorrowedBooks& b)
{
  // Check if the linked list is empty
  if (head == nullptr) {
    //Set head to equal the new node
    head = &b;
  }
  else {
    // Traverse from head node to the tail node
    // We know we have reached the tail node when
    // The address of the current node is nullptr
    // Loop through the addresses from head to tail
    BorrowedBooks* current = head;
    while (current->next != nullptr) {
      current = current->next;
    }
    current->next = &b;
  }
}

void LinkedLists::insertNode(BorrowedBooks& b, int index)
{
  //Insert note at first index
  if (index == 0) {
  b.next = head;
  head = &b;
  }
  else {
    BorrowedBooks* current = head;
    BorrowedBooks* newNode = nullptr;
    for (int i = 0; i < index - 1 && current != nullptr; i++) {
      current = current->next;
    }
    if (current != nullptr) {
      newNode->next = current->next;
      current->next = newNode;
    }
  }
}

void LinkedLists::deleteHead(BorrowedBooks& b, int index)
{
  //Deleting head
  if (index == 0) {
    std::string deletedValue = head->title;
    head = head->next;
 }
  else {
    BorrowedBooks* previous = nullptr;
    BorrowedBooks* current = head;

    for (int i = 0; i < index - 1 && current != nullptr; i++) {
      previous = current;
      current = current->next;
    }
    if (current != nullptr) {
      std::string deletedValue = current->title;
      previous->next = current->next;
    }
  }
}

void LinkedLists::display() const
{
  BorrowedBooks* current = head;
  while (current->next != nullptr) {
    std::cout << current->title << '\n';
    current = current->next;
  }
}

