n=int(input("n >>> "))
m=int(input("m >>> "))

i=0
while i < n:
    j=0
    while j < m:
        print("*&",end='')
        if(j != m-1):
            print(" " , end=' ')
        j+=1
    i+=1
    print()