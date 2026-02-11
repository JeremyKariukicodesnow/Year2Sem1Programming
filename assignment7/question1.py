def inputList():
    num=int(input("Kindly input length of your list >>> "))
    myList=[]
    for i in range(num):
        listInput=int(input("Input number to list >>> "))
        myList.append(listInput)

    return myList,num

def findLargest(myList):
    largest=myList[0]
    for i in myList:
        if i > largest:
            largest=i
    return largest

def findSmallest(myList):
    smallest=myList[0]
    for i in myList:
        if i < smallest:
            smallest=i
    return smallest

def findSum(myList):
    sum=0
    for i in myList:
        sum+=i
    return sum

def sortList(myList):
    temp=0
    for i in range(len(myList)):
        for j in range(len(myList)-1):
          if(myList[j] > myList[j+1]):
              temp=myList[j]
              myList[j]=myList[j+1]
              myList[j+1]=temp
    return myList


def findAverage(add,numb):
    average=add/numb
    return average
    

theList,length=inputList()
print(f"\nThe input list : {theList}")
print(f"The smallest number : {findSmallest(theList)}")
print(f"The largest number : {findLargest(theList)}")
print(f"The sum : {findSum(theList)}")
add=findSum(theList)
print(f"The average : {findAverage(add,length)}")
print(f"The sorted list : {sortList(theList)}")
