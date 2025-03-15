import sys

def pushElement(stack):
    element = input('Enter the element to be pushed: ')
    stack.insert(0, element)

def popElement(stack): # Mutator
    if len(stack) == 0:
        print('Stack is empty')
        return
    
    print(f'Popped element is {stack[0]}')
    del stack[0]

def listStack(stack): # Accessor
    if len(stack) == 0:
        print('Stack is empty')
        return
    print(f'The Stack is {stack}')

def top(stack): # read only function 
    if len(stack) == 0:
        print('Stack is empty')
        return
    print('The top element is', stack[0])

def exit_program(stack):
    sys.exit('End of Program')

def invalid_choice(stack):
    print('Invalid choice entered')

def get_menu(choice, stack):
    menu = {
        1 : pushElement,
        2 : popElement,
        3 : listStack,
        4 : top,
        5 : exit_program
    }
    menu.get(choice, invalid_choice)(stack)

def start_app(stack):
    choice = 0
    while True:
        print('1:Push 2:Pop 3:ListStack 4:Top 5:Exit')
        choice = int(input('Enter your choice: '))
        get_menu(choice, stack)


stack = [] # this list is gonna work as Stack
start_app(stack)