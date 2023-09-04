class Person:
    name = "Harry"
    occupation = "Software Developer"
    networth = 10

    def info(self):
        print(f"Hello I am {self.name} and i work as a {self.occupation}")


a = Person()
b = Person()
c = Person()

a.name = "Shubham"
a.occupation = "Accountant"

b.name = "Nitika"
b.occupation = "HR"

print(a.name, a.occupation)
a.info()
b.info()
c.info()


# Constructor
class Person1:

    def __init__(self, name, occ):
        print("Hey I am a person")
        self.name = name
        self.occ = occ

    def info1(self):
        print(f"{self.name} is a {self.occ}")


a = Person1("Harry", "Developer")
b = Person1("Divya", "HR")
a.info1()
b.info1()
print(a.name)
a.name = "Divya"
a.occ = "HR"
a.info1()


# 3 Decorators

def greet(fx):
    def mfx(*args, **kwargs):
        print("Good Morning")
        fx(*args, **kwargs)
        print("Thanks for using this function")

    return mfx


@greet
def hello():
    print("Hello world")


@greet
def add(a, b):
    print(a + b)


# greet(hello)()
hello()
# greet(add)(1, 2)
add(1, 2)


# Getters and Setters

class MyClass:
    def __init__(self, value):
        self._value = value

    @property
    def value(self):
        return self._value

    @value.setter
    def value(self, new_value):
        self._value = new_value
