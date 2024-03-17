n = int(input())

list = input().split()

for x in range(len(list)):
    list[x] = int(list[x])

count = []

i = 0
for x in range(len(list)):
    if list[x] > 0:
        i += 1
    else: 
        count.append(i)
        i = 0

# 양수로 끝나는 경우를 처리하기 위해 추가
count.append(i)

print(max(count))