def checkSort(arr = []):
    res = 0
    for i in range(0, len(arr)):
        if arr[i] >= res:
            res = arr[i] 
        else:
            return False
    return True

def checkSort2(nums=[]):
    prev = 0
    for num in nums:
        if num >= prev:
            prev = num
        else:
            return False
    return True
        
#for num in nums
#for i in range(0, len(arr))
#0 <= n < N

print(checkSort2([1, 2, 4, 6, 8]))