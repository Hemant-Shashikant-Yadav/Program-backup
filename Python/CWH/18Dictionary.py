#1
thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}
print(thisdict)
print(thisdict["brand"])
print(len(thisdict))

thisdict1 = {
    "brand": "Ford",
    "electric": False,
    "year": 1964,
    "colors": ["red", "white", "blue"]
}

print(thisdict1)
print(thisdict1["colors"])
print(len(thisdict1))


thisdict = dict(name = "John", age = 36, country = "Norway")
print(thisdict)


car = {
"brand": "Ford",
"model": "Mustang",
"year": 1964
}

x = car.keys()
print(x) #before the change
car["color"] = "white"
print(x) #after the change

x = car.values()
print(x) #before the change
car["year"] = 2020
print(x) #after the change


x = car.items()
print(x) #before the change
car["year"] = 2020
print(x) #after the change

if "model" in thisdict:
    print("Yes, 'model' is one of the keys in the thisdict dictionary")


#2
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
'''
thisdict["color"] = "red"
print(thisdict)

thisdict.update({"color": "red"})

thisdict.pop("model")
print(thisdict)

thisdict.popitem()
print(thisdict)

del thisdict["brand"]
print(thisdict)

'''
#del thisdict
#print(thisdict)

#thisdict.clear()
#print(thisdict)

#3
for x in thisdict:
    print(x)


for x in thisdict:
  print(thisdict[x])

for x in thisdict.values():
  print(x)

for x in thisdict.keys():
  print(x)

for x, y in thisdict.items():
  print(x, y)

mydict = thisdict.copy()
print(mydict)

mydict = dict(thisdict)
print(mydict)

#4
myfamily = {
  "child1" : {
    "name" : "Emil",
    "year" : 2004
  },
  "child2" : {
    "name" : "Tobias",
    "year" : 2007
  },
  "child3" : {
    "name" : "Linus",
    "year" : 2011
  }
}


child1 = {
  "name" : "Emil",
  "year" : 2004
}
child2 = {
  "name" : "Tobias",
  "year" : 2007
}
child3 = {
  "name" : "Linus",
  "year" : 2011
}

myfamily = {
  "child1" : child1,
  "child2" : child2,
  "child3" : child3
}

print(myfamily["child2"]["name"])

'''
Method      	Description
clear()	        Removes all the elements from the dictionary
copy()      	Returns a copy of the dictionary
fromkeys()  	Returns a dictionary with the specified keys and value
get()	        Returns the value of the specified key
items()	        Returns a list containing a tuple for each key value pair
keys()	        Returns a list containing the dictionary's keys
pop()	        Removes the element with the specified key
popitem()	    Removes the last inserted key-value pair
setdefault()	Returns the value of the specified key. If the key does not exist: insert the key, with the specified value
update()	    Updates the dictionary with the specified key-value pairs
values()	    Returns a list of all the values in the dictionary

'''
