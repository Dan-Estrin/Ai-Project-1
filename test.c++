#include <iostream>
#include "Node.c++"
#include "Queues.c++"
#include "Searches.c++"
using namespace std;
using namespace Queues;
using namespace Searches;

int main(){
  BinaryFirstSearch search = BinaryFirstSearch();
  Node Arad = Node("Arad", 'o');
  Node Zerid = Arad.ChildNode("Zerid", 'u');
  Node Sibiu = Arad.ChildNode("Sibu", 'r');
  Node Timisoara = Arad.ChildNode("Timisoara", 'd');
  Node Oradea = Zerid.ChildNode("Oradea", 'u');
  Node Fagaras = Sibiu.ChildNode("Fagaras", 'r');
  Node Rimnica_Vilcea = Sibiu.ChildNode("Rimnica_Vilcea", 'd');
  Node Lugoj = Timisoara.ChildNode("Lugoj", 'r');
  Node Bucharest = Fagaras.ChildNode("Bucharest", 'd');
  Node Pitesti = Rimnica_Vilcea.ChildNode("Pitesti", 'r');
  Node Craiova = Rimnica_Vilcea.ChildNode("Craiova", 'd');
  Node Mehadia = Lugoj.ChildNode("Mehadia", 'd');
  
  cout << search.Path(&Arad, "Bucharest");
  return 0;
}