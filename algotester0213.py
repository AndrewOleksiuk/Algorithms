n, m = map(int, input().split())

li = []



for x in range(n):

    li.append(list(map(int, input().split())))


max = []


for x in range(m):

    max.append(0)



for i in li:

    for x in range(m):

        if i[x] > max[x]:

            max[x] = i[x]



i = 0

for x in max:

    i += x



print(i)
