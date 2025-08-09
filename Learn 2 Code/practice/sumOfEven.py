def sumOfElements(nums = []):
    res = 0
    for num in nums:
        if num % 2 == 0:
            res += num
    return res

print(sumOfElements([1, 2, 3, 4, 5, 6]))