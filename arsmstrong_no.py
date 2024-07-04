def checkArmstrong(n):
    org_n = n  # Store the original value of n
    sum = 0  # Initialize sum to 0
    while n > 0:
        last = n % 10
        sum = sum + (last * last * last)
        n = n // 10
    if sum == org_n:
        return True
    else:
        return False
