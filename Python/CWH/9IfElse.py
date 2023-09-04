a = int(input("Enter your age: "))
print("Your age is:", a)
# Conditional operators
# >, <, >=, <=, ==, !=

#If-Else
if(a>18):
  print("You can drive")
  print("Yes")
else:
  print("You cannot drive")
  print("No")
  print("Yay!")
print("This is outside the if-else condition")

#If-Elif-Else
num = int(input("Enter the value of num: "))
if (num < 0):
  print("Number is negative.")
elif (num == 0):
  print("Number is Zero.")
elif (num == 999):
  print("Number is Special.")
else:
  print("Number is positive.")

print("I am happy now")

#Nested If-Else
if (num < 0):
    print("Number is negative.")
elif (num > 0):
    if (num <= 10):
        print("Number is between 1-10")
    elif (num > 10 and num <= 20):
        print("Number is between 11-20")
    else:
        print("Number is greater than 20")
else:
    print("Number is zero")

a = 330000
b = 3303
print("A") if a > b else print("=") if a == b else print("B")
c = 9 if a > b else 0
print(c)