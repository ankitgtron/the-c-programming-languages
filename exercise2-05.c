
int any(char s1[], char s2[])
{
  int i, k;

  for(i = 0; s1[i] != '\0'; i++)
  {
    for(k = 0; s2[k] != '\0'; k++)
    {
      if(s2[k] == s1[i])
        return i;
 
    } 
  }
  return -1;
}


#include <stdio.h>
#include <string.h>

int any(char [], char []);

int main(void)
{
 char str1[20] = "Imankit gaur";
 char str2[20] = "bcda";
 int pos;
  
 pos = any(str1, str2);

 printf("%d\n", pos);

  return 0;
}
