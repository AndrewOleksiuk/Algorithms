n = int(input())
liist = list(map(int,input().split()))
counter = 0
past_counter = 0
for i in range(n-1):
    if liist[i] < liist[i+1]:
        counter += 1
        if past_counter > 1:
            counter += past_counter
    else:
        past_counter += 1
print(counter)
