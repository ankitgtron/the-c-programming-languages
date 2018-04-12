#include <stdio.h>

int setbits(int x, int p, int n, int y);

int main()
{
   printf("%u\n", setbits((unsigned)27, 3, 3, (unsigned)9);
   return 0;
}
 
int setbits(int x, int p, int n, int y)
{

    return (~ (~ (~0 << n)) << (p + 1 - n)) & x) | (~(~0 << n) & y) << (p + 1 - n);


}

/*
x = 1111 1111 (= 255 )
p = 3
y = 0000 0000 (= 0)
n = 4

setbits(unsigned x,int p,int n,unsigned y);

Right most 4 bits of y = 0000 So, we our return value should be:

= 1111 0000
= 240

Let’s follow how the program determines it. We take the LHS of |

(x & ~(~(~0 << n) << (p+1-n)))

p+1-n = 3 + 1 - 4
      = 0

(~0 << n)
      = (~ 0000 0000 << 4)
      = (1111 1111 << 4)
      = (1111 0000)

~(~0 << n)
  = ~(1111 0000)
  = 0000 1111

(~(~0 << n) << (p+1-n))
  = 0000 1111 << 0
  = 0000 1111

~(~(~0 << n) << (p+1-n))
          = ~ (0000 1111)
          = 1111 0000

(x & ~(~(~0 << n) << (p+1-n)))
          =  1111 1111 & 1111 0000
          =  1111 0000
meaning of the above all expression is just to make 0 to the n-bit of x,
Which is going to replace by the n-bits of y.

Now we take the RHS of |

(( y & ~(~0<<n)) << (p+1-n))

(p + 1 - n) = 0

~(~0 << n)  = 0000 1111

( y & ~(~0<<n))
    = 0000 0000 & 0000 1111
    = 0000 0000

(( y & ~(~0<<n)) << (p+1-n))

                = 0000 0000 << 4
                = 0000 0000
meaning of the above expression is make all the bits to 0 except
rightmost n-bits of y, and shift the rightmost n-bits of y
to the desired place.
So if we take logical OR of both the expression we will copy the all the bits
of x except those n-bits that start from position p. because those bits are 0. 
And also replace these bits to the rightmost n  bits of y.

We write the entire expression:

(x & ~(~(~0 << n) << (p+1-n))) | (( y & ~(~0<<n)) << (p+1-n));
            = 1111 0000  | 0000 0000
            = 1111 0000

Converting 1111 0000 to decimal gives us 240 and that is answer.
*/
