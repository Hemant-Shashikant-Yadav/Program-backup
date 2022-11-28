import numpy as  np
arr = np.array([11,2,33,4,45,65,7,83,9,10])
print(arr)
print(np.sort(arr))
print(arr[1:6])
x = np.where(arr==4)
print(x)
newarr = np.array_split(arr,2)
print(newarr)