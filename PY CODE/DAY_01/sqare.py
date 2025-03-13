import math 

input_num = int(input("Enter a number to find the square and the square root\n"))
print(f"Square of {input_num} = {input_num*input_num}\nSquare root of {input_num} = {math.sqrt(input_num):.5f}\n")

# Why python has not implicit type conversion


i = int(input("Enter a number\n"))

while i <= 3:
    print(f"{i}")
    i+=1
else:
    print(f"Not true condition")