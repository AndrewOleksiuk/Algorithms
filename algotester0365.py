N = int(input())

numbers = list(map(int, input().split()))

numbers.sort()

comb = 1

for i in range(N-1):

    if numbers[i] < numbers[i+1]:

        comb += 1

print(comb)
