#include <iostream>


#include <string>


#include <set>



using namespace std;




int main()


{


string a;


cin >> a;


set<char> b;


for(int i = 0; i < a.size(); i++)


{

    
b.insert(a[i]);


}


cout << b.size();


return 0;


}
