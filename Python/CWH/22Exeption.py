try:
    num = int(input("Enter an integer: "))
except ValueError:
    print("Number entered is not an integer.")


'''  
except:
    print("Some error occurred")
    return 0
    

except IndexError:
  print("Index Error")
  
  
  Custom
  
  a = int(input("Enter any value between 5 and 9"))

if(a<5  or a>9):
  raise  ValueError("Value should be between 5 and 9")
 
'''