#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct family
{
	char child[8];
	char father[8];
}r[5];

void main()
{
	FILE *fp;
	fp = fopen("file.txt", "r");
	char name[20];
	int count=0;

	for(int k=0; k<5;k++)
	{
		int i=0, line=1;
		while(line--)
		{
    		fscanf(fp,"%s",&r[k].child[i]);
    		i++;
		} 

		i=0, line=1;
		while(line--)
		{
    		fscanf(fp,"%s",&r[k].father[i]);
    		i++;
		}  
	}

	/*for(int i=0; i<5;i++)
	{
		printf("child: %s", r[i].child);
		printf("\nFather: %s\n", r[i].father);
	}*/

	void countChildren(char name[])
	{
	    for(int j=0;j<5;j++)
	    {
	        if(strcmp(name,r[j].father)==0)
		    {
				count++;
			}
        }
    }

	printf("Name: ");
	scanf("%s",name);
	for(int i=0;i<5;i++)
	{
	    if(strcmp(r[i].father,name)==0)
	        countChildren(r[i].child);
	}
	printf("Grandchildren: %d\n",count);
	fclose(fp);
}

