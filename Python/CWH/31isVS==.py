# 'is' checks exact location of object in memory
# '==' checks if value is same (location is diffrent)

a = [1, 2, 3]
b = [1, 2, 3]

print(a == b)  # True
print(a is b)  # False

a = "hello"
b = "hello"

print(a == b)  # True
print(a is b)  # True

a = 5
b = 5

print(a == b)  # True
print(a is b)  # True