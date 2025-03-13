new_str = ''
new = []

user_input = input(" Enter a string whose size is at least 3\n")

my_input = list(user_input)

for i in my_input:

    if i not in new_str:
        new.append(i)

    else:
        pass

print(new)

