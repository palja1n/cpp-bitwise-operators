# Bitwise Operators in C++

Name: Pal Jain

PRN: 24070123067

ENTC A3

Title: Bitwise Operators in C++

# Introduction
Bitwise operators in C++ allow direct manipulation of individual bits within integer data types. Unlike arithmetic operators that operate on entire numbers, bitwise operators act on each bit of the binary representation. These are essential in scenarios like embedded systems, device drivers, cryptography, memory optimization, and low-level hardware communication.

Understanding these operators is critical for efficient programming where performance and memory usage are key factors.

# Types of Bitwise Operators
AND (&):
Performs a logical AND between corresponding bits of two numbers. Resulting bit is 1 only if both input bits are 1.

OR (|):
Performs a logical OR. Resulting bit is 1 if at least one of the input bits is 1.

XOR (^):
Performs a logical exclusive OR. Resulting bit is 1 only if the input bits are different.

NOT (~):
Unary operator that inverts (flips) all bits of a number.

Left Shift (<<):
Shifts all bits to the left by a specified number of positions, inserting 0s on the right. Equivalent to multiplying by powers of 2.

Right Shift (>>):
Shifts all bits to the right. Useful for dividing integers by powers of 2.

# Explanation of Programs
# Program 1: Bitwise Operator Demonstration
This program demonstrates how the bitwise AND, OR, NOT, XOR, left shift, and right shift work on two integers.

AND returns 1 only if both bits are 1.

OR returns 1 if at least one bit is 1.

XOR returns 1 if the bits are different.

NOT flips each bit (used for one's complement).

Left Shift multiplies a number by 2ⁿ.

Right Shift divides a number by 2ⁿ.

This is useful to visualize how each bitwise operator affects the binary representation of numbers.

Sample Output:

Enter the bit position to be set: 5

Enter the bit position to be reset: 3

Your number is: 56

Your number is: 16

# Program 2: Set and Reset Specific Bits
This program shows how to set or reset a specific bit in an integer using bitwise operators.

To set a bit: Use OR (|) with a mask where only the target bit is 1.

To reset a bit: Use AND (&) with the complement (~) of a mask where the target bit is 1.

For example, if you want to set bit 3, the mask will be 1 << 3. Applying i | mask sets that bit.

To reset bit 4, the mask is again 1 << 4, and i & (~mask) clears that bit.

This is often used in low-level system programming, flag management, and control register configuration.


Sample Output

AND: 0

OR:6

NOT: -5

XOR: 6

right shift: 1

left shift: 4

# Conclusion
Bitwise operators offer low-level control over binary data, making them useful for tasks that require efficiency, such as hardware interaction or handling compact data formats. The programs above demonstrate how these operators can be used for common tasks like bitwise logic and selectively setting or clearing specific bits.
