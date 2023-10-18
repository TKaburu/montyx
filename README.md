# Monty Language Interpreter

Monty 0.98 is a scripting language that compiles into Monty byte codes similar to Python. This project aims to create an interpreter for Monty ByteCodes files.

## Monty Byte Code Files

Monty byte code files have the `.m` extension and contain instructions. Each instruction is on a separate line and can be preceded or followed by spaces. Blank lines or lines starting with `#` are considered comments.

Example:
```
push 0
push 1
push 2
pall
```

## Usage

To run the Monty interpreter, use the following command:

```
$ monty <file>
```

- `<file>`: Path to the file containing Monty byte code instructions.

### Error Handling

- If no file or more than one argument is provided: Print `USAGE: monty file` and exit with `EXIT_FAILURE`.
- If the file can't be opened: Print `Error: Can't open file <file>` and exit with `EXIT_FAILURE`.
- If an invalid instruction is encountered: Print `L<line_number>: unknown instruction <opcode>` and exit with `EXIT_FAILURE`.
- If `malloc` fails: Print `Error: malloc failed` and exit with `EXIT_FAILURE`.

## Supported Opcodes

### 1. push `<int>`

Pushes an element onto the stack. `<int>` must be an integer.

Usage:
```
push 42
```

### 2. pall

Prints all values on the stack, starting from the top.

Usage:
```
pall
```

### 3. pint

Prints the value at the top of the stack.

Usage:
```
pint
```

### 4. pop

Removes the top element of the stack.

Usage:
```
pop
```

### 5. swap

Swaps the top two elements of the stack.

Usage:
```
swap
```

### 6. add

Adds the top two elements of the stack.

Usage:
```
add
```

### 7. nop

Does nothing.

Usage:
```
nop
```

### 8. sub

Subtracts the top element of the stack from the second top element.

Usage:
```
sub
```

### 9. div

Divides the second top element of the stack by the top element.

Usage:
```
div
```

### 10. mul

Multiplies the second top element of the stack with the top element.

Usage:
```
mul
```

### 11. mod

Computes the rest of the division of the second top element of the stack by the top element.

Usage:
```
mod
```

### 12. pchar

Prints the character at the top of the stack (ASCII value).

Usage:
```
pchar
```

### 13. pstr

Prints the string starting at the top of the stack (ASCII values), stops when stack is empty, value is 0, or value is not in ASCII table.

Usage:
```
pstr
```

### 14. rotl

Rotates the stack to the top.

Usage:
```
rotl
```

### 15. rotr

Rotates the stack to the bottom.

Usage:
```
rotr
```

### 16. stack

Sets the format of data to a stack (LIFO).

Usage:
```
stack
```

### 17. queue

Sets the format of data to a queue (FIFO).

Usage:
```
queue
```

## Advanced Opcodes

### 1. comments

Lines starting with `#` are treated as comments and are ignored.

### 2. Brainf*ck

A Brainf*ck script is included in the `bf` subdirectory that prints "School".

Usage:
```
$ bf bf/1000-school.bf
```

### 3. Add two digits

Reads two digits from stdin, adds them, and prints the result.

Usage:
```
$ bf bf/1001-add.bf
81
9
```

### 4. Multiplication

Reads two digits from stdin, multiplies them, and prints the result.

Usage:
```
$ bf bf/1002-mul.bf
24
8
```

### 5. Multiplication (Level Up)

Reads two digits from stdin, multiplies them, and prints the result followed by a new line.

Usage:
```
$ bf bf/1003-mul.bf
77
49
```

## Compilation & Output

Compile your code using the following command:

```
$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```

Run your interpreter using the `monty` executable and the Monty byte code file as an argument.

## Repository

- GitHub Repository: [monty](https://github.com/TKaburu/monty)

