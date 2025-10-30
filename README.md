# 🚀 Week 9 Assignment - Advanced C Programming

<div align="center">

![C Programming](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Memory Management](https://img.shields.io/badge/Memory-Management-red?style=for-the-badge)
![Pointers](https://img.shields.io/badge/Pointers-Advanced-blue?style=for-the-badge)
![Functions](https://img.shields.io/badge/Function-Pointers-green?style=for-the-badge)

**Advanced C Programming Concepts: Pointers, Memory Management & Modular Design**

[Repository](https://github.com/Aman-Kasa/WK9_Assignment_2.git) • [Documentation](#documentation) • [Authors](#authors)

</div>

---

## 📋 Table of Contents
- [Overview](#overview)
- [🎯 Assignment Solutions](#assignment-solutions)
- [🛠️ Installation & Usage](#installation--usage)
- [🔧 Technical Features](#technical-features)
- [📊 Learning Outcomes](#learning-outcomes)
- [👥 Authors](#authors)
- [📄 License](#license)

## Overview

This repository contains comprehensive solutions for three advanced C programming assignments focusing on **pointers**, **dynamic memory management**, and **modular programming design**. Each solution demonstrates industry-standard practices and advanced C programming concepts.

## 🎯 Assignment Solutions

### 💰 Question 1: Net Salary Calculator
**File:** `net_salary_calculator.c`

```c
// Progressive tax calculation with pointer-based functions
✅ Tax rates: 0% (≤$100), 20% ($100-$300), 28% (>$300)
✅ Medical insurance: 5% deduction
✅ Maternity leave: 0.3% deduction  
✅ Social security: 3% deduction
```

**🔑 Key Features:**
- All functions use **pointer parameters** for memory efficiency
- **Modular design** with separate calculation functions
- **Progressive tax system** implementation
- **Pass-by-reference** for optimal performance

### 📝 Question 2: Sorting Names
**File:** `sorting_names.c`

```c
// Dynamic sorting with function pointers
✅ 20 biblical/international names
✅ Bubble sort algorithm implementation
✅ Ascending/descending order selection
✅ Function pointers for runtime method selection
```

**🔑 Key Features:**
- **Function pointers** for dynamic sorting method selection
- **Interactive user input** (asc/desc)
- **Bubble sort algorithm** with pointer-based parameters
- **Cultural diversity** in name selection

### 🧠 Question 3: Memory Management
**File:** `memory_management.c`

```c
// Advanced dynamic memory operations
✅ malloc() for initial allocation (10 students)
✅ realloc() for memory resizing (shrink to 6)
✅ free() for proper cleanup
✅ Duplicate email detection & removal
```

**🔑 Key Features:**
- **Dynamic memory allocation** with `malloc()`/`calloc()`
- **Memory reallocation** using `realloc()`
- **Function pointers** for display and duplicate removal
- **Memory leak prevention** with proper `free()` calls
- **Email format:** `name.surname@alustudent.com`

## 🛠️ Installation & Usage

### Quick Start
```bash
# Clone the repository
git clone https://github.com/Aman-Kasa/WK9_Assignment_2.git
cd WK9_Assignment_2

# Compile all programs
make all

# Run individual programs
./net_salary
./sorting_names
./memory_management
```

### Manual Compilation
```bash
gcc -Wall -Wextra -std=c99 -o net_salary net_salary_calculator.c
gcc -Wall -Wextra -std=c99 -o sorting_names sorting_names.c
gcc -Wall -Wextra -std=c99 -o memory_management memory_management.c
```

### Available Make Commands
```bash
make all          # Compile all programs
make test         # Run basic functionality tests
make clean        # Remove compiled executables
```

## 🔧 Technical Features

| Feature | Implementation | Benefit |
|---------|----------------|----------|
| **Pointer Parameters** | All functions except main() | Memory efficiency, direct manipulation |
| **Function Pointers** | Dynamic method selection | Runtime flexibility, modular design |
| **Dynamic Memory** | malloc, realloc, free | Optimal memory usage, scalability |
| **Modular Design** | Separate functions per operation | Code reusability, maintainability |
| **Error Handling** | Memory allocation checks | Program stability, safety |

### 🎯 Pointer Advantages Demonstrated

1. **Memory Efficiency**: Pass by reference eliminates data copying
2. **Direct Manipulation**: Functions modify original values in-place
3. **Multiple Returns**: Functions return multiple values via parameters
4. **Performance**: Reduced memory overhead for large data structures
5. **Flexibility**: Dynamic function selection at runtime

## 📊 Learning Outcomes

- ✅ **Stack vs Heap**: Understanding memory allocation differences
- ✅ **Pointer Mastery**: Variables, arrays, and string manipulation
- ✅ **Nested Loops**: Complex iteration with arrays and strings
- ✅ **Modular Programming**: Function-based code organization
- ✅ **Memory Management**: Dynamic allocation, reallocation, deallocation
- ✅ **Function Pointers**: Runtime method selection and callbacks

## 👥 Authors

<table>
  <tr>
    <td align="center">
      <img src="https://github.com/Aman-Kasa.png" width="100px;" alt="AMAN-KASA"/><br />
      <sub><b>AMAN-KASA</b></sub><br />
      <a href="https://github.com/Aman-Kasa">🔗 GitHub</a>
    </td>
    <td align="center">
      <img src="https://github.com/josephkaruiki.png" width="100px;" alt="Joseph Karuiki"/><br />
      <sub><b>Joseph Karuiki</b></sub><br />
      <a href="https://github.com/josephkaruiki">🔗 GitHub</a>
    </td>
  </tr>
</table>

### 🤝 Contribution Summary
- **AMAN-KASA**: Net Salary Calculator, Memory Management, Documentation
- **Joseph Karuiki**: Sorting Algorithm, Function Pointers, Testing & Validation

## 📄 License

This project is part of an academic assignment for **ALU Low-Level Programming Course**.

---

<div align="center">

**⭐ Star this repository if you found it helpful!**

[🔝 Back to Top](#-week-9-assignment---advanced-c-programming)

</div>