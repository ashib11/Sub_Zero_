import math

def area_circle(radius):
    return math.pi * radius ** 2

def area_rectangle(length, width):
    return length * width

def area_triangle(base, height):
    return 0.5 * base * height

def calculate_area():
    print("Choose a shape to calculate the area:\n")
    print("1. Circle")
    print("2. Rectangle")
    print("3. Triangle")
    user_input = int(input("Enter your choice (1/2/3): "))

    if user_input == 1:
        radius = float(input("Enter the radius of the circle: "))
        circle_area = area_circle(radius)
        print(f"Area of the circle: {circle_area}") 
    elif user_input == 2:
        length = float(input("Enter the length of the rectangle: "))
        width = float(input("Enter the width of the rectangle: "))
        rectangle_area = area_rectangle(length, width)
        print(f"Area of the rectangle: {rectangle_area}")
    elif user_input == 3:
        base = float(input("Enter the base of the triangle: "))
        height = float(input("Enter the height of the triangle: "))
        triangle_area = area_triangle(base, height)
        print(f"Area of the triangle: {triangle_area}")
    else:
        print("Invalid input!")

calculate_area()
