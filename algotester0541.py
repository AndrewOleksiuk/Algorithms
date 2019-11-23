from math import factorial
string = input()
n = len(string)
k = n - 1
res = factorial(n)/factorial(k)
print(int(res))
