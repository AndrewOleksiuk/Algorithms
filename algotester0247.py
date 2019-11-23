n, s = map(int, input().split())
liist1 = list(map(int, input().split()))
liist2 = list(map(int, input().split()))
counter = 0
for i in range(n):
    counter += abs(liist1[i] - liist2[i])
print(s - counter)
