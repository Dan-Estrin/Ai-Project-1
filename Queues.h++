#ifndef QUEUES_H
#define QUEUES_H
namespace Queues{
  class FIFO{
    public:
    Node* head;
    Node* tail;
    unsigned int size;

    public:
    FIFO();
    void Insert(Node* newTail);
    void Pop();
    bool IsEmpty();
  };

  class LIFO{
    public:
    Node* head;
    Node* tail;
    unsigned int size;

    public:
    LIFO();
    void Insert(Node* newTail);
    void Pop();
    bool IsEmpty();
  };
};
#endif