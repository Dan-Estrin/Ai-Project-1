#ifndef SEARCHES_H
#define SEARCHES_H
#include "Node.h++"
#include "Queues.h++"
using std::string;

namespace Searches{
  class BinaryFirstSearch{
    private:
    Queues::FIFO que;

    public:
    BinaryFirstSearch();
    string Path(Node* start, string destination);
  };
};
#endif