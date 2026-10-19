# C++ Algorithms & Problem Solving – Level 1

## Problems #01 to #05 – Solutions

### 📌 Overview

This folder contains my C++ solutions for **Problems #01 to #05** from the Algorithms & Problem Solving – Level 1 course.

These exercises focus on programming fundamentals, logical thinking, and writing clean, reusable functions.

## 📚 Solved Problems

| Problem | Description | Key Concepts |
|---|---|---|
| #01 | Print a Name | Functions, Output |
| #02 | Read and Print a Name | Functions, Input/Output, Strings |
| #03 | Read and Print a Full Name | Strings, `getline()`, `cin` |
| #04 | Check Even or Odd Number | Enums, Modulo Operator, If/Else |
| #05 | Check Hiring Eligibility | Structs, Boolean Logic, Conditional Statements |

## 📂 Project Structure

```text
Problems-01-to-05/
│
├── Solutions.cpp
└── README.md
```

## 🛠 Technologies

- **Programming Language:** C++
- **IDE:** Microsoft Visual Studio
- **Level:** Beginner

## 🎯 Learning Objectives

Through these exercises, I practice:

- Creating and calling functions
- Reading input using `cin`
- Displaying output using `cout`
- Working with strings and `getline()`
- Understanding conditional statements (`if` / `else`)
- Using enumerations (`enum`)
- Organizing related data using structures (`struct`)
- Applying Boolean logic (`&&`, `||`)
- Using the modulo operator (`%`)

## 💡 Problem Explanations

### Problem #01 – Print a Name

Create a function that receives a name and prints it to the console.

**Example Output:**

```text
Your name is: Mohamed
```

### Problem #02 – Read and Print a Name

Read a name from the user and display it using a separate function.

**Example:**

```text
Enter Name: Mohamed

Your name is: Mohamed
```

### Problem #03 – Read and Print a Full Name

Read a full name, including spaces, using `getline()`.

**Example:**

```text
Enter Full Name: Mohamed khayat

Your name is: Mohamed khayat
```

### Problem #04 – Check Even or Odd Number

Determine whether a number is even or odd using the modulo operator `%`.

**Example:**

```text
Enter the number: 8

The Number is Even
```

### Problem #05 – Hiring Eligibility

Determine whether a person is eligible for hiring based on the following conditions:

- The applicant is older than 21 and has a driver's license.
- OR the applicant has a recommendation, regardless of age or driver's license.

**Example Input:**

```text
Enter Your Age: 25
Do you have a Driver License? (Yes/No): Yes
Do you have a Recommendation? (Yes/No): No
```

**Example Output:**

```text
Hired
```

**Acceptance Logic:**

```cpp
bool IsAccepted(stInfo Info)
{
    return Info.HasRecommendation ||
           (Info.Age > 21 && Info.HasDriverLicense);
}
```

## 🚀 How to Run

1. Download or clone the repository.
2. Open `Solutions.cpp` in Microsoft Visual Studio.
3. Navigate to the `main()` function.
4. Uncomment the function call for the exercise you want to run.
5. Keep the other exercise calls commented out.
6. Compile and run the program.

**Example – Running Problem #05:**

```cpp
int main()
{
    // Problem #01
    // PrintName("Mohamed");

    // Problem #02
    // PrintName(ReadName());

    // Problem #03
    // PrintName(ReadFullName());

    // Problem #04
    // PrintNumberType(CheckNumberType(ReadNumber()));

    // Problem #05
    PrintResult(ReadInfo());

    return 0;
}
```

## ✅ Progress

| Category | Status |
|---|---|
| Problems #01 – #05 | Completed |
| Total Problems | 5 |
| Programming Language | C++ |
| Difficulty | Beginner |

## 📝 Notes

- All five solutions are organized in a single C++ source file.
- Each problem is separated by descriptive comments.
- The code uses functions to improve readability and reusability.
- No `switch` statements are used.
- Individual problems can be tested by uncommenting their function calls inside `main()`.

---

Part of my **C++ Algorithms & Problem Solving – Level 1** learning journey.

More solutions will be added as I continue practicing.
