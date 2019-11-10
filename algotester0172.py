n, m, k = list(map(int, input().split()))
ballots = list(map(int, input().split()))

workingEmployees = 1
summ = 0
for i in range(m):
    if summ + ballots[i] > k:
        workingEmployees+=1
        summ = ballots[i]
    else:
        summ += ballots[i]     
if workingEmployees <= n:
    print(n - workingEmployees)
else:
    print(-1)
