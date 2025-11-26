#include<stdio.h>
int main(){
    //There are 3 types of loops in c
    //for loop
    //while loop
    //do while

    //1.for loop
    //syntax
    // for(initialization;condition;increment or decrement){

    // }
    for(int i=1;i<=10;i++){
        printf("%d\n",i);
    }
    //2.while loop
    //syntax
    int num=1;
    while(num<=10){
        printf("%d\n",num);
        num++;
    }
//3.do while loop
    int num1=1;
    do{
        printf("%d\n",num1);
        num++;
    }while(num<=5);
    return 0;

}

