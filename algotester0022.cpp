#include <iostream>

using namespace std;


long gcd(long a, long b) 

{

        long t;

        if (a < b)
 
	{

            t = a;

            a = b;

            b = t;

        }


        return (b == 0) ? a : gcd(b, a % b);

}



long gcd(long* numbers, int p, int q)
{

  
      long x;

        int r = (q + p) / 2;

        if (p == q)
 
	    {

            return numbers[p];

        }
 
	else
 
	{

            long left = gcd(numbers, p, r);

            long right = gcd(numbers, r + 1, q);

            x = gcd(left, right);

            return x;

        
    }

}


int main()
 {

	int n;

	cin >> n;

        long* parties = new long[n];

        for (int i = 0; i < n; i++)
 
            cin >> parties[i];

        long a = gcd(parties, 0, n - 1);

        long result = 0;

        for (int i = 0; i < n; i++)
 
            result += parties[i] / a;

        
        cout << result;


	return 0;
  
}
