def findDivisable(nums = [], divisor = 1):
    res = []
    for num in nums:
        if num % divisor == 0:
            res.append(num)
    return res

print(findDivisable([10, 20, 30, 25, 40], 5))