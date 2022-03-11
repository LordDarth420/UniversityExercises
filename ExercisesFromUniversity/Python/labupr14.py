import areas

figure = input("Please enter your figure: ")
area = 0
if figure == "triangle":
    a = int(input("Please enter a: "))
    hA = int(input("Please enter hA: "))
    area = areas.Triangle(a, hA)
elif figure == "square":
    a = int(input("Please enter a: "))
    area = areas.Square(a)
elif figure == "rectangle":
    a = int(input("Please enter a: "))
    b = int(input("Please enter b: "))
    area = areas.Rectangle(a, b)
elif figure == "rhombus":
    a = int(input("Please enter a: "))
    h = int(input("Please enter h: "))
    area = areas.Rhombus(a, h)
elif figure == "trapezoid":
    a = int(input("Please enter a: "))
    b = int(input("Please enter b: "))
    h = int(input("Please enter h: "))
    area = areas.Trapezoid(a, b, h)

print(f"Your area is: {area}")