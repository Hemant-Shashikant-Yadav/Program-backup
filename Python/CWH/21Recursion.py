def factorial(num):
    if (num == 1 or num == 0):
        return 1
    else:
        return (num * factorial(num - 1))

    # Driver Code


num = 7;
print("Number: ", num)
print("Factorial: ", factorial(num))

i = 0
while i<7:
  print(i)
  i = i + 1
  # if i == 4:
  #   break


#Else in loop
for x in range(5):
    print ("iteration no {} in for loop".format(x+1))
else:
    print ("else block in loop")
print ("Out of loop")