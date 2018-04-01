/* For printing the histogram of the freqencies
* I have defined an array to store the all character
* All character ASCII value is taken 128 character.
* It is assumed that character[0] contains ASCII value 0 
* character[1] contains ASCII value 1, .... and so on till character[127].
*/

#include<stdio.h>

#define MAX 128       // maximum no of character in ASCII character set
int main(void)
{
    int c,i,j;

    int character[MAX];     // array to store the freqencies of the character 
    
    for (i = 0; i < MAX; ++i)
        character[i] = 0;      // initializing all the array elements to 0
     
    while ((c = getchar()) != EOF)
        ++character[c];        // incrementing the value in the array elements

    for(i = 0; i < MAX; ++i)
    {
        putchar(i);
        
        for(j = 0; j < character[i]; ++j)
            putchar('-');
        
        putchar('\n');
    }
return 0;
}
