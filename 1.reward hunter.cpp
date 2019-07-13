#include<stdio.h>

int main()
{
	int arr[1000][2]={0};
	int reward=0;
	int a,b,T;
	
	while(1)
	{
		scanf("%d",&T);
		if(T<=1000 && T>0)
			break;
	}
	
	for(int i=0; i<T; i++)
	{
		scanf("%d %d",&arr[i][0],&arr[i][1]);
		if(arr[i][0]>100 || arr[i][0]<1)
			arr[i][0]=0;
		if(arr[i][1]>64 || arr[i][1]<1)
			arr[i][1]=0;
	}
	
	for(int i=0; i<T; i++)
	{
		reward=0;
        if(arr[i][0]==0)
            reward=0;
		else if(arr[i][0]==1)
			reward=5000000;
		else if(arr[i][0]>=2&&arr[i][0]<=3)
			reward=3000000;
		else if(arr[i][0]>=4&&arr[i][0]<=6)
			reward=2000000;
		else if(arr[i][0]>=7&&arr[i][0]<=10)
			reward=500000;
		else if(arr[i][0]>=11&&arr[i][0]<=15)
			reward=300000;
		else if(arr[i][0]>=16&&arr[i][0]<=21)
			reward=100000;
		else
			reward=0;
		
        if(arr[i][1]==0)
            reward=reward+0;
		else if(arr[i][1]==1)
			reward=reward+5120000;
		else if(arr[i][1]<=3)
			reward=reward+2560000;
		else if(arr[i][1]<=7)
			reward=reward+1280000;
		else if(arr[i][1]<=15)
			reward=reward+640000;
		else if(arr[i][1]<=31)
			reward=reward+320000;
		else
			reward=reward+0;
			
		printf("%d\n",reward);
		reward=0;
	}
	return 0;
}
