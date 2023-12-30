#include "graph.h"
#include <climits>
#include <fstream>
#include <stdexcept>

using std::ifstream;
using std::invalid_argument;
using std::list;

Graph::Graph(std::string filename) {
  ifstream input;
  input.open(filename);
  if (!input) {
    throw invalid_argument("Could not read file");
  }
  input >> numNodes;
  adjList = new list<Pair>[numNodes];
  for (int i = 0; i < numNodes; i++) {
    int value;
    int cost;
    input >> value;
    while (value >= 0) {
      input >> cost;
      adjList[i].push_back(Pair(value, cost));
      input >> value;
    }
  }
}

int Graph::shortestCost(int startNode, int endNode) {
  //
  return 0;
}
