#include<iostream>
#include<ctime>
#include"Graph.h"
#include"Deykstra.h"

int main()
{
	Graph graph(8);
	graph.addEdge(1, 2, 7);
	graph.addEdge(1, 6, 14);
	graph.addEdge(1, 3, 9);
	graph.addEdge(2, 3, 10);
	graph.addEdge(2, 4, 15);
	graph.addEdge(3, 6, 2);
	graph.addEdge(4, 3, 11);
	graph.addEdge(4, 5, 6);
	graph.addEdge(5, 6, 9);
	graph.print();
	
	std::vector<int> way;
	Dejkstra algorithm(graph);
	cout << endl << algorithm.findWay(1, 6, way) << endl;
	vector<int>::reverse_iterator it;
	for (it = way.rbegin(); it != way.rend(); it++)
	{
		cout << *it << "  ";
	}
	system("pause");
	return 0;
}