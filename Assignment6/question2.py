num = 6
for i in range(6,0,-1):
    for j in range(0,num):
        print(j,end='')
        if(j != num-1):
            print(" " , end=' ')
    num -= 1
    print()


num2 = 2

for i in range(5):
    for j in range(num2):
        print(j,end='')
        if(j != num2-1):
            print(" ",end=' ')
    num2 += 1
    print("\n")