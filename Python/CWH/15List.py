list1 = ["apple", "banana", "cherry"]
list2 = [1, 5, 7, 9, 3]
list3 = [True, False, False]
thislist = list(("apple", "banana", "cherry"))

#1
list4 = ["abc", 34, True, 40, "male"]

print(list4)
print(len(list4))
print(list4[1])
print(list4[-1])

if 34 in list4:
    print("Yes")
else:
    print("No")

if "ma" in "male":
    print("Yes")
else:
    print("No")

#2
#List of squares of index position number
lst = [i*i for i in range(10)]
print(lst)

#List of even number in given range
lst = [i*i for i in range(10) if i%2==0]
print(lst)

#3
# program to take space separated input as a string split and store it to a list

string = input("Enter elements (Space-Separated): ")

lst = string.split()
print('The list is:', lst)

#4
# Creating a Multi-Dimensional List
List = [['Geeks', 'For'], ['Geeks']]

print("Accessing a element from a Multi-Dimensional list")
print(List[0][1])
print(List[1][0])

#5
List = []
print("Initial blank List: ")
print(List)

List.append(1)
List.append(2)
List.append(4)
print(List)

# Adding Tuples to the List
List.append((5, 6))
print("\nList after Addition of a Tuple: ")
print(List)

# Addition of List to a List
List2 = ['For', 'Geeks']
List.append(List2)
print("\nList after Addition of a List: ")
print(List)

#6
List = [1, 2, 3, 4]
print(List)

List.insert(3, 12)
List.insert(0, 'Geeks')
print(List)

#7
List = [1, 2, 3, 4]
print("Initial List: ")
print(List)

List.extend([8, 'Geeks', 'Always'])
print("\nList after performing Extend Operation: ")
print(List)


#8 Reversing a list
mylist = [1, 2, 3, 4, 5, 'Geek', 'Python']
mylist.reverse()
print(mylist)

my_list = [1, 2, 3, 4, 5]
reversed_list = list(reversed(my_list))
print(reversed_list)

#9
List = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
print("Initial List: ")
print(List)

List.remove(5)
List.remove(6)
print("\nList after Removal of two elements: ")
print(List)

#10

List = [1, 2, 3, 4, 5]

List.pop()
print("\nList after popping an element: ")
print(List)

List.pop(2)
print("\nList after popping a specific element: ")
print(List)

#11
List = ['G', 'E', 'E', 'K', 'S', 'F', 'O', 'R', 'G', 'E', 'E', 'K', 'S']
print("Initial List: ")
print(List)

Sliced_List = List[3:8]
print("\nSlicing elements in a range 3-8: ")
print(Sliced_List)

Sliced_List = List[5:]
print("\nElements sliced from 5th element till the end: ")
print(Sliced_List)

Sliced_List = List[:]
print(Sliced_List)
print("\nPrinting all elements using slice operation: ")

Sliced_List = List[:-6]
print("\nElements sliced till 6th element from last: ")
print(Sliced_List)

Sliced_List = List[-6:-1]
print("\nElements sliced from index -6 to -1")
print(Sliced_List)

Sliced_List = List[::-1]
print("\nPrinting List in reverse: ")
print(Sliced_List)


