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
# LEETCODE PROBLEM SOLUTION :
class Solution(object):
    def isPalindrome(self, x):
        #x = int(input())
        N = 0
        orig = x
        if x<0:
            return False
        while x>0:
            l = x%10
            N = (N*10) + l
            x = x//10
        return orig == N
