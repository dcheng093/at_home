def swap(arr, a, b):
    tmp = arr[a]
    arr[a] = arr[b]
    arr[b] = tmp
    return arr

print(swap([1, 2, 3, 4], 0, 3))