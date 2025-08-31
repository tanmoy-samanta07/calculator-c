#include<stdio.h>
int main(){
    double num1,num2;
    char op;


    printf("Enter First Number :\n");
    scanf("%lf", &num1);

    printf("Enter an Operator(+,-,*,/):\n");
    scanf(" %c", &op);

    printf("Enter Second Number:\n");
    scanf("%lf", &num2);

    if (op== '+'){
        printf("Result : %.3lf\n", num1+num2);

    }
        if(op== '-'){
            printf("Result : %.3lf\n", num1-num2);

        }
        if(op=='*'){
            printf("Result : %.3lf\n", num1*num2);

        }
        else if(op=='/'){
        if(num2!=0){
            printf("Result : %.3lf\n", num1/num2);
    
        }else{
            printf("Division by 0 is not possible\n");}
        }else{
            printf("Invalid Operator\n");
        
        }
        return 0;
    

}