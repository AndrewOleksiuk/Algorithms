N = int(input())

list1 = list()

list2 = list()

for i in range(N):
    
	a,b = map(int,input().split())
    
	list1.append(a)
    
	list2.append(b)



list1.sort()

list2.sort()



max1 = list1[N-1]

max2 = list2[N-1]

summ = 0

for i in list1:
    
	summ+=max1-i

for i in list2:
    
	summ+=max2-i



print(summ)