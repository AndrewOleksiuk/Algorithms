from math import sqrt

n = int(input())
string = input()

a = int(sqrt(n))
i = 2
while i < n-1:
    k = a - 1
    string[i], string[k] = string[k], string[i]
    #string = string[:i] + string[i+1] + string[i] + string[i+2:]
    i += a
print(string)

