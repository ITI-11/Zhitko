#include <stdio.h>
#include <iostream>
 
int main()
{
	setlocale(LC_ALL,"Rus");
	
	int fragment[20],b[20],p[20],i,j,nb,np,temp,lowest=9999;
	int barray[20],parray[20];
	
	printf("������� ���������� ������:");
	scanf("%d",&nb);
	printf("������� ���������� ���������:");
	scanf("%d",&np);
	
	printf("\n������� �������� ������:\n");
	for(i=1;i<=nb;i++)
    	{
			printf("���� %d:",i);
        	scanf("%d",&b[i]);
    	}
    
	printf("\n������� �������� ���������:\n");
	for(i=1;i<=np;i++)
    	{
        	printf("���� %d:",i);
        	scanf("%d",&p[i]);
    	}
    	
	for(i=1;i<=np;i++)
		{
			for(j=1;j<=nb;j++)
				{
					if(barray[j]!=1)
						{
							temp=b[j]-p[i];
							if(temp>=0)
								if(lowest>temp)
									{
										parray[i]=j;
										lowest=temp;
									}
						}
				}
			fragment[i]=lowest;
			barray[parray[i]]=1;
			lowest=10000;
		}
		
	printf("\n����� ��������\t�������� ��������\t����� �����\t�������� �����\t��������");
	for(i=1;i<=np && parray[i]!=0;i++)
		printf("\n\t%d\t\t%d\t\t     %d\t\t      %d\t\t   %d",i,p[i],parray[i],b[parray[i]],fragment[i]);
}
