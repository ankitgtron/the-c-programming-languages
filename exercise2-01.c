// Program to find the ranges of the char, short, int, long

#include<stdio.h>

int main()
{
  printf("Minimum signed char: %d\n", -(char)((unsigned char) ~0 >> 1) - 1);
  /*
   * There is a - operator in front of the expression that is used to compute the minimum value:
   * -(char)((unsigned char) ~0 >> 1) - 1
   * So the order of the operands evaluation in your expression is:
   * Compute ~0 >> 1 and cast the result to unsigned char,
   * Cast the previous result to char,
   * Change the sign of the previous result by using the - operator and
   * Subtract one (-1) to obtain the minimum possible value (the 0 value is considered as positive value).
   */
   printf("Maximum Signed Char: %d\n",(char) ((unsigned char) ~0 >> 1));

    printf("Minimum Signed Short: %d\n",-(short)((unsigned short)~0 >>1) -1);
    printf("Maximum Signed Short: %d\n",(short)((unsigned short)~0 >> 1));

    printf("Minimum Signed Int: %d\n",-(int)((unsigned int)~0 >> 1) -1);
    printf("Maximum Signed Int: %d\n",(int)((unsigned int)~0 >> 1));

    printf("Minimum Signed Long: %ld\n",-(long)((unsigned long)~0 >>1) -1);
    printf("Maximum signed Long: %ld\n",(long)((unsigned long)~0 >> 1));

    /* Unsigned Maximum Values */

    printf("Maximum Unsigned Char: %d\n",(unsigned char)~0);
    printf("Maximum Unsigned Short: %d\n",(unsigned short)~0);
    printf("Maximum Unsigned Int: %u\n",(unsigned int)~0);
    printf("Maximum Unsigned Long: %lu\n",(unsigned long)~0);

    return 0;

}
