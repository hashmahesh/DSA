def check_prime(n):
    cnt = 0
    for i in range(1,n+1):
        if n%i==0:
            #print(i)
            cnt += 1
            if(cnt>2):
                return False
    if cnt == 2:
        return True
