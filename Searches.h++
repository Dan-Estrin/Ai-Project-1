#ifndef SEARCHES_H
#define SEARCHES_H
#include "Node.h++"
#include "Queues.h++"
using std::string;

namespace Searches{
  class BreadthFirstSearch{
    private:
    Queues::FIFO queue;

    public:
    BreadthFirstSearch();
    string Path(Node* start, string destination);
  };

  class DepthFirstSearch{
    private:
    Queues::LIFO queue;

    public:
    DepthFirstSearch();
    string Path(Node* start, string destination);
  };
};
#endif