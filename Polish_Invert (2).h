#pragma once
#include <iostream>
using namespace std;

template <typename string>

class StackOnArray
{
private:
	string *arr;
	int size;
	int count;
public:
	StackOnArray() :
		size(10),
		count(0)
	{
		arr = new string[size];
	}

	string peek()
	{
		return arr[count - 1];
	}


	void push(string value)
	{
		if (size == count)
		{
			string *tempArr = new string[size];
			for (size_t i = 0; i < size; i++)
			{
				tempArr[i] = arr[i];
			}
			size += 10;
			arr = new string[size];
			for (size_t i = 0; i < count; i++)
			{
				arr[i] = tempArr[i];
			}
		}
		arr[count] = value;
		count += 1;
	}

	int pop()
	{
		if (count == 0)
		{
			//cout << "Count = 0";
			return NULL;
		}

		else if (size - count == 20)
		{
			string *tempArr = new string[count];
			for (size_t i = 0; i < count; i++)
			{
				tempArr[i] = arr[i];
			}
			size -= 10;
			arr = new string[size];
			for (size_t i = 0; i < count; i++)
			{
				arr[i] = tempArr[i];
			}
		}
		count--;
		return arr[count];
	}

	bool isEmpty()
	{
		if (count == 0)
		{
			return true;
		}
		return false;
	}

	int getCount()
	{
		return count;
	}

	int getSize()
	{
		return size;
	}
};




