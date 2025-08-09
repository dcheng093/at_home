def countDigits(n):
    res = 0
    s = str(n)
    for _ in range(0, len(s)):
        res += 1
    return res

def countDigits3(n):
    count = 0
    while n > 1:
        n /= 10
        count += 1
    return count

print(countDigits3(24))