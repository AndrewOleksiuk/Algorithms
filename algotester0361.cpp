#include <iostream>

#include <algorithm>

using namespace std;

int main()
{
    
    int a[200000]={0};
    
    int n,k;

    bool b=false;

    cin>>n>>k;

    int z;

    for(int i=0;i<n;i++)
    {

        cin>>z;

        a[z]++;

        if(a[z]==k)
        {
            
          b=true;

        }
    
    }

    if (b)
    {

      for (int i = 0; i < 200000; i++)
       {

           while (a[i] > 0)
    	  {

               cout << i << " ";

               a[i]--;

          }
 
       }
 
    }

    else 
    {
	cout<<"Oh sh*t";
    }
}
  