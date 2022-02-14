#include <stdio.h>

int top=0;
char stack[100];

void push(char x)
{
    if(x != stack[top])
    {
        top++;
        stack[top] = x;
    }
    else
    {
        top--;
    }
}

void main()
{
    int n;
    printf("Enter length: ");
    scanf("%d", &n);
    
    char arr[n];
	printf("Enter string: ");
    scanf("%s", arr);
    
    for(int i=0; i<n;i++)
    {
        push(arr[i]);
    }
    
    if(top==0){
        printf("Empty String");
    }
    else
    {
        for(int i=0;i<=top;i++)
        {
            printf("%c",stack[i]);
        }
		printf("\n");
    }
}

/*
#include <stdio.h>
#include <string.h> 

char pop(char a[], int *t)
{
	if(*t==0)
	{
		return '0';
	}
	else
	{
		*t=*t-1;
		return a[*t+1];
	}
}

int main()
{
    int n, top, count=0, count1=0, top1, flag=0;
    //printf("Enter the length: ");
    scanf("%d", &n);
   
    char stack[n+1], arr[n+1], arr1[count+1];
    for(int i=1;i<=n;i++)
    {
        scanf(" %c", &stack[i]);
    }
    top = n;
   
    while(top >= 1)
    {
        if(stack[top] == stack[top-1])
        {
            pop(stack, &top);
            pop(stack, &top);
        }
        else
        {
            count++;
            arr[count] = pop(stack, &top);
        }
    }
	for(int i=1; i<=count;i++)
	{
		for(int j=i+1;j<=count;j++)
		{
			if(arr[i] == arr[j])
			{
				flag=1;
				break;
			}
		}
	}
	//printf("%d", flag);
	if(flag==0)
	{
		for(int i=count;i>=0;i--)
    	{
        	printf("%c", arr[i]);
    	}
    	printf("\n");
	}
  	else if(flag == 1)
	{
	top1 = count;

	while(top1 >= 1)
    {
        if(arr[top1] == arr[top1-1])
        {
            pop(arr, &top1);
            pop(arr, &top1);
        }
        else
        {
            count1++;
            arr1[count1] = pop(arr, &top1);
        }
    }
	if(count1 == 0)
	{
		printf("Empty string\n");
		return 0;
	}
	for(int i=count1;i>=0;i--)
    {
        printf("%c", arr1[i]);
    }
    printf("\n");
	}
    

	
    return 0;
}
*/
