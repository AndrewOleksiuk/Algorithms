#include <iostream>
using namespace std;

const int maxnumber = 1000;

void Merge(int arr[], int begin, int end)
{
	int
		i = begin,
		mid = begin + (end - begin) / 2,
		j = mid + 1,
		k = 0,
		new_arr[maxnumber];

	while (i <= mid && j <= end)
	{
		if (arr[i] <= arr[j])
		{
			new_arr[k] = arr[i];
			i++;
		}
		else
		{
			new_arr[k] = arr[j];
			j++;
		}
		k++;
	}

	while (i <= mid)
	{
		new_arr[k] = arr[i];
		i++;
		k++;
	}
	while (j <= end)
	{
		new_arr[k] = arr[j];
		j++;
		k++;
	}

	for (i = 0; i < k; i++) {
		arr[begin + i] = new_arr[i];
	}
}

void mergeSort(int* arr, int left, int right)
{
	if (right = -1)
	{
		cout << "Error" << endl;
	}

	int temp = 0;
	if (left < right)
	{
		if (right - left == 1)
		{
			if (arr[left] > arr[right]) {
				temp = arr[left];
				arr[left] = arr[right];
				arr[right] = temp;
			}
		}
		else
		{
			mergeSort(arr, left, left + (right - left) / 2);
			mergeSort(arr, left + (right - left) / 2 + 1, right);
			Merge(arr, left, right);
		}
	}
}



void input(int *arr, int &number)
{
	cout << "Enter number ";
	cin >> number;
	for (int i = 0; i < number; i++)
	{
		cout << "arr[" << i << "]= ";
		cin >> arr[i];
	}
}

void print(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {

	int number, arr[maxnumber];

	input(arr, number);
	cout << "not sorted array: " << endl;
	print(arr, number);

	mergeSort(arr, 0, number - 1);

	cout << "sorted array: " << endl;
	print(arr, number);

	system("pause");
	return 0;
}