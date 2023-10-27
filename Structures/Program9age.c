#include<stdio.h>
struct student{
    int roll;
    char name[20];
    int age;
    char address[20];

}s[10];

void age(){
    printf("Students under age 14: ");
    for(int i=0 ; i < 10 ; i++){
        if(s[i].age > 14){
            printf("%s",s[i].name);
        }
    }
}

void evenroll(){
    printf("\nEven-indexed students' names: ");
    for(int i=0;i<10;i++){
        if(s[i].roll % 2 == 0){
            printf("%s",s[i].name);
        }
    }
}

void details(){
    int roll;
    printf("\nEnter roll number: ");
    scanf("%d",&roll);
    printf("\nStudent Details:\n");
    for (int i = 0; i < 10; ++i) {
         if(s[i].roll == roll)
        {
            printf("Roll no. : %d\nName : %s\nAge : %d\nAddress : %s",s[i].roll,s[i].name,s[i].age,s[i].address);
        }
    }
}
void main(){
    for(int i=0; i<15; i++)
    {
        printf("Enter the details of student %d \n",i+1);

        printf("Enter roll number: ");
        scanf("%d",&s[i].roll);

        printf("Enter name: ");
        fflush(stdin);
        gets(s[i].name);

        printf("Enter age: ");
        scanf("%d", & s[i].age );

        printf("Enter address: ");
        fflush(stdin);
        gets(s[i].address);

        printf("\n");
    }
    age();
    evenroll();
    details();
}