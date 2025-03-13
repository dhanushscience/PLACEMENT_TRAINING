import math

degree = float(input("Enter a value to convert from radian to degree\n"))

rad = degree * (180/math.pi)
print(f"The {degree} degree in Radian is {rad:.3f}")
