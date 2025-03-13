
'''
Step 1: capture digit
Step 2: remove duplicates
Step 3: 
'''

new_list = []

user_input = input("Enter the string with digits\n")

my_list = list(user_input)

for i in my_list:

    if i.isdigit():
        new_list.append(i)

my_set = set(new_list)
#print(my_set)
#print(sorted(my_set))
sorted_set = sorted(my_set)

for i in sorted_set:
    if int(i)%2 == 0:
        pass

largest_num = sorted_set[::-1]
large_num = "".join(largest_num)
print(large_num)

