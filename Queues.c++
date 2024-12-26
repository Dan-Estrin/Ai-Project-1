#include "Queues.h++"
#include "Node.h++"

Queues::FIFO::FIFO(){
  this->head = nullptr;
  this->tail = nullptr;
  this->size = 0;
}

void Queues::FIFO::Insert(Node* newTail){
  if (newTail == nullptr) return;
  if(this->head == nullptr){
    this->head = newTail;
    this->tail = newTail;
  }
  else{
    this->tail->qBack = newTail;
    newTail->qFront = this->tail;
    this->tail = newTail;
  }
  this->size++;
}



void Queues::FIFO::Pop(){
  this->head = this->head->qBack;
  if(this->head == nullptr) return;
  this->head->qFront = nullptr;
  this->size--;
}

bool Queues::FIFO::IsEmpty(){
  if(this->head == 0 && this->size == 0) return true;
  else return false;
}