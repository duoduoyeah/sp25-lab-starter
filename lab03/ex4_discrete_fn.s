.globl f # this allows other files to find the function f

# f takes in two arguments:
# a0 is the value we want to evaluate f at
# a1 is the address of the "output" array (read the lab spec for more information).
# The return value should be stored in a0
f:
    # Add 3 to a0 to convert input range [-3,3] to array index [0,6]
    addi t0, a0, 3
    
    # Calculate offset in bytes (multiply index by 4)
    slli t0, t0, 2
    
    # Add offset to base address of output array
    add t1, a1, t0
    
    # Load the value from the output array at the calculated position
    lw a0, 0(t1)
    
    # Return the result in a0
    jr ra
