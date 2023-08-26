num = int(input("Enter a number = "))

print(num)

match num:
    case 0:
        print("Number is zero.")
    case _ if num % 2 == 0:
        print("Number is even")
    case _ :
        print("Number is odd")
        