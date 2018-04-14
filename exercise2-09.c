/* In twos complement number systems, x &= (x-1) deletes the rightmost 1 bit in x.
 * Explain why? Use this to right a faster version of bitcount. Bitcount program counts
 * the number of 1 bits in the integer */

#include<stdio.h>

int bitcount(unsigned x);

int main(void)
{
    printf("\n\n%d\n\n",bitcount((unsigned)12));
}

int bitcount(unsigned x)
{
    int b;

    for(b=0; x!=0; x &= x-1)
        ++b;
    return b;
}

/*
 * When number is odd, like 0000 1111 (in decimal representaion it's value is 15). 
 * This expression (x &= x -1) reset only the LSB bit only. and we get (x-1).
 * let see this : x = 0000 1111 (15) and x - 1 = 0000 1110 (14).
 * taking & of both x and x - 1
 *   0000 1111
   & 0000 1110
 *   ----------
     0000 1110      which is (x - 1)
     ----------
 * When number is even 0000 1110 (14). It resets the rightmost bit that is 1.
 * x = 0000 1110 (14) and x-1 = 0000 1101 (13).
 *   0000 1110
   & 0000 1101
 *   ---------
     0000 1100   
     ---------
 * see, the righmost bit is reset.
 * So for each 1's in the binary representation it will be reset only on at time.
 * So if there is n 1's in binary representation it will be reset n times.
 * Each time we count with the variable b. i.e. bitcount.
 */ 


