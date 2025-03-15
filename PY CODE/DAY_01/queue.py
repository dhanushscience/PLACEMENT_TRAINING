import sys

def pushElement(queue):
    element = input('Enter the element to be pushed: ')
    queue.append(element)

def popElement(queue): # Mutator
    if len(queue) == 0:
        print('queue is empty')
        return
    
    print(f'Popped element is {queue[0]}')
    del queue[0]

def listqueue(queue): # Accessor
    if len(queue) == 0:
        print('queue is empty')
        return
    print(f'The queue is {queue}')

def top(queue): # read only function 
    if len(queue) == 0:
        print('queue is empty')
        return
    print('The top element is', queue[0])

def exit_program(queue):
    sys.exit('End of Program')

def invalid_choice(queue):
    print('Invalid choice entered')

def get_menu(choice, queue):
    menu = {
        1 : pushElement,
        2 : popElement,
        3 : listqueue,
        4 : top,
        5 : exit_program
    }
    menu.get(choice, invalid_choice)(queue)

def start_app(queue):
    choice = 0
    while True:
        print('1:Push 2:Pop 3:Listqueue 4:Top 5:Exit')
        choice = int(input('Enter your choice: '))
        get_menu(choice, queue)


queue = [] # this list is gonna work as queue
start_app(queue)