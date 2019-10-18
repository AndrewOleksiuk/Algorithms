#include "Matrix.h"
#include <chrono>
#include <iostream>

int main()
{
	Matrix matrix, matrix2, matrix3;
	matrix.readMatrix("data.txt");
	matrix2.readMatrix("data2.txt");
	matrix.Print();
	cout << "____________________" << endl;
	matrix2.Print();
	cout << "__________________" << endl;

	matrix3 = matrix2 * 2;

	matrix3.Print();
	system("pause");
	return 0;
}