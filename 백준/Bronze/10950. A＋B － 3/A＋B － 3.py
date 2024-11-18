import sys
num=int(sys.stdin.readline().rstrip())
while(num>0):
    a,b=map(int,input().split())
    print(a+b)
    num-=1