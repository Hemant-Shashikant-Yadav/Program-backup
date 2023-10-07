# List of numbers
numbers = [1, 2, 3, 4, 5]

def double(x):
    return x*2

doubled = list(map(double, numbers))
print(doubled)


# Double each number using the map function
doubled = list(map(lambda x: x * 2, numbers))

# Print the doubled numbers
print(doubled)

# # FILTER
def filter_function(a):
  return a>2

newnewl = list(filter(filter_function, numbers))
print(newnewl)


from functools import reduce

# List of numbers
numbers = [1, 2, 3, 4, 5]
# [1, 2, 3, 4, 5]
# [3, 3, 4, 5]
# [6, 4, 5]
# [10, 5]
# [15]

# Calculate the sum of the numbers using the reduce function
sum = reduce(lambda x, y: x + y, numbers)

# Print the sum
print(sum)




