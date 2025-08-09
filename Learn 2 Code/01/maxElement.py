def maxElement(arr = []):
    return max(arr)

def maxElement(arr = []):
    res = 0
    for i in range(0, len(arr)):
        if arr[i] > res:
            res = arr[i]
    return res

print(maxElement([3,7,2,9,5]))