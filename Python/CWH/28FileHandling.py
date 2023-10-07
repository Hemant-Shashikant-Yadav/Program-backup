# a file named "geek", will be opened with the reading mode.
file = open('28readFile.txt', 'r')

# This will print every line one by one in the file
# for each in file:
#     print(each)

#print(file.read())
#print(file.read(6))

# print(file.readline())
# print(file.readline(2))

# print(file.readlines())


# Python code to illustrate split() function
data = file.readlines()
for line in data:
    word = line.split()
    print (word)

'''
# Python code to illustrate split() function
with open("28readFile.txt", "r") as file:
    data = file.readlines()
    for line in data:
        word = line.split()
        print (word)
'''


# Python code to create a file
file = open('28writeFile.txt','w')
file.write("This is the write command")
file.write("It allows us to write in a particular file")
file.close()

with open("28writeFile.txt", "w") as f:
    f.write("Hello World!!!")



# Python code to illustrate append() mode
file = open('28writeFile.txt', 'a')
file.write("This will add this line")
file.close()


with open('28readFile.txt', 'r') as f:
  # Move to the 10th byte in the file
  f.seek(10)
  # Read the next 5 bytes
  data = f.read(5)

with open('28readFile.txt', 'r') as f:
  # Read the first 10 bytes
  data = f.read(10)

  # Save the current position
  current_position = f.tell()

  # Seek to the saved position
  f.seek(current_position)


with open('sample.txt', 'w') as f:
  f.write('Hello World!')
  f.truncate(5)
with open('sample.txt', 'r') as f:
  print(f.read())