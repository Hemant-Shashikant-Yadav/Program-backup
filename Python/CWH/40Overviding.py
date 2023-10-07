class Shape:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def area(self):
        return self.x * self.y

class Rectangle(Shape):
    def __init__(self, len,bre):
        self.len = len
        self.bre = bre
        super().__init__(len, bre)

    def area(self):
        return super().area()

class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius
        super().__init__(radius, radius)

    def area(self):
        return 3.14 * super().area()


rec = Shape(3, 5)
print(rec.area())

c = Circle(5)
print(c.area())

r = Rectangle(10,15)
print(r.area())