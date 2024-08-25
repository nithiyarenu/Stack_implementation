This program demonstrates a basic implementation of a stack data structure using an array in C++. The Stack class provides essential stack operations such as push, pop, and checking if the stack is full or empty. Below is a detailed explanation of the operations this code performs and some common applications of stacks.

OPERATIONS PERFORMED:

Push (push(int val)):
   Adds an element to the top of the stack. If the stack is full, the operation will not be performed, indicating a stack overflow.
   
Pop (pop()):
   Removes the top element from the stack. If the stack is empty, the operation will not be performed, indicating a stack underflow.
   
Check if Stack is Empty (isEmpty()):
   Returns true if the stack is empty, otherwise returns false.
   
Check if Stack is Full (isFull()):
   Returns true if the stack is full, otherwise returns false.
   
Peek (peek(int pos)):
   Returns the value at the specified position in the stack. Position is indexed from 0 (bottom) to 4 (top).
   
Count Elements in Stack (count()):
   Returns the number of elements currently in the stack.
   
Change Element (change(int pos, int val)):
   Changes the value at the specified position in the stack.
   
Display Stack Elements (display()):
   Prints all the elements currently in the stack from top to bottom.
   
Clear Screen (system("cls")):
   Clears the console screen. (Note: This function is platform-dependent and works on Windows systems.)
   
STACK APPLICATION:

Expression Evaluation:
   Stacks are used in evaluating arithmetic expressions, particularly in converting infix expressions to postfix or prefix forms and then evaluating them.
   
Backtracking:
   Stacks are useful in algorithms that require backtracking, such as maze solving, parsing expressions, and navigating through trees.
   
Function Call Management:
   Stacks manage function calls in programming, where each function call is pushed onto a stack and popped off when the function returns.
   
Undo Mechanism:
   Stacks are used to implement undo functionality in text editors, allowing users to revert to previous states.
   
Syntax Parsing:
   Stacks assist in parsing languages and data structures like HTML/XML tags, ensuring that they are properly nested.
   
Memory Management:
   Stacks are utilized in managing memory in systems, particularly in managing the allocation and deallocation of memory during function calls.
