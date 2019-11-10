n, m = map(int, input().split())

letters = ['A','B','C','D','E','F', 'G', 'H','I','J','K','L','M','N','O',
                    'P','Q','R','S','T', 'U','V', 'W', 'X','Y', 'Z']
k = 0
if n*m % 2 == 0:
    if m % 2 == 0:
        for i in range(n):
            string, f = '', 0
            while f < m:
                string += letters[k]
                f += 1
                string += letters[k]
                f += 1
                k += 1
            print(string)
    else:
        num = 0
        for i in range(n):
            string, f = '', 0
            while f < m - 1:
                string += letters[k]
                f += 1
                string += letters[k]
                f += 1
                k += 1
            if num == 0:
                string += letters[k]
                remember = k
                num += 1
                k += 1
            else:
                string += letters[remember]
                num = 0
                k += 1
            print(string)
            
else:
    print(-1)
