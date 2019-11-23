string = input()
counter = 0
flag = 0
n = len(string)
if n >= 3:
    for i in range(0, n - 1):
        if flag == 0:
            if string[i].islower() is True:
                counter += 1
            elif string[i].isupper() is True:
                flag = 1
                if string[i+1].isupper() and string[i+2].isupper():
                    counter += 3
                else:
                    counter += 2
        elif flag != 0:
            if flag > 2:
                if string[i].islower() is True:
                    flag = 0
                    counter += 2
                    continue
            elif flag == 2:
                if string[i].islower() is True:
                    flag = 0
                    counter += 1
                    continue
            else:
                if string[i].islower() is True:
                    flag = 0
                    counter += 1
                    continue
            flag += 1
            counter += 1
        
    if flag != 0:
        if string[n-1].isupper():
            counter += 1
        else:
            if flag == 1:
                counter += 1
            else:
                counter += 2
    else:
        if string[n-1].isupper():
            counter += 2
        else:
            counter += 1

    
print(counter)
        
    
