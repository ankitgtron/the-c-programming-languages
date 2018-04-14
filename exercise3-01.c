/* Binsearch function, by writing minimum tests inside the loop ( at the cost of more outside)*/

#include<stdio.h>

int binsearch(int x,int v[],int n);

int main(void)
{
    int arr[]={2,4,6,7,9,29,45,46,49,50,51};
    printf("%d\n",binsearch(9,arr,10));

    return 0;
}

int binsearch(int x,int v[],int n)
{
    int low,high,mid;
    
    low=0;
    high=n-1;
    
    mid = ( low + high ) / 2;  // We can have a direct access to the mid value

    while(low < high && x != v[mid]) // Testing for the value not middle
    {
        if( x > v[mid])
            low = mid+1;
        else
            high = mid -1;

        mid = ( low + high)/2;
    }

    if(x == v[mid])   // puting the test condition outside causing low cost inside loop
        return mid;
    else
        return -1;
}
