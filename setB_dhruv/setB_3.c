#include <stdio.h>

void reverseBits(int [], int);

int main()
{
    int x, arr[20], count =0;
    printf("Enter the number: ");
    scanf("%d", &x);
   
    while(x!=0)
    {
        int r = x % 2;
        arr[count] = r;
        count++;
        x = x/2;
    }
    printf("Before:");
    for(int i=count-1; i>=0; i--)
    {
        printf("%d", arr[i]);
    }
    reverseBits(arr, count);
}


void reverseBits(int arr[], int count)
{
	printf(" After:");
    for(int i=0; i<count; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}
