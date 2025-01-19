#include<stdio.h>
#include<string.h>
int main()
{
	char arr[60][60],str[50];
	int r,c,i,x,y,j,d,z=0,s;
	printf("Enter no:of rows and columns\n");
	scanf("%d %d",&r,&c);
	printf("Enter map\n");
	for(i=0;i<r;i++)
	{
		scanf("%s",arr[i]);
	}
	printf("Enter initial point\n");
	scanf("%d %d",&x,&y);
	x--;
	y--;
	arr[x][y]='R';
	printf("Enter directions\n");
	scanf("%s",str);
	z=strlen(str);
	i=x;
	j=y;
	for(s=0;s<z;s++)
	{
		if(str[s]=='R')
		{
			d++;
			if(d==4)
				d=0;
		}
		if(str[s]=='L')
		{
			d--;
			if(d==-4)
				d=0;
		}
		if(str[s]=='F')
		{
			if(d==0 && arr[i-1][j]!='X')
			{
				i--;
				arr[i][j]='R';
			}
			else if(d==1 && arr[i][j+1]!='X')
			{
				j++;
				arr[i][j]='R';
			}
			else if(d==2 && arr[i+1][j]!='X')
			{
				i++;
				arr[i][j]='R';
			}
			else if(d==3 && arr[i][j-1]!='X')
			{
				j--;
				arr[i][j]='R';
			}
			else if(d==-1 && arr[i][j-1]!='X')
			{
				j--;
				arr[i][j]='R';
			}
			else if(d==-2 && arr[i+1][j]!='X')
			{
				i++;
				arr[i][j]='R';
			}
			else if(d==-3 && arr[i][j+1]!='X')
			{
				j++;
				arr[i][j]='R';
			}
			else
				continue;
		}
	}
	i++;
	j++;
	printf("\n");
	if(d==0)
	{
		printf("%d %d N",i,j);
	}
	else if (d==1 || d==-3)
	{
		printf("%d %d E",i,j);
	}
	else if(d==2 ||d==-2)
	{
		printf("%d %d S",i,j);
	}
	else
	{
		printf("%d %d W",i,j);
	}
	printf("\n");
	for(i=0;i<r;i++){
		printf("%s\n",arr[i]);
	}
	return 0;
}

