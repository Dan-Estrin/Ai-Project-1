#include "Searches.h++"

Searches::BreadthFirstSearch::BreadthFirstSearch(){
  this->queue = Queues::FIFO();
}

Searches::DepthFirstSearch::DepthFirstSearch(){
  this->queue = Queues::LIFO();
}

string Searches::BreadthFirstSearch::Path(Node* start, string destination){
  this->queue.Insert(start);
  while(!this->queue.IsEmpty()){
    if(this->queue.head->state == destination){
      string path = "";
      Node* tNode = this->queue.head;
      while (tNode->parent != nullptr){
        path = "From " + tNode->parent->state + " " + tNode->action + " to " +  tNode->state + " -> \n" + path;
        tNode = tNode->parent;
      }
      return path.substr(0,path.size()-5);
    }
    else{
      Node* currNode = this->queue.head;
      this->queue.Insert(currNode->c1);
      this->queue.Insert(currNode->c2);
      this->queue.Insert(currNode->c3);
      this->queue.Pop();
    }
  }
  return "path does not exsist";
}

string Searches::DepthFirstSearch::Path(Node* start, string destination){
  this->queue.Insert(start);
  while(!this->queue.IsEmpty()){
    if(this->queue.tail->state == destination){
      string path = "";
      Node* tNode = this->queue.tail;
      while (tNode->parent != nullptr){
        path = "From " + tNode->parent->state + " " + tNode->action + " to " +  tNode->state + " -> \n" + path;
        tNode = tNode->parent;
      }
      return path.substr(0,path.size()-5);
    }
    else{
      Node* currNode = this->queue.tail;
      if(currNode->c1 == nullptr && currNode->c2 == nullptr && currNode->c3 == nullptr){
        this->queue.Pop();
      }
      else{
        this->queue.Insert(currNode->c1);
        this->queue.Insert(currNode->c2);
        this->queue.Insert(currNode->c3);
        currNode->c1 = nullptr;
        currNode->c2 = nullptr;
        currNode->c3 = nullptr;
      }
    }
  }
  return "path does not exsist";
}