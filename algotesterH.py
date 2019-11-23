n, f = map(int, input().split())
liist = list(map(int,input().split()))
liist.sort()
dic = {i: False for i in liist}
dic[liist[0]] = True
k_old = int(f/liist[0])
for j in range(1,k_old+1):
    dic[j] = True
    
for i in range(1, n):
    if dic[i] is True:
        k_new = int(f/liist[i]) + k_old
        for j in range(k_old+1, k_new+1):
            dic[j] = True
counter = 0
for i in dic:
    if dic[i] is True:
        counter += 1
if counter > n:
    counter = n
print(counter)
    

    

