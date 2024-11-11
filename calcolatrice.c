#include<stdio.h>

 int main () {
    printf("insert operation'\n");
    int number;
    int number2;
    char operator;
     int result;
     scanf("%d %c %d",&number,&operator,&number2);
   switch (operator)
   {
   case '+':
 result =  number + number2 ;
 printf("%d \n",result);
    break;
    case '-':
 result =  number - number2 ;
  printf("%d \n",result);
    break;
    case ':':
 result =  number / number2 ;
  printf("%d \n",result);
    break;
    case 'x':
 result =  number * number2 ;
  printf("%d \n",result);
    break;
   
   default:
    break;
   }
    return 0;
};