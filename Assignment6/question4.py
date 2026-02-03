print(f"Input n and m (m must be greater than n) ")

n=int(input("n >>> "))
m=int(input("m >>> "))

sum = 0
limit = m+1
for i in range(n,limit):
    if(i % 2 == 0):
        sum+=1

print(f"The total number of even numbers betweeen {n} and {m} is equal to {sum}\n")


