def findSum(nums = []):
    res = 0
    for num in nums:
        if num % 2 == 0:
            res += num
    return res

print(findSum([1, 2, 3, 4, 5, 6, 8]))