#ifndef NODE_H
#define NODE_H

#include <string>

class Node{
  public:
  //node pointer to parent
  Node* parent;

  //node pointers to childs 1, 2, & 3
  Node* c1;
  Node* c2;
  Node* c3;
  
  //node pointers used in ques to maintain
  //position when inserting/deleting
  Node* qFront;
  Node* qBack;

  //node attributes
  std::string state;
  char action;
  unsigned short cost;

  public:
  Node(std::string state, char action, unsigned short cost = 1);
  Node ChildNode(std::string state, char action);
};
#endif