# Experiment-12

# **Theory:**

Constructors and destructors are special member functions in object-oriented programming that handle the initialization and cleanup of objects, respectively. A constructor is automatically invoked when an object is created and is used to set initial values and allocate resources. A destructor is automatically called when an object is destroyed, serving to release resources and perform any necessary cleanup tasks. Implementing constructors and destructors effectively ensures that resources are managed correctly and that objects are in a valid state throughout their lifecycle.

# **Conclusion:**

Studying and implementing constructors and destructors provides a foundational understanding of resource management in object-oriented programming. Constructors enable proper initialization, while destructors ensure that resources are freed appropriately. Proper implementation of these functions enhances program stability, prevents memory leaks, and supports efficient resource management, contributing to more robust and maintainable code.

 # Algorithms
Defining class and objects
Start

Class Definition:
Define a class named student with the following public data members:

string name: To store the student's name.
int age: To store the student's age.
string branch: To store the student's branch of study.
float result: To store the student's result.
int year: To store the student's current academic year.
int prn: To store the student's PRN (Personal Registration Number).
Main Function:
Declare two objects s1 and s2 of the class student.

Input and Output for First Student (s1):
Assign the following values to the object s1:

name = 
age = 
branch = 
prn = 
result = 
year = 
Display the values stored in s1:
Print the name, age, branch, prn, result, and year.
End

Defining Method in class
Start

Class Definition:

Define a class named student.
Inside the class, define a public method named myMethod():
This method outputs the message: "I am studying in 2nd year.".
Main Function:

Declare an object s1 of the class student.

Method Invocation:

Call the myMethod() function using the object s1.
Output:

The program prints the message "I am studying in 2nd year.".
End# Classes-and-Objects



### Algorithm to Define a Student Class with Input and Display Functionality

1. **Define the Student Class**:
   - Create a class named `student`.
   - Declare private member variables:
     - `int rno`: to store the roll number of the student.
     - `char name[50]`: to store the name of the student.
     - `double fee`: to store the fee amount.

2. **Constructor**:
   - Define a constructor `student()`:
     - Prompt the user for input and read values for `rno`, `name`, and `fee`.

3. **Display Method**:
   - Define a public method named `display()`:
     - Print the values of `rno`, `name`, and `fee`.

4. **Main Function**:
   - Create an instance of the `student` class named `registr`.
   - Call the `display()` method on `registr` to output the student details.



### Algorithm to Define a Class with a Default Constructor

1. **Define the Construct Class**:
   - Create a class named `construct`.
   - Declare public member variables:
     - `int a`: to store the first integer.
     - `int b`: to store the second integer.
   
2. **Default Constructor**:
   - Define a default constructor `construct()`:
     - Initialize `a` to `10`.
     - Initialize `b` to `20`.

3. **Addition Method**:
   - Define a public method named `add()`:
     - Print the sum of `a` and `b`.

4. **Main Function**:
   - Create an instance of the `construct` class named `con`.
   - Call the `add()` method on `con` to display the sum of `a` and `b`.

### Algorithm to Define a Student Class with Object Counting

1. **Global Variable**:
   - Declare a global integer variable `count` initialized to `0` to keep track of the number of `student` objects created.

2. **Define the Student Class**:
   - Create a class named `student`.
   - **Constructor**:
     - Define a constructor `student()`:
       - Increment `count` by `1`.
       - Print the number of objects created.
   - **Destructor**:
     - Define a destructor `~student()`:
       - Decrement `count` by `1`.
       - Print the number of objects destroyed.

3. **Main Function**:
   - Create three instances of the `student` class: `aa`, `bb`, and `cc`.
   - Create a block scope and define another instance `dd` of the `student` class within this block.

4. **Program Flow**:
   - When each object is created, the constructor is called, and the count of objects is incremented and printed.
   - When the block scope ends, the destructor for `dd` is called, and the count is decremented and printed.
   - When the main function exits, the destructors for `cc`, `bb`, and `aa` are called in reverse order of creation.

### Outcome
- The program outputs:
  ```
  No. of objects created:1
  No. of objects created:2
  No. of objects created:3
  No. of objects created:4
  No. of objects destroyed:3
  No. of objects destroyed:2
  No. of objects destroyed:1
  No. of objects destroyed:0
  ```


### Algorithm to Define a Class with a Parameterized Constructor

1. **Define the Class**:
   - Create a class named `pconstruct`.
   - Declare private member variables:
     - `int a`: to store the first integer.
     - `int b`: to store the second integer.

2. **Parameterized Constructor**:
   - Define a constructor `pconstruct(int m, int n)`:
     - Initialize `a` with the value of `m`.
     - Initialize `b` with the value of `n`.

3. **Data Output Method**:
   - Define a public method named `putdata()`:
     - Print the values of `a` and `b`.

4. **Main Function**:
   - Create an instance of the `pconstruct` class named `numbers` and initialize it with the values `10` and `20`.
   - Call the `putdata()` method on `numbers` to display the values of `a` and `b`.


### Outcome
- The program outputs:
  ```
  a=10
  b=20
  ```

\
