# 🧮 Scientific Calculator in C++

A simple **console-based Scientific Calculator** developed in **C++**. This calculator performs basic arithmetic operations along with several mathematical functions such as power, trigonometric, and inverse trigonometric calculations.

## 📌 Features

- Addition
- Subtraction
- Multiplication
- Division
- Power calculation
- Sine function
- Cosine function
- Tangent function
- Inverse Sine
- Inverse Cosine
- Inverse Tangent
- Continuous execution using a loop
- Easy-to-understand code for beginners

---

## 🛠️ Technologies Used

- C++
- Standard Library (`iostream`)
- Math Library (`math.h`)

---

## ▶️ How to Run

### Using g++

Compile the program:

```bash
g++ scientific_calculator.cpp -o calculator
```

Run the executable:

```bash
./calculator
```

### On Windows

```bash
g++ scientific_calculator.cpp -o calculator.exe
calculator.exe
```

---

## 📖 Operations

| Character | Operation |
|-----------|-----------|
| **S** | Addition |
| **D** | Subtraction |
| **P** | Multiplication |
| **d** | Division |
| **p** | Power |
| **s** | Sine |
| **C** | Cosine |
| **T** | Tangent |
| **I** | Inverse Sine |
| **J** | Inverse Cosine |
| **K** | Inverse Tangent |

---

## 📸 Sample Output

```
enter a: 5
enter b: 3

Enter S for Summation!
Enter D for Difference!
Enter P for Product!
Enter d for Division!
Enter p for Power function!
Enter C for Cosine!
Enter s for Sine!
Enter T for Tangent!
Enter I for inverse of sin
Enter J for Inverse of cos!
Enter K for Inverse of tan!
Enter character: S

8
```

---

## ⚠️ Current Limitations

- Runs continuously until manually terminated.
- Trigonometric functions are implemented using degree conversion and may not produce the expected results because C++ math functions expect radians.
- No validation for division by zero.
- No validation for invalid inputs.
- Inverse trigonometric functions only accept values within their mathematical domains.

---

## 🚀 Future Improvements

- Add square root and logarithmic functions.
- Include factorial calculations.
- Add modulus operation.
- Improve input validation.
- Handle division by zero gracefully.
- Create a menu-driven interface.
- Add an option to exit the calculator.
- Improve formatting of outputs.
- Convert the project into an object-oriented design.

---

## 👩‍💻 Author

**Rabeea Anjum**

Computer Systems Engineering Student

---

## 📄 License

This project is open-source and available under the MIT License.
