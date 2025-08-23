#include<stdio.h>
int main(){
    char opp;
    float num1,num2,result;
    printf("enter the operator:+ ,- ,* or /");
    scanf("%c",&opp);
    printf("enter two numbers");
    scanf("%f %f",&num1,&num2);
    switch(opp){
      case'+':
      result=num1+num2;
      printf("%.2f",result);
      break;
      case'-':
      result=num1-num2;
       printf("%.2f",result);
       break;
      case'*':
      result=num1*num2;
       printf("%.2f",result);
       break;
      case'/':
      if (num2==0)
      printf("not defined");
      else{
    
      result=num1/num2;
      printf("%.2f",result);}
       break;
      
      default:
      printf("invalid opperation");





    }

}