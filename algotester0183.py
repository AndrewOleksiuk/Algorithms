from math import sqrt
coordinates = list(map(int, input().split()))
N, K = map(int, input().split())
fires = []
for i in range(N):
    fires.append(list(map(int, input().split())))
length = []
for i in fires:
    length.append(sqrt((coordinates[0]-i[0])**2 + (coordinates[1]-i[1])**2))
length.sort()
print(round(length[K-1],8))
