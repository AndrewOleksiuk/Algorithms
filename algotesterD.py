n = int(input())
liist = list(map(int, input().split()))
liist.sort()
res_liist = []
i = 0
while i < 2*n:
    res_liist.append([liist[i], liist[i+1]])
    i += 2
for i in res_liist:
    print(str(i).strip('[ ]').replace(',',''))
