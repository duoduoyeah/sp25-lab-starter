.text

addi a0 x0 1
addi a1 x0 2025
addi a3 x0 2026

# Print the integer stored in a1 (2025)
ecall

# To print a3, we need to move its value to a1 first
addi a0 x0 1
add a1 x0 a3
ecall

# Exit the program
addi a0 x0 10
addi a1 x0 1
ecall
