a, b = map(int, input().split())

liist = [list(map(int, input().split())) for i in range(a)]
minn = liist[0][0]
index = 0
for i in range(a):
    for j in range(b):
        if liist[i][j] < minn:
            minn = liist[i][j]
            index = j
maxx = 0
for i in range(a):
    if liist[i][index] > maxx:
        maxx = liist[i][index]

print(maxx)
	

