fo=open("file.txt","w+")
fo.write("This is a rat race")

fo.seek(10,0)
data=fo.read(3)
print(data)

fo.seek(10,0)
fo.write("cat")
fo.seek(10,0)
data=fo.read()
print(data)

fo.close()
