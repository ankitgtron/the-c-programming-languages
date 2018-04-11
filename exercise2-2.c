#include<stdio.h>

#define MAX_STRING_LENGTH 100

int main(void)
{
 
/* 
   for(i=0; i< lim - 1 && (c= getchar()) != '\n'  && c != EOF; ++i);
     s[i] = c;
 */

int i = 0;
int c;

char s[MAX_STRING_LENGTH];

while(i < (lim - 1))
 {
     c = getchar();
     if(c != EOF)
        {
       if(c != '\n')
          s[i++] = c;
       else 
           break;
       }
    else 
       break;
 }

s[i] = '\0';
return 0;
}

              
