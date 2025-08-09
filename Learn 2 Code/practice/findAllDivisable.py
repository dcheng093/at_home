def findAllDivisable(nums, divisor):
    res = []
    for num in nums:
        if num % divisor == 0:
            res.append(num)
    return res

print(findAllDivisable([10, 20, 30, 25, 40], 5))