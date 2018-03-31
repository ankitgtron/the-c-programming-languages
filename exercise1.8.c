// Program to count blanks, tabs, newline.
// If you enter only EOF character in terminal, this program suppose it is a line.
// Due to very tight definition of semantics this program is going to be a little bit tricky.

#include <stdio.h>

int main(void)
{
  int blanks, tabs, newlines; 
  int c;
  int status = 1;        // to allow modification if previous character is not newline
  int lastchar = 0;    // to keep track of the previous character

  blanks = 0;
  tabs = 0;
  newlines = 0;

  while(status == 1)
  {
    c = getchar();

    if(c == ' ')
      ++blanks;

    if(c == '\t')
      ++tabs;

    if(c == '\n')
      ++newlines;

    if(c == EOF)
    {
      if(lastchar != '\n')
      {
        ++newlines; /* This is to count one more line 
                     * if the last character is not the newline 
                     * it is for just good semantics.
      }              */
      status = 0;
    }
    lastchar = c;
  }

  printf("Blanks: %d\nTabs: %d\nLines: %d\n", blanks, tabs, newlines);
  return 0;
}
