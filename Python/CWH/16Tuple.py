#1
# Creating an empty Tuple
Tuple1 = ()
print("Initial empty Tuple: ")
print(Tuple1)

#2
thistuple = ("apple", "banana", "cherry", "apple", "cherry", True, 40, "male")
print(thistuple)

print(len(thistuple))

print(type(thistuple))

#3
# Creating a Tuple
# with nested tuples
Tuple1 = (0, 1, 2, 3)
Tuple2 = ('python', 'geek')
Tuple3 = (Tuple1, Tuple2)
print("\nTuple with nested tuples: ")
print(Tuple3)

#4
# Creating a Tuple
# with repetition
Tuple1 = ('Geeks',) * 3
print("\nTuple with repetition: ")
print(Tuple1)

#5
# Tuple unpacking
Tuple1 = ("Geeks", "For", "Geeks")

# This line unpack
# values of Tuple1
a, b, c = Tuple1
print("\nValues after unpacking: ")
print(a)
print(b)
print(c)

#6

# Concatenation of tuples
Tuple1 = (0, 1, 2, 3)
Tuple2 = ('Geeks', 'For', 'Geeks')

Tuple3 = Tuple1 + Tuple2

#7

# Slicing of a Tuple

# Slicing of a Tuple
# with Numbers
Tuple1 = tuple('GEEKSFORGEEKS')

# Removing First element
print("Removal of First Element: ")
print(Tuple1[1:])

# Reversing the Tuple
print("\nTuple after sequence of Element is reversed: ")
print(Tuple1[::-1])

# Printing elements of a Range
print("\nPrinting elements between Range 4-9: ")
print(Tuple1[4:9])

#8
# Deleting a Tuple

Tuple1 = (0, 1, 2, 3, 4)
del Tuple1

print(Tuple1)

#9
#Tuples are unchangeable, or immutable
# You can convert the tuple into a list, change the list, and convert the list back into a tuple.
#9.1
x = ("apple", "banana", "cherry")
y = list(x)
y[1] = "kiwi"
x = tuple(y)

print(x)

#9.2
thistuple = ("apple", "banana", "cherry")
y = list(thistuple)
y.append("orange")
thistuple = tuple(y)

#9.3
thistuple = ("apple", "banana", "cherry")
y = ("orange",)
thistuple += y

print(thistuple)

#9.4
thistuple = ("apple", "banana", "cherry")
y = list(thistuple)
y.remove("apple")
thistuple = tuple(y)

