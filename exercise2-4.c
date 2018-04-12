/*
 * Exercise 2-4 Page 48
 *
 * Write an alternate version of squeeze(s1,s2) that deletes each
 * character in s1 that matches any character in the string s2.
 *
 */

/* squeeze2: delete all characters occurring in s2 from string s1. */

void squeeze(char s1[], char s2[])
{
  int i, j, k;
  int state ;

  for(i = j = 0; s1[i] != '\0'; i++)
  {
    state = 1;
    for(k = 0; s2[k] != '\0' && state; k++)
    {
      if(s2[k] == s1[i])
      {
        state = 0;
        break;
      }
    } 

    if(state)
    {
      s1[j++] = s1[i];
    } 
  }
  s1[j] = '\0';
}

/* test driver */

#include <stdio.h>
#include <string.h>

void squeeze(char [], char []);

int main(void)
{
 char str1[20] = "I am ankit gaur";
 char str2[20] = "I am ankur gaur";
 int i;
  
 squeeze(str1, str2);

 printf("%s\n", str1);

  return 0;
}
