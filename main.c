#include <stdio.h>

int sum(int val_1, int val_2);

int main() {
    int operand_1 = 10, operand_2 = 32;
    printf("%d + %d = %d", operand_1, operand_2, sum(operand_1, operand_2));
    return 0;
}

asm(
    "_sum:;"
    "   pushl %ebp;"
    "   movl %esp, %ebp;"
    "   movl 8(%ebp), %eax;"
    "   addl 12(%ebp), %eax;"
    "   movl %ebp, %esp;"
    "   popl %ebp;"
    "   ret"
);