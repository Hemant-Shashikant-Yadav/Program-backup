val = 'Geeks'
print(f"{val} for {val} is a portal for {val}.")

name = 'Tushar'
age = 23
print(f"Hello, My name is {name} and I'm {age} years old.")

# Prints today's date with help
# of datetime library
import datetime

today = datetime.datetime.today()
print(f"{today:%B %d, %Y}")


txt = "For only {price:.2f} dollars!"
print(txt.format(price = 49))


letter = "Hey my name is {1} and I am from {0}"
country = "India"
name = "Harry"

print(letter.format(country, name))

print(f"Hey my name is {name} and I am from {country}")


price = 49.09999
txt = f"For only {price:.2f} dollars!"
print(txt)
print(txt.format())
















