import sys

num = int(sys.stdin.readline())
xy_position = []

for k in range(num):
    xy_position.append(list(map(int, sys.stdin.readline().split())))
xy_position.sort(key=lambda x: (x[0], x[1]))

for k in xy_position:
    print(k[0], k[1])