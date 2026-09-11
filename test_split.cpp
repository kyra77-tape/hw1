/*
CSCI 104: Homework 1 Problem 1

Use this file to test your split.cpp file.

Create linked lists and split them with your split() function.

You can compile this file like this:
g++ split.cpp test_split.cpp -o test_split
*/

#include "split.h"
#include <iostream>
void printList(Node* head){
  Node* curr = head;
  while(curr!=nullptr){
    std::cout<<curr->value<<" ";
    curr=curr->next;
  }
}
int main(int argc, char* argv[])
{
  Node* head1 = nullptr;
  Node* odds1 = nullptr;
  Node* evens1 = nullptr;
  split(head1, odds1, evens1);
  std::cout << "Empty list -> odds: ";
  printList(odds1);
  std::cout << "Empty list -> evens: ";
  printList(evens1);

  Node* head2 = new Node{1, nullptr};
  Node* odds2 = nullptr;
  Node* evens2 = nullptr;
  split(head2, odds2, evens2);
  std::cout << "Single odd -> odds: ";
  printList(odds2);
  std::cout << "Single odd -> evens: ";
  printList(evens2);

  Node* head3 = new Node{2, nullptr};
  Node* odds3 = nullptr;
  Node* evens3 = nullptr;
  split(head3, odds3, evens3);
  std::cout << "Single even -> odds: ";
  printList(odds3);
  std::cout << "Single even -> evens: ";
  printList(evens3);

  Node* n4d = new Node{7, nullptr};
  Node* n4c = new Node{5, n4d};
  Node* n4b = new Node{3, n4c};
  Node* head4 = new Node{1, n4b};
  Node* odds4 = nullptr;
  Node* evens4 = nullptr;
  split(head4, odds4, evens4);
  std::cout << "All odd -> odds: ";
  printList(odds4);
  std::cout << "All odd -> evens: ";
  printList(evens4);

  Node* n5d = new Node{8, nullptr};
  Node* n5c = new Node{6, n5d};
  Node* n5b = new Node{4, n5c};
  Node* head5 = new Node{2, n5b};
  Node* odds5 = nullptr;
  Node* evens5 = nullptr;
  split(head5, odds5, evens5);
  std::cout << "All even -> odds: ";
  printList(odds5);
  std::cout << "All even -> evens: ";
  printList(evens5);

  Node* n6e = new Node{5, nullptr};
  Node* n6d = new Node{4, n6e};
  Node* n6c = new Node{3, n6d};
  Node* n6b = new Node{2, n6c};
  Node* head6 = new Node{1, n6b};
  Node* odds6 = nullptr;
  Node* evens6 = nullptr;
  split(head6, odds6, evens6);
  std::cout << "Mixed -> odds: ";
  printList(odds6);
  std::cout << "Mixed -> evens: ";
  printList(evens6);

  return 0;
}
