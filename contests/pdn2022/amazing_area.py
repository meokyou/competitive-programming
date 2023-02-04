import math

for _ in range(int(input())):
    a, k, b = map(int, input().split("-"))
    area = 0.5 * a * b * math.sin(math.radians(k))
    print("{:.2f}".format(round(area, 2)))