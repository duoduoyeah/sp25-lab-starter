.globl factorial

.data
n: .word 7

.text
# Don't worry about understanding the code in main
# You'll learn more about function calls in lecture soon
main:
    la t0, n
    lw a0, 0(t0)
    jal ra, factorial

    addi a1, a0, 0
    addi a0, x0, 1
    ecall # Print Result

    addi a1, x0, '\n'
    addi a0, x0, 11
    ecall # Print newline

    addi a0, x0, 10
    ecall # Exit

# factorial takes one argument:
# a0 contains the number which we want to compute the factorial of
# The return value should be stored in a0
factorial:
    # Initialize result to 1
    addi t0, x0, 1
    
    # Check if input is 0 or 1, in which case return 1
    addi t1, x0, 2
    blt a0, t1, done
    
    # Initialize loop counter
    addi t1, x0, 1
    
loop:
    # Multiply result by current counter
    mul t0, t0, t1
    
    # Increment counter
    addi t1, t1, 1
    
    # Check if we've reached our input number
    ble t1, a0, loop
    
done:
    # Move result to a0 for return
    add a0, t0, x0
    
    # Return from function
    jr ra
