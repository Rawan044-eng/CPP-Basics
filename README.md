# Sum of Even and Odd Numbers
This is a simple C++ program that takes 10 integer inputs from the user and calculates the sum of even and odd numbers separately.

## How it works:
* The program uses a `for` loop to iterate 10 times.
* It checks each number using the modulo operator `%`.
* It displays the final sum for both even and odd numbers.
---
## Find Maximum Number
This program compares two integers provided by the user and determines which one is larger using a custom function.

### Key Features:
* Uses a **Function Prototype** for better code organization.
* Implements an `if-else` logic to handle comparison.
* Includes a check in the `main` function to identify if the numbers are equal.

### Update: Added Factorial calculation using long long for large numbers and input validation for negative values.

---
## Sphere Calculations 🏀
A math-based program to calculate the **Surface Area** and **Volume** of a sphere.

### Skills Applied:
* Using the `<cmath>` library for power functions (`pow`).
* Handling floating-point division (`4.0 / 3.0`).
* Global vs Local function implementation.

## 🔢 Sum and Average Calculator
A C++ program that demonstrates **Function Decomposition** by separating the logic of calculation into two reusable functions.

### How it works:
* **`sum()` function**: Takes three integers and returns their total.
* **`average()` function**: Takes the total sum and calculates the mean using `float` precision (`3.0`) to ensure accurate decimal results.
* **Main Logic**: The program showcases how to pass data between functions efficiently.

### Key Skills:
* Function Prototypes & Implementation.
* Handling Floating-point arithmetic.
* Code Readability and Organization.

## 🔄 Swap by Reference
This program demonstrates the concept of **Pass by Reference** in C++.

## 💰 Employee Salary Processor
A C++ program that manages a list of employee salaries using Arrays.

### ✨ Features:
* Input 10 employee salaries.
* Automatically apply a **10% Bonus** to each salary.
* Calculate and display the **Total Salaries** before and after the bonus.
* Calculate the **Average Salary** for the entire team.

### 🛠️ Concepts Used:
* Arrays in C++.
* For-Loops for data entry and processing.
* Arithmetic operations and percentage calculation.
### Why this is important:
* Unlike **Pass by Value**, using the `&` operator allows the function to access the actual memory address of the variables.
* This enables the function to modify the original values in the `main()` scope directly, without needing a `return` statement.
* It uses a **Temporary Variable (`temp`)** to perform the swap logic securely.
