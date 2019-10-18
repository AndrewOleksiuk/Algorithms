#pragma once
#include <iostream>
using namespace std;

class Graph
{
private:
	size_t numberOfEdges;
	size_t numberOfVertexes;
	int** matrix;
public:
	Graph()
	{
		numberOfEdges = 0;
		numberOfVertexes = 1;
		matrix = new int*[numberOfVertexes];
		for (size_t i = 0; i < numberOfVertexes; i++)
		{
			matrix[i] = new int[numberOfVertexes];
		}
	}

	Graph(int number)
	{
		numberOfEdges = 0;
		numberOfVertexes = number;
		matrix = new int*[numberOfVertexes];
		for (size_t i = 0; i < numberOfVertexes; i++)
		{
			matrix[i] = new int[numberOfVertexes];
		}
		for (size_t i = 0; i < numberOfVertexes; i++)
		{
			for (size_t j = 0; j < numberOfVertexes; j++)
			{
				matrix[i][j] = 0;
			}
		}
	}

	void addEdge(size_t i, size_t j , size_t weight)
	{
		if (i > 0 && j > 0 && i < numberOfVertexes && j < numberOfVertexes)
		{
			if (matrix[i][j] == 0)
			{
				matrix[i][j] = weight;
				matrix[j][i] = weight;
			}
		}
		if (i != j)
		{
			numberOfEdges += 2;
		}
		else
		{
			numberOfEdges += 1;
		}
		
	}

	void delEdge(size_t i, size_t j)
	{
		if (i > 0 && j > 0 && i < numberOfVertexes && j < numberOfVertexes)
		{
			if (matrix[i][j] != 0)
			{
				matrix[i][j ] = 0;
				matrix[j][i] = 0;
			}
		}
		if (i != j)
		{
			numberOfEdges -= 2;
		}
		else
		{
			numberOfEdges -= 1;
		}

	}

	void print()
	{
		for (size_t i = 0; i < numberOfVertexes; i++)
		{
			for (size_t j = 0; j < numberOfVertexes; j++)
			{
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	}

	size_t getNumberOfEdges()
	{
		return numberOfEdges;
	}
	size_t getNumberOfVertexes()
	{
		return numberOfVertexes;
	}

	bool areConnected(size_t i, size_t j)
	{
		if (matrix[i][j] != 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void addVertex()
	{
		int** temp_matrix;
		temp_matrix = new int*[numberOfVertexes];
		for (size_t i = 0; i < numberOfVertexes; i++)
		{
			temp_matrix[i] = new int[numberOfVertexes];
			for (size_t j = 0; j < numberOfVertexes; j++)
			{
				temp_matrix[i][j] = matrix[i][j];
			}
		}
		numberOfVertexes += 1;
		int oldSize = numberOfVertexes - 1;

		matrix = new int*[numberOfVertexes];
		for (size_t i = 0; i < numberOfVertexes; i++)
		{
			matrix[i] = new int[numberOfVertexes];
		}

		for (size_t i = 0; i < oldSize; i++)
		{
			for (size_t j = 0; j < oldSize; j++)
			{
				matrix[i][j] = temp_matrix[i][j];
				matrix[oldSize][j] = 0;
			}
			matrix[i][oldSize] = 0;
		}
		matrix[oldSize][oldSize] = 0;
	}
	
	void deleteVertex()
	{
		numberOfVertexes -= 1;
		int** temp_matrix;

		temp_matrix = new int*[numberOfVertexes];
		for (size_t i = 0; i < numberOfVertexes; i++)
		{
			temp_matrix[i] = new int[numberOfVertexes];
			for (size_t j = 0; j < numberOfVertexes; j++)
			{
				temp_matrix[i][j] = matrix[i][j];
			}
		}

		for (size_t i = 0; i < numberOfVertexes; i++)
		{
			matrix[i] = new int[numberOfVertexes];
			for (size_t j = 0; j < numberOfVertexes; j++)
			{
				matrix[i][j] = temp_matrix[i][j];
			}
		}
	}

	int* &operator[](size_t i)
	{
		return matrix[i];
	}
};