def sumOfElements(n):
    return sum(n)

def sumOfElements2(n):
    res = 0
    for num in n:
        res += num
    return res

print(sumOfElements2([1, 2, 3, 4, 5, 6]))