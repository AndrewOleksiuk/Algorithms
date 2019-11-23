n = int(input())
liist = list(map(int, input().split()))
x = int(input())
liist.sort()
summ = sum(liist)
i = 0
while summ >= x:
    summ -= liist[i]
    i += 1
    n -= 1
summ += liist[i-1]
n += 1
print(round(summ/n, 4))
