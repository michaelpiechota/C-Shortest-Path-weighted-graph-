//Michael Piechota 
#include <iostream>
#include <fstream>

#include "weightedGraph.h"

using namespace std;

int main()
{
	weightedGraphType shortestPathGraph(50);

	shortestPathGraph.createWeightedGraph();

	shortestPathGraph.shortestPath(0);

	shortestPathGraph.printShortestDistance(0);

	cout << endl;

	return 0;
}