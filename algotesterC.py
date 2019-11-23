N, Alarm = map(int, input().split())
liist = []
for i in range(N):
    liist.append(list(map(int, input().split())))
sum_min = 0
sum_max = 0
for i in liist:
    sum_min += i[0]
    sum_max += i[1]
if sum_min >= Alarm:
    print('Certainly')
elif sum_max < Alarm:
    print('Impossible')
else:
    print('Possibly')

