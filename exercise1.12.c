#include <stdio.h>
int main(void)
{
  int c;
  int inspace;

  inspace = 0;         // just to keep track of the tabs, space, newline characters.
  while((c = getchar()) != EOF)
  {
    if(c == ' ' || c == '\t' || c == '\n')
    {
      if(inspace == 0)
      {
        inspace = 1;
        putchar('\n');         
      }
            
     / * don't print anything, 
     * if the tabs, spaces, newline are coming again and againa 
     */
    }
    else
    {
      inspace = 0;
      putchar(c);
    }
  }
  return 0;
}
