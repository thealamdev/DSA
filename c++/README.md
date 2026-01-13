# DSA (Data Structures and Algorithms) - C++ Learning Project

A comprehensive collection of Data Structures and Algorithms implementations and practice problems in C++. This project contains various fundamental programming concepts, algorithms, and problem-solving exercises organized by topics.

## 📚 Project Structure

```
c++/
├── patterns/           # Pattern printing programs
├── factorial/          # Factorial calculations
├── functions/          # Function-based programs
├── loops/              # Loop-based algorithms
├── fibonacci/          # Fibonacci sequence implementation
├── bitwise/            # Bitwise operations
├── binary-number/      # Binary-Decimal conversions
├── variables/          # Variable basics and type conversions
└── second-practice/    # Additional practice problems
```

## 📂 Folder Details

### 1. **patterns/** - Pattern Printing Programs
Collection of various pattern printing exercises using nested loops.

**Files:**
- `code.cpp` - Basic rectangular pattern printer that creates a grid of '#' symbols based on user input for rows and columns
- `triangle.cpp` - Multiple triangle and pattern variations including:
  - Right-aligned triangle with numbers
  - Character patterns (ABCD repeated)
  - Sequential number patterns (123, 456, 789)
  - Character increment patterns (ABC, DEF, GHI)
  - Character repetition patterns (A, BB, CCC)
  - Number increment patterns (1, 12, 123)
  - Reverse number patterns (1, 21, 321, 4321)
  - Floyd's Triangle (1, 23, 456, 78910)
  - Inverted triangle pattern
- `square.cpp` - Square pattern implementations
- `combine.cpp` - Combined pattern variations
- `practies.cpp` - Additional pattern practice

**Key Concepts:** Nested loops, pattern logic, ASCII manipulation

---

### 2. **factorial/** - Factorial Calculations
Programs to calculate factorial of numbers.

**Files:**
- `code.cpp` - Calculates factorial using a for loop (iterative approach)
  - Takes user input
  - Multiplies numbers from n down to 1
  - Returns the factorial result
- `hw.cpp` - Homework/practice factorial implementation

**Key Concepts:** Loops, mathematical operations, iterative algorithms

---

### 3. **functions/** - Function-Based Programs
Demonstrates function creation, calling, and modular programming.

**Files:**
- `code.cpp` - General function demonstrations
- `binomialCoefficient.cpp` - Calculates binomial coefficient (nCr)
  - Formula: nCr = n! / (r! × (n-r)!)
  - Implements factorial function
  - Demonstrates function reusability
  - Example: Calculates 10C5 (252)
- `digitSum.cpp` - Calculates sum of digits in a number
  - Uses modulo operator to extract digits
  - Implements digit extraction logic
  - Example: Sum of digits in 155 = 11

**Key Concepts:** Function declaration, parameters, return values, mathematical formulas, modular programming

---

### 4. **loops/** - Loop-Based Algorithms
Programs demonstrating various loop implementations and algorithms.

**Files:**
- `code.cpp` - Prime number checker
  - Optimized algorithm using square root optimization
  - Checks divisibility up to √n
  - Uses boolean flag for result
  - Example: Determines if 4 is prime (Not prime)

**Key Concepts:** For loops, while loops, optimization techniques, prime number algorithm

---

### 5. **fibonacci/** - Fibonacci Sequence
Implementation of Fibonacci series generation.

**Files:**
- `code.cpp` - Prints Fibonacci sequence up to n terms
  - Uses three variables (a, b, next)
  - Iterative approach
  - Takes user input for number of terms
  - Prints space-separated Fibonacci numbers

**Key Concepts:** Sequences, iterative algorithms, variable swapping

---

### 6. **bitwise/** - Bitwise Operations
Programs using bitwise operators for efficient computations.

**Files:**
- `code.cpp` - Power of 2 checker (two implementations)
  - **Method 1 (Bitwise):** Uses `n & (n-1) == 0` trick for O(1) complexity
    - Based on property that powers of 2 have only one bit set
    - Efficient bit manipulation technique
  - **Method 2 (Loop):** Iterative approach using pow() function
    - Compares calculated powers with input
    - Demonstrates algorithmic approach

**Key Concepts:** Bitwise AND, bit manipulation, algorithm optimization, power of 2 properties

---

### 7. **binary-number/** - Binary-Decimal Conversions
Programs for number system conversions.

**Files:**
- `code.cpp` - Basic binary operations
- `binaryToDecimal.cpp` - Converts binary to decimal
  - Uses logarithm to find number of digits
  - Implements positional notation (powers of 2)
  - Formula: Σ(digit × 2^position)
  - Example: 1011 (binary) = 11 (decimal)
  - Uses math.h library for pow() function

**Key Concepts:** Number systems, base conversions, mathematical operations, positional notation

---

### 8. **variables/** - Variables and Type Conversions
Basic C++ variable declarations and type casting.

**Files:**
- `code.cpp` - Variable basics program
  - Demonstrates int, double, and float types
  - Shows user input/output operations
  - Type casting examples (int to double and vice versa)
  - Arithmetic operations with different types
  - Example: `(int)50.14` = 50, `double(5)/2` = 2.5

**Key Concepts:** Data types, type casting, input/output, arithmetic operations

---

### 9. **second-practice/** - Additional Practice
Additional practice problems and exercises.

**Files:**
- `code.cpp` - Miscellaneous practice problems

---

## 🛠️ Prerequisites

- C++ Compiler (GCC/G++, Clang, or MSVC)
- C++11 or higher
- Basic understanding of C++ syntax

## 🚀 How to Compile and Run

### Using g++ (GCC)
```bash
# Compile a single file
g++ -o output_name folder_name/file_name.cpp

# Run the compiled program
./output_name

# Example:
g++ -o pattern patterns/code.cpp
./pattern
```

### Using clang++
```bash
clang++ -o output_name folder_name/file_name.cpp
./output_name
```

### Compile and Run in One Command
```bash
g++ folder_name/file_name.cpp && ./a.out
```

## 📖 Learning Path

Recommended order for beginners:

1. **variables/** - Start with basics
2. **loops/** - Learn control structures
3. **functions/** - Understand modular programming
4. **patterns/** - Practice nested loops
5. **factorial/** - Apply loop knowledge
6. **fibonacci/** - Sequence algorithms
7. **binary-number/** - Number systems
8. **bitwise/** - Advanced bit operations

## 💡 Key Concepts Covered

- ✅ Variables and Data Types
- ✅ Input/Output Operations
- ✅ Loops (for, while)
- ✅ Conditional Statements
- ✅ Functions and Modularity
- ✅ Pattern Printing Logic
- ✅ Mathematical Algorithms (Factorial, Fibonacci, Prime Numbers)
- ✅ Bitwise Operations
- ✅ Number System Conversions
- ✅ Type Casting
- ✅ Algorithm Optimization

## 📝 Notes

- Each folder contains focused implementations of specific topics
- Code includes comments explaining the logic
- Programs include user input for interactive learning
- Multiple approaches demonstrated where applicable (e.g., bitwise vs loop-based)

## 🎯 Future Topics to Add

- Arrays and String Manipulation
- Sorting Algorithms (Bubble, Selection, Insertion, Quick, Merge)
- Searching Algorithms (Linear, Binary)
- Recursion
- Pointers and Dynamic Memory
- Data Structures (Stack, Queue, Linked List, Trees)
- Advanced DSA (Graphs, Dynamic Programming, Greedy Algorithms)

## 📄 License

This is a personal learning project for educational purposes.

## 👤 Author

**Shah Alam**

---

**Happy Coding! 🚀**
