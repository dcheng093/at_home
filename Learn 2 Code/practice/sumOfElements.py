def sumOfElements(nums = []):
    res = 0
    for num in nums:
        res += num
    return res

print(sumOfElements([1, 2, 3, 4, 5, 6]))