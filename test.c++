#include <iostream>
#include "Node.c++"
#include "Queues.c++"
#include "Searches.c++"
using namespace std;
using namespace Queues;
using namespace Searches;

int main(){
  DepthFirstSearch depth = DepthFirstSearch();
  BreadthFirstSearch breadth = BreadthFirstSearch();
  
  Node Arad = Node("Arad", "Start");
  Node Zerid = Arad.ChildNode("Zerid", "Drive North");
  Node Sibiu = Arad.ChildNode("Sibu", "Drive East");
  Node Timisoara = Arad.ChildNode("Timisoara", "Drive South");
  Node Oradea = Zerid.ChildNode("Oradea", "Drive North");
  Node Fagaras = Sibiu.ChildNode("Fagaras", "Drive East");
  Node Rimnica_Vilcea = Sibiu.ChildNode("Rimnica_Vilcea", "Drive South");
  Node Lugoj = Timisoara.ChildNode("Lugoj", "Drive East");
  Node Bucharest = Fagaras.ChildNode("Bucharest", "Drive South");
  Node Pitesti = Rimnica_Vilcea.ChildNode("Pitesti", "Drive South");
  Node Craiova = Rimnica_Vilcea.ChildNode("Craiova", "Drive South");
  Node Mehadia = Lugoj.ChildNode("Mehadia", "Drive South");
  Node Dobreta = Mehadia.ChildNode("Dobreta", "Drive South");
  Node Giurgiu = Bucharest.ChildNode("Giurgiu", "Drive South");
  Node Urziceni = Bucharest.ChildNode("Urziceni", "Drive East");
  Node Hirsova = Urziceni.ChildNode("Hirsova", "Drive East");
  Node Eforie = Hirsova.ChildNode("Eforie", "Drive South");
  Node Vasuli = Urziceni.ChildNode("Vasuli", "Drive North");
  Node Iasi = Vasuli.ChildNode("Iasi", "Drive North");
  Node Neamt = Iasi.ChildNode("Neamt", "Drive West");
  
  cout << breadth.Path(&Arad, "Bucharest") << endl << endl << depth.Path(&Arad, "Bucharest");
  return 0;
}