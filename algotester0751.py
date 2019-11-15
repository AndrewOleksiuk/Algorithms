n = input()
liist = list(map(int, input().split()))
liist.sort()
counter = liist[0]
for i in range(1, len(liist)):
    counter = (counter + liist[i])/2

print(round(counter, 9))
