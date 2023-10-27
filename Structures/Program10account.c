#include<stdio.h>
struct employees {
    char name[50];  
    int account_no;
    int balance;
}e[10];

void display(){
    for(int i=0;i<=10;i++){
        if(e[i].balance<=200){
            printf("The name of employees: %s",e[i].name);
        }
    }
}

void increment(){
    for(int i=0;i<=10;i++){
        if(e[i].balance>=1000){
            e[i].balance += 100;
            printf("The increased balance of employees: %d",e[i].balance);
        }
    }
}

void main(){
    int i;
    printf("Enter the details: ");
    for(i=0;i<=10;i++){
        scanf("%s%d%d",e[i].name,&e[i].account_no,&e[i].balance);
    }
    display();
    increment();
}