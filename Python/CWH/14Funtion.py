#Funtion without arguments
x=10
y=15
def Addition():
    return x+y;

c = Addition()
print("Addition of ",x," and ",y," is = ",c)

#Funtion with arguments argument
def Add(a,b):
    c=a+b;
    print("Addition =", c)


Add(5,10)

# def Add( a = 10, b = 5 )        #Default argument

#The order of arguments can be changed during function call
'''
def Add(a,b):
    #Body
    
#call 
Add ( a=10,b=5)  is same as  Add( b = 5, a = 10)
'''

#Passing tuple as arguments
#We can use this to calculate answer if any number of arguments are sent to the funtion, no worry about the variable declaration in funtion declatation.

def findAverage(*numberTuple):
    sum = 0
    for i in numberTuple:
        sum+=i

    Avg = sum/len(numberTuple)
    return Avg

print("Average = ",findAverage(10,10,10,10))

#Passing dictionary as argument
def name(**name):
    # print(type(name))
    print("Hello,", name["firstName"], name["middleName"], name["lastName"])


name(firstName="James",middleName="Buchanan", lastName="Barnes" )
