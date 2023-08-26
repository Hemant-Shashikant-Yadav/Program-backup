'''
#Creation of string
name = "HY"

work = 'Student'

description = \'''
Hello,
I am Hemant Shashikant Yadav,
Pursuing B.Tech.
\'''

#Print regular
print(name+"\n"+work+"\n"+description)

print(name[0])
print(name[1])

#Print using loop
print("Lets use a for loop\n")
for character in work:
    print(character)
'''

'''
#String Slicing
fruit = "Mango"
print(fruit)
mangoLen = len(fruit)
print(mangoLen)
print(fruit[0:4]) # including 0 but not 4
print(fruit[1:4]) # including 1 but not 4
print(fruit[:5])
print(fruit[::-1])
print(fruit[0:-3])
print(fruit[:len(fruit)-3])
print(fruit[-1:len(fruit) - 3])
print(fruit[-3:-1])

'''
'''
#1
a = "!!!Harry!! !!!!!!!!! Harry"

print(a)
print(len(a))

print(a.upper())
print(a.lower())

print(a.rstrip("Harry"))# removes any trailing characters (characters at the end a string), space is the default trailing character to remove.

print(a.replace("Harry", "John"))

print(a.split(" "))

print(a.count("Harry"))

#2
blogHeading = "introduction tO jS"
print(blogHeading.capitalize())

#3
str1 = "Welcome to the Console!!!"
print(len(str1))

print(str1.center(50))#Pdding & centaring

print(str1.endswith("!!!"))

print(str1.endswith("to", 4, 10))

print(str1.find("the"))
print(str1.index("the"))


#4

str1 = "WelcomeToTheConsole"
print(str1.isalnum()) # returns True if all characters in the string are alphanumeric (either alphabets or numbers)
str1 = "Welcome"
print(str1.isalpha()) #returns True if all the characters are alphabet letters (a-z). spce also not considered.

str1 = "hello world"
print(str1.islower())

str1 = "We wish you a Merry Christmas\n"
print(str1.isprintable()) #'\n' not considered as printable

str1 = "         "       #using Spacebar
print(str1.isspace())
str2 = "    "       #using Tab
print(str2.isspace())

str1 = "World Health Organization"
print(str1.istitle()) #returns True if all words in a text start with a upper case letter, AND the rest of the word are lower case letters

str2 = "To kill a Mocking bird"
print(str2.istitle())

'''
