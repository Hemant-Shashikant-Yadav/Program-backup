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

