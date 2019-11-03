#include <iostream>
#include <stack>

using namespace std;

void qsort(int * array, int first, int last) {
    int i = first, j = last;
    int m = array[(first + last) / 2], swap;
    do {
        while (array[i] < m) i++;
        while (array[j] > m) j--;
        if(i <= j) {
            if (i < j) {
                swap=array[i];
                array[i]=array[j];
                array[j]=swap;
            }
            i++;
            j--;
        }
    } while (i <= j);
    if (i < last)
        qsort(array, i, last);
    if (first < j)
        qsort(array, first,j);
}

int main() {
    int n;
    cin >> n;
    int monsters[n], current;
    for (int i = 0; i < n; ++i) {
        cin >> monsters[i];
    }
    qsort(monsters, 0, n-1);
    stack<long> distances;
    for (int i = 1; i < n; ++i) {
        current = monsters[i]-monsters[i-1];
        while (!distances.empty() && distances.top() == current) {
            distances.pop();
            current*=2;
        }
        distances.push(current);
    }
    if (distances.size() == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}