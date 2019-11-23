#include <iostream>
using namespace std;

int main()
{
int n;
cin>>n;
int summ = 0;

for(int i = 0; i < n; i++)
{
int a;
cin>>a;
summ += a;
}

if(summ % 2 == 0)
{
cout<<"YES";
}
else
{
cout<<"NO";
}

return 0;
}