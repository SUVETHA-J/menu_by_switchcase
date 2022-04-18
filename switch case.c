#include<stdio.h>
int main()
{int n;
printf("select a food item \n1)pizza\n2)burger\n3)pasta\n4)french fries \n5)sandwich");
scanf("%d",&n);
switch(n)
{
case 1:
printf("food item-pizza\nprice-Rs179");
break;
case 2:
printf("food item-Burger\nprice-Rs129");
break;
case 3:
printf("food item-Pasta\nprice-Rs179");
break;
case 4:
printf("food item-French Fries\nprice-Rs99");
break;
case 5:
printf("food item-sandwich\nprice-Rs149");
break;
default:
printf("select any item between 1 to 5");
}
return 0;
}

