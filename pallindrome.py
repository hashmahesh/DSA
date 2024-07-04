n=int(input())  
org = n
r = 0
while(n>0):
    l = n%10
    r = (r*10) + l
    n = n//10                 #USE INTEGER DIVISION **
    
if(r == org):
    print('true')
else:
    print('false')
