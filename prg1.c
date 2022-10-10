#include <stdio.h>
#include<stdlib.h>
void main()
{
    float op1,op2,res;
    int choice;
    printf("Enter the two operands:");
    scanf("%f%f",&op1,&op2);
    printf("\n The options for operations are:\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n5 for modulus\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: res=op1+op2;
        break;
        case 2: res=op1-op2;
        break;
        case 3: res=op1*op2;
        break;
        case 4: if(op2!=0)//check to avoid divide by zero exception
               {
                   res=op1/op2;
               } 
               else
               {
                   printf("Please input a non zero denominator\n");
                   exit(0);//Defined in stdlib.h
               }
               break;
        case 5: if(op2!=0)//check to avoid divide by zero exception
               {
                   res=(int)op1%(int)op2;
               } 
               else
               {
                   printf("Please input a non zero denominator\n");
                   exit(0);//Defined in stdlib.h
               }
               break;
        default: printf("Invalid input\n");//executed when there is no match       
               exit(0);
    }
    printf("Result of the operation= %.2f\n",res);
}    

