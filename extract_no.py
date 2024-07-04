import math
def extract():
  ans = []
  while N > 0:
    last_digit = N%10
    ans.append(last_digit)
    N = N/10
 ans.reverse()
 return ans
  
