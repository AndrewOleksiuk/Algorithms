n = int(input())
corners = list(map(int, input().split()))
last_corner = 0
minn = min(corners)
maxx = max(corners)
last_corner = minn + maxx
corners.append(last_corner)
maxx = max(corners)
print(maxx/2)
