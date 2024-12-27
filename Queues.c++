#include "Queues.h++"
#include "Node.h++"

Queues::FIFO::FIFO(){
  this->head = nullptr;
  this->tail = nullptr;
  this->size = 0;
}

Queues::LIFO::LIFO(){
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

void Queues::LIFO::Insert(Node* newTail){
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

void Queues::LIFO::Pop(){
  this->tail = this->tail->qFront;
  if(this->tail == nullptr) return;
  this->tail->qBack = nullptr;
  this->size--;
}

bool Queues::FIFO::IsEmpty(){
  if(this->head == nullptr || this->size == 0) return true;
  else return false;
}

bool Queues::LIFO::IsEmpty(){
  if(this->head == nullptr || this->size == 0) return true;
  else return false;
}