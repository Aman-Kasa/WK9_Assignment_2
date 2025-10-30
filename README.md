# Week 9 Assignment - C Programming

## Overview
This repository contains solutions for three C programming assignments focusing on pointers, functions, and memory management.

## Questions Implemented

### Question 1: Net Salary Calculator (`net_salary_calculator.c`)
- Calculates net salary from gross salary with various deductions
- Uses pointer-based functions for all calculations
- Implements progressive tax rates based on salary ranges
- **Advantages of using pointers:**
  - Memory efficiency: Pass by reference avoids copying large data
  - Direct memory manipulation allows functions to modify original values
  - Enables multiple return values through parameter modification
  - Better performance for large data structures

### Question 2: Sorting Names (`sorting_names.c`)
- Sorts 20 predefined names in ascending or descending order
- Implements bubble sort algorithm
- Uses function pointers to select sorting method dynamically
- Demonstrates modular programming with function pointers

### Question 3: Memory Management (`memory_management.c`)
- Manages student email addresses using dynamic memory allocation
- Uses `malloc()` for initial allocation, `realloc()` for resizing, `free()` for cleanup
- Implements function pointers for display and duplicate removal
- Demonstrates proper memory management practices

## Compilation and Execution

### Using Makefile:
```bash
make all          # Compile all programs
make test         # Compile and run basic tests
make clean        # Remove compiled executables
```

### Manual compilation:
```bash
gcc -Wall -Wextra -std=c99 -o net_salary net_salary_calculator.c
gcc -Wall -Wextra -std=c99 -o sorting_names sorting_names.c
gcc -Wall -Wextra -std=c99 -o memory_management memory_management.c
```

### Running programs:
```bash
./net_salary
./sorting_names
./memory_management
```

## Key Features Demonstrated

1. **Pointer Usage**: All functions use pointers for parameter passing
2. **Function Pointers**: Dynamic function selection at runtime
3. **Dynamic Memory Management**: malloc, realloc, free operations
4. **Modular Programming**: Separate functions for different operations
5. **Memory Safety**: Proper allocation and deallocation practices

## Learning Outcomes Achieved

- ✅ Understanding stack and heap memory management
- ✅ Pointer manipulation on variables, arrays, and strings
- ✅ Nested loops with arrays and strings
- ✅ Modular programming with functions
- ✅ Dynamic memory management implementation
- ✅ Function pointer usage for flexible program design