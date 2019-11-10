
a, b = map(int, input().split())
number = b - a + 1
for i in range(a, b+1):
    if "6" in str(i):
        number -= 1
    
print(number)
