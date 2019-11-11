import sys
def nsd(a,b):
    while a != 0 and b != 0:
        if a > b:
            a %= b
        else:
            b %= a
    return a + b

n = int(input())
if n == 1:
    print(n)
    sys.exit()
liist = list(map(int, input().split()))
GCD = 99999999999999
for i in liist:
    k = 1
    while k != n - 1:
        GCD = min(GCD, nsd(i, liist[k]))
        k += 1
num = 0
for i in liist:
    num += i/GCD
print(int(num))
