from math import sqrt

a,b,c,r = map(int, input().split())

p = (a + b + c) / 2
R = a*b*c / (4 * sqrt(p * (p - a)*(p - b)*(p - c)))
s = ''
if r >= R:
    s += '+'
else:
    s += '-'

r1 = sqrt(((p-a)*(p-b)*(p-c))/p)
if r <= r1:
    s += '+'
else:
    s += '-'
print(s)
