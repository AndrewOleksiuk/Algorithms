#include <iostream>
using namespace std;

int first, last;
void quicksort(int *arr, int first, int last)
{
	int mid, count;
	int f = first, l = last;
	mid = arr[(f + l) / 2];
	do
	{
		while (arr[f] < mid) f++;
		while (arr[l] > mid) l--;
		if (f <= l)
		{
			count = arr[f];
			arr[f] = arr[l];
			arr[l] = count;
			f++;
			l--;
		}
	} while (f < l);
	if (first < l) quicksort(arr, first, l);
	if (f < last) quicksort(arr, f, last);
}

int main() {

	int arr[11] = { 5, 4, 6, 1, 7, 0, 7, 9, 0, 1, 10 };
	
	quicksort(arr, 0, 10);

	for (int i = 0; i < 11; i++)
		cout << arr[i]<<" ";

	system("pause");
	return 0;
}