def check_prime(n) :
    if n==1 :
        return False

    else :
        for k in range(2,int(n**0.5)+1) :
            if n%k==0 :
                return False
        return True

m, n = map(int, input().split())

for k in range(m, n+1) :
    if check_prime(k):
        print(k)