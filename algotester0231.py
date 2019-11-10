from math import sqrt, pi
R, h = map(int, input().split())
d = sqrt(h * (2 * R + h));
cosd = (R * R + (R + h) * (R + h) - d * d) / (2 * R * (R + h));
square = 2 * pi * R * R * (1 - cosd);
print(square);
