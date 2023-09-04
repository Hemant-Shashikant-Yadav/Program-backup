# Function to double the input
# def double(x):
#   return x * 2

# Lambda function to double the input
double = lambda x: x * 2

print(double(4))

def appl(fx, value):
  return 6 + fx(value)

print(appl(lambda x: x * x , 2))

cube = lambda x: x * x * x
avg = lambda x, y, z: (x + y + z) / 3

# Lambda function to calculate the product of two numbers,
# with additional print statement
a = lambda x, y: print(f'{x} * {y} = {x * y}')

a(10,15)