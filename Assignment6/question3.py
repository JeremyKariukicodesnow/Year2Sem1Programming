print(f"Input n and m (m must be greater than n) ")

n=int(input("n >>> "))
m=int(input("m >>> "))

sum = 0
print(f"Number    Sum\n")
limit = m+1
for i in range(n,limit):
    if(i % 2 != 0):
        sum += i
        print(f"num={i}     {n}+{i}={sum}")

print(f"\nSum of odd numbers betweeen {n} and {m} is equal to {sum}\n\n")


