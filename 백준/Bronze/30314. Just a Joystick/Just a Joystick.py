n = int(input())
l = []
l.append(input())
l.append(input())
sum = 0

for i in range(n):
    a = ord(l[0][i]) - ord(l[1][i])
    if a < 0 : a = -a
    if a > 13 : a = 26 -a
    sum += a

print(sum)