#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

#define PI 3.1415
#define a 0.0001

float binary_search(float n);
float deg(float n, float r);


float deg(float n, float r){
  float d = 0;
  for (int i = 1; i <= n; i++)
  {
    float k = (acos(1-((i*i)/(2*r*r))));
    if(isnan(k) != true){
      d += k;
    }
  }

  return d;
}

float binary_search(float n){
  float low = n/2;
  float high = n*n;

  while (high - low > a){
    float mid = (low + high) / 2;

    float p = 0;
    p = deg(n, mid);

    if (p < 2 * PI)
      high = mid;
    else
      low = mid ;

  }
  float z = (high+low) / 2;
  return z;

}
int main() {
  float R, N;

  cin >> N;
  R = binary_search(N);
  cout << setprecision(5) << R;
  return 0;
}