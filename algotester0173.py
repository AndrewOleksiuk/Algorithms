def toSeconds(h, m, s):
    return h * 60 * 60 + m * 60 + s

n = int(input())

intervals = [[] for i in range(n)]

for i in range(n):
    h1, m1, s1, h2, m2, s2 = map(int, input().split())
    intervals[i] = [toSeconds(h1, m1, s1), toSeconds(h2, m2, s2)]

intervals.sort(key=lambda x: x[0])

result = toSeconds(20, 0, 0) - toSeconds(8, 0, 0)
start = intervals[0][0]
end = intervals[0][1]

for interval in intervals:
    if interval[0] <= end: 
         end = max(end, interval[1])
    else:
        result -= end - start
        start = interval[0]
        end = interval[1]
    

result -= end - start
print(result)


    
    
