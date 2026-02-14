fo = open("names.txt", "w")
fo.write("Jeremy Mwangi")
fo.seek(14,0)
pin="12345678"
fo.write(pin)
fo.close()

with open("names.txt","r") as file:
    file.seek(14,0)
    content=file.read()
    print(content)