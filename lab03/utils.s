.globl malloc, free, exit

.text
# malloc: Allocates memory on the heap
# a0: Number of bytes to allocate
# Returns: Pointer to the allocated memory in a0
malloc:
    mv a1 a0
    li a0 0x3CC
    addi a6 x0 1
    ecall
    jr ra

# free: Frees memory that was previously allocated
# a0: Pointer to the memory to free
# Returns: None
free:
    mv a1 a0
    li a0 0x3CC
    addi a6 x0 4
    ecall
    jr ra

# exit: Exits the program with a status code
# a0: Exit status code
# Returns: Does not return
exit:
    mv a1 a0
    li a0 17
    ecall
