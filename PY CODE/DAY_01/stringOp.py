sum = 0
even_odd = ''

user_input = input("Enter the text and number seperated by ':' Symbol \n")

split_data = user_input.split(":")

num_data = int(split_data[1])
alpha_data = list(split_data[0])

while(num_data):
    sum += (num_data%10)**2
    num_data //= 10

if sum % 2 == 0:
    alpha_data = alpha_data[::-1]
    word_comp = "".join(alpha_data)
    even_odd = 'even'
else:
    word_comp = "".join(alpha_data)
    even_odd = 'odd'

print(f"The Sum of number component = {sum} is {even_odd}, therefore string is: {word_comp}")
