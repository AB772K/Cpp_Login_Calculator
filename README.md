# Login & Calculator System in C++

## 📌 Project Overview

This is a console-based C++ application that combines a **User Authentication System** (login, register, forgot password) with a **Multi-Functional Calculator**. Users can create accounts, log in securely, and use various mathematical tools like addition, subtraction, factorials, and quadratic solvers.

---

## 👥 Contributors

- **Abdul Basit**  
  - Implemented user registration, login, and password recovery system.
  - Handled file-based storage using `fstream` for user data.
  - Integrated and structured the application’s menu and flow control.
  - Responsible for application integration and navigation between modules.

- **Farrukh Zia**  
  - Designed and implemented the calculator functionality.
  - Developed features like factorials, prime checks, arithmetic operations, square/cube roots, and quadratic equations.
  - Focused on user interaction and calculation logic.

---

## 💡 Features

### 🔐 Authentication System
- **Register New User** — Store username & password in `Database.txt`.
- **Login** — Check user credentials from the file.
- **Forgot Password** — Retrieve password by entering username.

### 🧮 Calculator Functions
Includes a wide variety of operations:
1. Addition (n numbers)
2. Subtraction (up to 4 numbers)
3. Multiplication (n numbers)
4. Division (up to 4 numbers)
5. Factorial of a number
6. Prime number check
7. Even/Odd checker
8. Square of a number
9. Cube of a number
10. Square Root (real/complex)
11. Solving Quadratic Equations

---

## 📂 File Structure

```bash
.
├── main.cpp         # Contains the complete source code
├── Database.txt     # Stores registered usernames and passwords
└── README.md        # This documentation
