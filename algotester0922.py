string = input()
counter = 0
for i in range(len(string) - 1):
    if string[i] == string[i+1]:
        counter += 1
print(counter)
