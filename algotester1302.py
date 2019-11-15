str1 = input()
str2 = str1
if str1[0] == '*':
    strr = '1' + str1[1:]
    strr = strr.replace('*','0')
    num1 = int(strr)
else:
    str1 = str1.replace('*','0')
    num1 = int(str1)
str2 = str2.replace('*','9')
num2 = int(str2)
print(num1, num2)
