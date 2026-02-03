pi = 3.14286

def f_circum_circle(radius):
    diameter = radius*2
    circum = pi * diameter
    return circum

def f_area_circle(radius):
    area = pi * radius * radius
    return area

def f_perimeter_square(length):
    perimeter = length * 4
    return perimeter

def f_area_square(length):
    area = length * length
    return area

print(f"Kindly input the radius of the circle")
radius=float(input("Radius >>> "))
circle_circumference=f_circum_circle(radius)
circle_area=f_area_circle(radius)
print(f"Area of the circle is = {circle_area}")
print(f"Circumference of the circle is = {circle_circumference}")

print(f"Given that length of sides of square is = double radius of circle")
length=radius * 2
square_area=f_area_square(length)
square_perimeter=f_perimeter_square(length)
print(f"Area of the square is = {square_area}")
print(f"Perimeter of the square is = {square_perimeter}")



