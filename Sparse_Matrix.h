#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

struct Node
{
	int data;
	size_t x;
	size_t y;
public:
	Node()  
	{
		data = 0;
		x = 0;
		y = 0;
	}
	Node(int data, size_t x, size_t y)
	{
		this->data = data;
		this->x = x;
		this->y = y;
	}
	size_t getX()
	{
		return x;
	}
	size_t getY()
	{
		return y;
	}
	int getData()
	{
		return data;
	}

	friend ostream& operator <<(ostream& os, const Node& node)
	{
		os << "x = " << node.x << " " << "y = " << node.y << " " << "value = " << node.data << endl;
		return os;
	}

	Node operator + (Node node)
	{
		Node res = node;
		res.data = data + node.data;
		return res;
	}
	Node operator - (Node node)
	{
		Node res = node;
		res.data = data - node.data;
		return res;
	}
};


class Matrix
{
private:
	vector<Node> matrix;
	size_t x_length;
	size_t y_length;
public:

	void readMatrix(string File)
	{
		ifstream file;
		file.open(File);

		int count = 0;
		int temp;

		while (file.eof() == false)
		{
			file >> temp;
			count++;
		}
		file.clear();
		file.seekg(0, ios::beg);
		

		int count_space = 0;
		char symbol;
		while (!file.eof())
		{
			file.get(symbol);
			if (symbol == ' ')
			{
				count_space++;
			}
			if (symbol == '\n')
			{
				break;
			}
		}
		
		file.clear();
		file.seekg(0, ios::beg);
		

		int n = count / (count_space + 1);
		int m = count_space + 1;
	    int **x;
		x = new int*[n];
		for (size_t i = 0; i < n; i++)
		{
			x[i] = new int[m];
		}

		x_length = n;
		y_length = m;
	
		for (size_t i = 0; i < n; i++)
		{
			for (size_t j = 0; j < m; j++)
			{
				file >> x[i][j];
				if (x[i][j] != 0)
				{
					matrix.push_back(Node(x[i][j], i, j));
				}
			}
		}
		file.close();
	}

	void print()
	{
		for (size_t k = 0 ; k < matrix.size(); k++)
		{
			cout << matrix[k];
		}
	}

	Matrix operator +(Matrix matrix)
	{
		if (matrix.x_length == x_length && matrix.y_length == y_length)
		{
			Matrix result;
			result.x_length = x_length;
			result.y_length = y_length;
			for (size_t i = 0; i < this->matrix.size(); i++)
			{
				result.matrix.push_back(this->matrix[i]);
			}
			for (size_t i = 0; i < this->matrix.size(); i++)
			{
				for (size_t j = 0; j < matrix.matrix.size(); j++)
				{
					if (result.matrix[i].x == matrix.matrix[j].x && result.matrix[i].y == matrix.matrix[j].y)
					{
						result.matrix[i] = result.matrix[i] + matrix.matrix[j];
					}
				}
			}
			for (size_t j = 0; j < matrix.matrix.size(); j++)
			{
				size_t i = 0;
				bool flag = false;
				while (i != this->matrix.size())
				{
					if (matrix.matrix[j].x == this->matrix[i].x && matrix.matrix[j].y == this->matrix[i].y)
					{
						flag = true;
					}
					i++;
				}
				if (flag == false)
				{
					result.matrix.push_back(matrix.matrix[j]);
				}
			}

			return result;
		}
	}
	Matrix operator -(Matrix matrix)
	{
		if (matrix.x_length == x_length && matrix.y_length == y_length)
		{
			Matrix result;
			result.x_length = x_length;
			result.y_length = y_length;
			for (size_t i = 0; i < this->matrix.size(); i++)
			{
				result.matrix.push_back(this->matrix[i]);
			}
			for (size_t i = 0; i < this->matrix.size(); i++)
			{
				for (size_t j = 0; j < matrix.matrix.size(); j++)
				{
					if (result.matrix[i].x == matrix.matrix[j].x && result.matrix[i].y == matrix.matrix[j].y)
					{
						if (result.matrix[i].data - matrix.matrix[j].data != 0)
						{
							result.matrix[i] = result.matrix[i] - matrix.matrix[j];
						}
					}
				}
			}
			for (size_t j = 0; j < matrix.matrix.size(); j++)
			{
				size_t i = 0;
				bool flag = false;
				while (i != this->matrix.size())
				{
					if (matrix.matrix[j].x == this->matrix[i].x && matrix.matrix[j].y == this->matrix[i].y)
					{
						flag = true;
					}
					i++;
				}
				if (flag == false)
				{
					matrix.matrix[j].data *= -1;
					result.matrix.push_back(matrix.matrix[j]);
				}
			}

			return result;
		}
	}
	Matrix operator *(int a)
	{
		Matrix result;
		result.x_length = x_length;
		result.y_length = y_length;
		for (size_t i = 0; i < this->matrix.size(); i++)
		{
			result.matrix.push_back(this->matrix[i]);
		}
		for (size_t i = 0; i < this->matrix.size(); i++)
		{
			result.matrix[i].data *= a;
		}
		return result;
	}
	Matrix operator *(Matrix matrix)
	{
		if (matrix.y_length == x_length && matrix.x_length == y_length)
		{
			Matrix result;
			result.x_length = matrix.x_length;
			result.y_length = y_length;
			vector<Node> temp_vector;
			int temp_value = 0;
			for (size_t i = 0; i < this->matrix.size(); i++)
			{
				for (size_t j = 0; j < matrix.matrix.size(); j++)
				{
					if (this->matrix[i].y == matrix.matrix[j].x)
					{
						temp_value = this->matrix[i].data * matrix.matrix[j].data;
						if (temp_value != 0)
						{
							temp_vector.push_back(Node(temp_value, this->matrix[i].x, matrix.matrix[j].y));
						}
					}
				}
			}
			for (size_t i = 0; i < temp_vector.size(); i++)
			{
				for (size_t j = 0; j < temp_vector.size(); j++)
				{
					if (i != j)
					{
						if (temp_vector[i].x == temp_vector[j].x && temp_vector[i].y == temp_vector[j].y)
						{
							temp_vector[i].data += temp_vector[j].data;
							temp_vector[j].x = x_length + i + 1;
						}
					}
				}
			}
			for (size_t i = 0; i < temp_vector.size(); i++)
			{
				if (temp_vector[i].x < x_length)
				{
					result.matrix.push_back(temp_vector[i]);
				}
			}
			return result;
		}
	}
	int check(int i, int j)
	{
		for (size_t k = 0; k < matrix.size(); k++)
		{
			if (matrix[k].x == i && matrix[k].y == j)
			{
				return matrix[k].data;
			}
		}
		return 0;
	}
	void Print()
	{
		for (size_t i = 0; i < x_length; i++)
		{
			for (size_t j = 0; j < y_length; j++)
			{
				cout << check(i, j)<<' ';
			}
			cout << endl;
		}
	}
};