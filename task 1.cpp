#include<stdio.h> 
#include<conio.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"rus");
    int x;
    printf ("Enter the number\n");
    scanf("%d",&x);
    if(x>7)
    {
    	printf ("Hello!\n");
	}
	else
	{
		printf("x=%d\n",x);
	}
	   
    getch();
     
}
