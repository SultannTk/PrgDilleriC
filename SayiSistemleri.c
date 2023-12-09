#include <stdio.h>

int main()
{
    // char = 1 byte(8 bit)
    // int = 4 bytes(32 bit)

    /*   Binary addition/subtraction   */ //    0b...
    char num1 = 0b01000001; // 65
    char num2 = 0b00000101; // 5
    char num3 = 0b11111011; // 251 <=> -5 (-> reverse the bits, add 1)
    char num4 = 0b11111101; // 253 <=> -3 (-> reverse the bits, add 1)
    int sum1 = num1 + num2; // 01000001 + 00000101 = 01000110 <=> 65 + 5 = 70
    int sum2 = num1 + num3; // 01000001 + 11111011 = (1)00111100 <=> 65 + (-5) = 60 [(1) is discarded]
    int sum3 = num3 + num4; // 11111011 + 11111101 = (1)11111000 <=> (-5) + (-3) = (-8) [(1) is discarded]
    printf("%d + %d = %d\n%d + (%d) = %d\n(%d) + (%d) = (%d)\n", num1, num2, sum1, num1, num3, sum2, num3, num4, sum3);

    printf("\n==================================\n\n");

    /*   Binery to octal conversion   */ //     0...
    char oNum1 = 0b00101011; // 43 | (0)00 101 011 <- pad the bits with zeros
    char oNum2 = 053; // 43 |           0   5   3
    printf("The numbers are %s.\n\n", oNum1 == oNum2 ? "equal" : "not equal");

    printf("\n==================================\n\n");

    /*   Binary to hexadecimal conversion   */ //   0x...
    int bNum1 = 0b1010101100; // 684 | (00)10 1010 1100 <- pad the least significant bits with zeros
    int bNum2 = 0x2AC; // 684 |           2    10   12
                       //                 2     A    C
    printf("The numbers are %s.\n\n", bNum1 == bNum2 ? "equal" : "not equal");
    return 0;
}
