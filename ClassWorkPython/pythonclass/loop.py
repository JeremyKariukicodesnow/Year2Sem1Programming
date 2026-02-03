print(f"\n WHILE LOOPS \n")
count=0
sumEven=0
sumOdd=0
while (count <= 20):
    print(f"{count} " ,end='')
    if(count<20):
        print(f" , " , end='')
    if(count%2==0):
        sumEven+=count
    else:
        sumOdd+=count
    count +=1
print("\nGood Bye!")
print(f"Sum of even numbers is = {sumEven}")
print(f"Sum of odd numbers is = {sumOdd} \n")

num=1
while(num <= 5):
    num2=0
    while(num2 <= 5):
      print(f"{num2}" ,end='')
      if(num2<5):
        print(f" , " , end='')
      num2 +=1
    print(f"\n")
    num+=1


#for loop syntax is
#for(control variable in range(start,stop,step))
#descending
print(f"\n FOR LOOPS \n")
for numb1 in range(5):
  for numb in range(5,0,-1):
     print(f"{numb}",end='')
     if(numb>1):
        print(f" , " , end='')
  print("\n")

#ascending
  for numb2 in range(5):
    for numb3 in range(1,6,1):
     print(f"{numb3}",end='')
     if(numb3<5):
        print(f" , " , end='')
    print("\n")

#printing lists using for loops
print(f"\n ITERATING OVER LISTS \n")
numbers = [1,4,7,2,5,9,6,8,3]
for i in numbers:
  print(f"{i}")

print(f"\n BREAK AND CONTINUE STATEMENTS \n")
print(f"Break statements")

for i in range (1,11):
   if(i == 5):
      print(f"Break")
      break
   print(f"{i}")
print(f"\nContinue statements")
for i in range (1,11):
   if(i == 5):
      print(f"Continue ::: skipped {i}")
      continue
   print(f"{i}")

print()
name = "Benedict"
for i in name:
   if(i == "d"):
      break
   print(f" {i} " , end='')
print()
for i in name:
   if(i == "d"):
      continue
   print(f" {i} " , end='')