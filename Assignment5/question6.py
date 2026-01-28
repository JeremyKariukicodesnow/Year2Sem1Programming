mark1 = int(input("Enter mark 1: "))
mark2 = int(input("Enter mark 2: "))
mark3 = int(input("Enter mark 3: "))

if mark1 < 0 or mark1 > 100 or mark2 < 0 or mark2 > 100 or mark3 < 0 or mark3 > 100:
    print("Invalid Marks")
else:
    print(f"\nMarks Entered: {mark1}, {mark2}, {mark3}")

    if mark1 >= mark2 and mark1 >= mark3:
        highest = mark1
    elif mark2 >= mark1 and mark2 >= mark3:
        highest = mark2
    else:
        highest = mark3

    if mark1 <= mark2 and mark1 <= mark3:
        lowest = mark1
    elif mark2 <= mark1 and mark2 <= mark3:
        lowest = mark2
    else:
        lowest = mark3

    total = mark1 + mark2 + mark3
    average = total / 3

    print(f"Highest Score: {highest}")
    print(f"Lowest Score: {lowest}")
    print(f"Average Score: ({mark1} + {mark2} + {mark3}) / 3 = {total}/3 = {average:.2f}")

    match True:
        case _ if average >= 70:
            grade = "A"
        case _ if 60 <= average < 70:
            grade = "B"
        case _ if 50 <= average < 60:
            grade = "C"
        case _ if 40 <= average < 50:
            grade = "D"
        case _ if average < 40:
            grade = "E"

    print(f"Grade for Average Score ({average:.2f}): {grade}")
