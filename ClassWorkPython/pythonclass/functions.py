#declaring function
def addTwo(num1,num2):
    total = num1 + num2
    return total

#inputs
num1=int(input("Enter the first number >>> "))
num2=int(input("Enter the second number >>> "))
#calling function
sum = addTwo(num1,num2)
print(sum)