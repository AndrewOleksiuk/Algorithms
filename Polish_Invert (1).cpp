#include "Stack.h"
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include "Header.h"


using namespace std;

string Invert(string array)
{
	StackOnArray<char> stack;
	string result_array[20];
	int k = 0;

		if (array[0] == '-')
		{
			stack.push('0');
		}
		for (size_t i = 0; i < array.length(); i++)
		{
			if (array[i] >= '0' && array[i] <= '9')
			{
				while( (array[i] >= '0' && array[i] <= '9') || array[i] =='.')
				{
					result_array[k] += array[i];
					i++;
				}
				k++;
			}

			if (array[i] == '+' || array[i] == '-')
			{
				while (!stack.isEmpty())
				{
					if (stack.peek() == '(')
					{
						break;
					}
					result_array[k] += stack.pop();
					k++;
				}
				stack.push(array[i]);
			}
			if (array[i] == '*' || array[i] == '/')
			{
				while (!stack.isEmpty())
				{
					if (stack.peek() == '+' || stack.peek() == '-' || stack.peek() == '(')
					{
						break;
					}
					result_array[k] += stack.pop();
					k++;
				}
				stack.push(array[i]);
			}
			/*if (array[i] == '^')
			{
				while (!stack.isEmpty())
				{
					result_array[k] += stack.pop();
					k++;
				}
				stack.push(array[i]);
				
			}*/

			if (array[i] == '(')
			{
				stack.push(array[i]);
				if (array[i + 1] == '-')
				{
					stack.push('0');
				}
			}

			if (array[i] == ')')
			{
				while (stack.peek() != '(')
				{
					if (stack.peek() == '+'|| stack.peek() == '-' || stack.peek() == '*' || stack.peek() == '/')
					{
						result_array[k] += stack.pop();
						k++;
					}
				}
				stack.pop();
			}

		}

	while (stack.isEmpty() == false)
	{
		if (stack.peek() == '+' || stack.peek() == '-' || stack.peek() == '*' || stack.peek() == '/')
		{
			result_array[k] += stack.pop();
			k++;
		}
	}

	for (k = 0; k < 20; k++)
	{
		cout << result_array[k];
	}
	return result_array[20];
}

double string_to_double(const string s)
{
	std::istringstream i(s);
	double x;
	if (!(i >> x))
		return 0;
	return x;
}


string Calculate(string array[])
{
	Stack stack;

	for (size_t i = 0; i < array->size(); i++)
	{
		if (isdigit(array[i][0]))
		{
			stack.push(array[i]);
		}
		if (array[i][0] == '+')
		{
			string res;
			res = string_to_double(stack.pop()) + string_to_double(stack.pop());
			stack.push(res);
		}
		if (array[i][0] == '-')
		{
			string res;
			res = string_to_double(stack.pop()) - string_to_double(stack.pop());
			stack.push(res);
		}
		if (array[i][0] == '*')
		{
			string res;
			res = string_to_double(stack.pop()) * string_to_double(stack.pop());
			stack.push(res);
		}
		if (array[i][0] == '/')
		{
			string res;
			res = string_to_double(stack.pop()) / string_to_double(stack.pop());
			stack.push(res);
		}
	}
	return stack.pop();
}

int main()
{
	string arr;
	cin >> arr;
	Invert(arr);
	cout << Calculate();
system("pause");
return 0;
}