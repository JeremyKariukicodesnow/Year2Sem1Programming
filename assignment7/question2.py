pi=22 / 7
def f_input():
    radius=float(input("Kindly input the radius of the circle >>> "))
    return radius

def f_circum_circle(radius):
    diameter = radius * 2
    circumference = diameter * pi
    return circumference

def f_area_circle(radius):
    area = pi * radius * radius
    return area

def f_perimeter_square(lengthSquare):
    perimeter = lengthSquare * 4
    return perimeter

def f_area_square(lengthSquare):
    area = lengthSquare * lengthSquare
    return area

radius=f_input()
lengthSquare  = radius * 2
print(f"\nThe circumference of the circle is : {f_circum_circle(radius)}")
print(f"\nThe area of the circle is : {f_area_circle(radius)}")
print(f"\nAssuming the length of the square is twice the radius of the circle, then : {lengthSquare}")
print(f"\nThe perimeter of the square is : {f_perimeter_square(lengthSquare)}")
print(f"\nThe area of the square is : {f_area_square(lengthSquare)}")

