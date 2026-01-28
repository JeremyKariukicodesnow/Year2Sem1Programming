x=2
y=10
z=x+y
print(z)

if(x < y):
    print(f"X = {x} is less than Y = {y}")
    print(f"This is good")
else:
    print(f"Y = {y} is less than X ={x}")
    print(f"Not good")


print(f"\n STRINGS")
myName = 'Jeremy Mwangi'
print(f"{myName}")
print(f'{myName[0]}')
print(f'{myName[6]}')#this will be blank coz character is a whitespace
print(f'{myName[7]}')
print(f'{myName[7:]}')#will print charcters from 7 to last character
print(f'{myName[:6]}')#will print characters all from 0 to 6 but wont include 6
others="Kenyatta University"
print(myName + " " + others)
fullName= myName + " " + others
print(f"{fullName}")
print(f"{myName * 2}")#prints the string myNmae twice

print(f"\n LISTS")#lists use [] as brackets and an array that holds different data types
myList = [ 2 , 4.0 , 'r' , 'd' , "Jeremy Mwangi" ]
print(f"myList")
print(f"{myList[0]}")
print(f"{myList[4]}")

myList1= [ 1 , 2 , 3 , 'red' , 'green' , 'blue' , 6.7 , 4.5 ]
combList = myList + myList1
print(f"{combList}")
print(f"{combList[:]}")#prints everything in combList
print(f"{combList[8:]}")#prints everything after/including index 8
print(f"{combList[:8]}")#prints everything before index 8

print(f"{combList[2:4]}")#prints from /including index 2 till before index 4 or rather til index 3
newList=combList[2:5]
print(f"{newList}")

print("\nTUPLES")# use parantheses ()
myTuple = ( 1 , 6 , 7.9 , 'j' , "Kariuki")
print(f"{myTuple}")
print(f"{myTuple[:]}")
print(f"{myTuple[:3]}")
print(f"{myTuple[3:]}")
print(f"{myTuple[1:5]}")
#myTuple[3] = 'k'#cannot edit a tuple but can edit a list so this will fail

print("\nDICTS")#Dictionaries is a table or a 2d array and use {name:value , name:value}
print(f"Dictionaries is a table or a 2d array and use ""{name:value , name:value}")#to escape in a string use ""

print("\nTYPE CONVERSION")
num = 2
print(f"{num} integer")
num1 = float(num)
print(f"{num1} float")