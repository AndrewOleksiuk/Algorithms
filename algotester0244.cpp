#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, in = 0, out = 0;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		string a;
		cin>>a;
		if(a == "In")
			in++;
		else
			out++;	
	}
if(in > out)
	cout<<"Cunning elector";
else if (in == out)
	cout<<"Just a fantasy";
else
	cout<<"Error";
	return 0;
}