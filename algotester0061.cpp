#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int** liist;
	liist = new int*[a];
	for (int i = 0; i < a; i++)
	{
		liist[i] = new int[b];
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cin >> liist[i][j];
		}
	}

	int minn = liist[0][0];
	int index = 0;

	for (int i = 0; i < a ; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (liist[i][j] <= minn)
			{
				minn = liist[i][j];
				index = j;
			}
		}
	}

	int maxx = 0;
	for (int i = 0; i < a; i++)
	{
		if (liist[i][index] >= maxx)
		{
			maxx = liist[i][index];
		}
	}
	cout << maxx;
	system("pause");
	return 0;
}
