#include<stdio.h>

int fun1()
{
	for(int i=1; i<=5; i++)
	{
	for(int j=1;j<=5;j++)
	{
	printf("%d",i);
	}
	printf("\n");
	}
	printf("\n");
}

int fun2()
{
	for(int i=1;i<=5;i++)
        {
        for(int j=1;j<=5;j++)
        {
        printf("%d",j);
        }
        printf("\n");
        }
	printf("\n");
}
int fun3()
{
	for(int i=1;i<=5;i++)
	{
	for(int j=1;j<=5;j++)
        {
        printf("%d",6-i);
        }
        printf("\n");
        }
	printf("\n");
}
int fun4()
/*  54321
    54321
    54321
    54321
    54321
   */
{
	for(int i=1;i<=5;i++)
	{
	for(int j=1;j<=5;j++)
	{
	printf("%d",6-j);
	}
	printf("\n");
	}
	printf("\n");
}
int fun5()
/* AAAAA
   BBBBB
   CCCCC
   DDDDD
   EEEEE   */
{
	for(char i='A';i<='E';i++)
	{
	for(char j='A';j<='E';j++)
	{
	printf("%c",i);
	}
	printf("\n");
	}
	printf("\n");
}

int fun6()
/*  ABCDE
    ABCDE
    ABCDE
    ABCDE
    ABCDE  */
{
	for(char i ='A';i<='E';i++)
	{
	for(char j='A';j<='E';j++)
	{
	printf("%c",j);
	}
	printf("\n");
	}
	printf("\n");
}
int fun7()
/* *
   **
   ***
   ****
   *****  */
{
	for(int i=1;i<=5;i++)
	{
	for(int j=1;j<=5;j++)
	{
	if(j<=i)
	printf("*");
	else
	printf(" ");
	}
	printf("\n");
	}
	printf("\n");

}

int fun8()
{
	for(int i=1;i<=5;i++)
	{
	for(int j=1; j<=5;j++)
	{
	if(j<=6-i)
	printf("*");
	else
	printf(" ");
	}
	printf("\n");
	}
	printf("\n");
}
int fun9()
/* 11111
   2222
   333
   44
   5    */
{
        for(int i=1;i<=5;i++)
        {
        for(int j=1;j<=5;j++)
        {
	if(j<=6-i)
        printf("%d",i);
	else
	printf(" ");
        }
        printf("\n");
        }
        printf("\n");
}
int fun10()
{
	for(int i=1;i<=5;i++)
        {
        for(int j=5;j>=1;j--)
        {
	if(i>=j)
        printf("*");//TRIANGLE left
	else
	printf(" ");
        }
        printf("\n");
        }
        printf("\n");
}
int fun11()
{
	for(int i=1;i<=5;i++)
        {
        for(int j=5;j>=1;j--)
        {
        if(i>=j)
        printf("* ");// PYRAMID (by putting just a space
        else
        printf(" ");
        }
        printf("\n");
        }
        printf("\n");
}
int fun12()
/*   *****
      ****
       ***
        **
         *
*/
{
	for(int i=5;i>=1;i--)//INVERTED TRIANGLE
        {
        for(int j=5;j>=1;j--)
        {
        if(i>=j)
        printf("*");//INVERTED TRIANGLE
        else
        printf(" ");
        }
        printf("\n");
        }
        printf("\n");
}

int fun13()
/*

* * * * *
 * * * *
  * * *
   * *
    *

*/
{
	for(int i=5;i>=1;i--)
        {
        for(int j=5;j>=1;j--)
        {
        if(i>=j)
        printf("* ");//INVERTED PYRAMID
        else
        printf(" ");
        }
        printf("\n");
        }
        printf("\n");
}

int fun14()
{
        for(int i=7;i>=-7;i--)
        {
        for(int j=7;j>=abs(i);j--)
        {
        printf("*");
        }
        printf("\n");
        }
}
//PYRAMID
int fun15()
	{
	int row;
	int space;
	int star;
	int totalrow;
	printf("Enter the no of row\n");
	scanf("%d",&totalrow);
	for(row=1;row<=totalrow;row++)
	{
	for(space=1;space<=(totalrow-row);space++)
	{
	printf(" ");
	}
	for(star=1;star<=((2*row)-1);star++)
	{
	printf("*");
	}
	printf("\n");
	}
	}
//INVERTED PYRAMID
int fun16()
	{
	printf("\n");
	int row;
	int space;
	for(row=1;row<=20;row++)
	{
	for(space=1;space<row;space++)
	{
	printf(" ");
	}
	for(space=1;space<=(40-(2*row-1));space++)
	{
	printf("*");
	}
	printf("\n");
	}
	}
//HOLLOW PYRAMID
int fun17()
	{
	int i,n;
	int j;
	printf("Enter the vale of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	for(j=i;j<n;j++)
	printf(" ");
	for(j=1;j<=2*i-1;j++)
	{
		if(j==1||j==2*i-1||i==n)
		printf("*");
		else
		printf(" ");
	}
	printf("\n");
	}
	}
//HOLLOW INVERTED PYRAMID
int fun18()
	{
	int i,j,n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	for(j=1;j<i;j++)
	printf(" ");
	for(j=1;j<=n*2-(2*i)-1;j++)
	{
	if(i==1||j==1||j==(n*2)-(2*i)-1)
	printf("*");
	else
	printf(" ");
	}
	printf("\n");
	}
	}

//HOLLOW SQUARE
int fun19()
{
                for(int i=1;i<=5;i++)
        {
                for(int j=1;j<=5;j++)
                {
                        if(i==1||i==5||j==1||j==5)
                        printf("*");
                        else
                        printf(" ");
                }
                printf("\n");
        }

        }

//Hollow left-sided triangle
int fun20()
	{
		for(int i=1;i<=8;i++)
		{
		for(int j=1;j<=i;j++)      //j<=5(N)in star format
		{
		if(j==1||j==i||i==8)
		printf("*");
		else
		printf(" ");
		}
		printf("\n");
		}
	}

//Hollow down right-sided triangle
int fun21()
/*

********
 *     *
  *    *
   *   *
    *  *
     * *
      **
       *

*/


	{
	for(int i=1;i<=8;i++)
	{
	for(int j=1;j<=8;j++)
	{
	if(i==1||i==j||j==8)
	printf("*");
	else
	printf(" ");
	}
	printf("\n");
	}
	}


int main()
{
	fun1();
	fun2();
	fun3();
	fun4();
	fun5();
	fun6();
	fun7();
	fun8();
	fun9();
	fun10();
	fun11();
	fun12();
	fun13();
	fun14();
	fun15();
	fun16();
	fun17();
	fun18();
	fun19();
	fun20();
	fun21();
}
