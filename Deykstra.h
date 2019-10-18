#pragma once
#include"Graph.h"
#include <vector>

class Dejkstra
{
private:
	Graph graph;
	bool* marked;
	int* fromAr;
	int* pathLength;

	void init()
	{
		for (size_t i = 0; i < graph.getNumberOfVertexes(); i++)
		{
			marked[i] = false;
			fromAr[i] = -1;
			pathLength[i] = 0;
		}
	}
	void recalculateLengthFromMarked()
	{
		for (size_t i = 0; i < graph.getNumberOfVertexes(); i++)
		{
			if (marked[i])
			{
				for (size_t j = 0; j < graph.getNumberOfVertexes(); j++)
				{
					if (!marked[j] && graph[i][j] != 0)
					{
						int newLength = pathLength[i] + graph[i][j];
						if (newLength < pathLength[j] || pathLength[j] == 0)
						{
							pathLength[j] = newLength;
							fromAr[j] = i;
						}
					}
				}
			}
		}
	}
	void markShortest()
	{
		int minLength = INT_MAX;
		int ind = -1;
		for (size_t i = 0; i < graph.getNumberOfVertexes(); i++)
		{
			if (!marked[i])
			{
				if ((pathLength[i] < minLength) && pathLength[i] != 0)
				{
					minLength = pathLength[i];
					ind = i;
				}
			}
		}
		if (ind != -1)
		{
			marked[ind] = true;
		}
	}
	void fillWay(size_t from, size_t to, vector<int>& way)
	{
		way.push_back(to);
		while (to != from)
		{
			way.push_back(fromAr[to]);
			to = fromAr[to];
		}
	}
public:
	Dejkstra(Graph ggraph) : graph(ggraph)
	{
		marked = new bool[graph.getNumberOfVertexes()];
		fromAr = new int[graph.getNumberOfVertexes()];
		pathLength = new int[graph.getNumberOfVertexes()];
		init();
	}

	int findWay(size_t from, size_t to, std::vector<int>& way)
	{
		init();
		marked[from] = true;
		while (!marked[to])
		{
			recalculateLengthFromMarked();
			markShortest();
		}
		fillWay(from, to, way);
		return pathLength[to];
	}
};
