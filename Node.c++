#include "Node.h++"

Node::Node(std::string state, char action, unsigned short cost){
  this->parent = nullptr;
  this->c1 = nullptr;
  this->c2 = nullptr;
  this->c3 = nullptr;
  this->qFront = nullptr;
  this->qBack = nullptr;
  this->state = state;
  this->action = action;
  this->cost = cost;
};

Node Node::ChildNode(std::string state, char action){
  Node tNode = Node(state, action);
  tNode.parent = this;
  if(tNode.parent->c1 == nullptr){
    this->c1 = &tNode;
  }
  else if(tNode.parent->c2 == nullptr){
    this->c2 = &tNode;
  }
  else if(tNode.parent->c3 == nullptr){
    this->c3 = &tNode;
  }
  return tNode;
}

