#include "Searches.h++"

Searches::BinaryFirstSearch::BinaryFirstSearch(){
  this->que = Queues::FIFO();
}

string Searches::BinaryFirstSearch::Path(Node* start, string destination){
  this->que.Insert(start);
  while(!this->que.IsEmpty()){
    if(this->que.head->state == destination) return "path exsists";
    else{
      Node* currNode = this->que.head;
      this->que.Insert(currNode->c1);
      this->que.Insert(currNode->c2);
      this->que.Insert(currNode->c3);
      this->que.Pop();
    }
  }
  return "path does not exsist";
}