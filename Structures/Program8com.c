#include<stdio.h>
struct complex{
    float r;
    float i;
}c[2];
void main(){
    int j;
    float sub_real,sub_imag,mul_real,mul_imag, add_real,add_imag;
    // printf("Enter the real and imaginary part of complex number: ");
    for(j=0;j<=1;j++){
         printf("Enter the real part:");
        scanf("%f",&c[j].r);
        printf("Enter the imaginary part:");
        scanf("%f",&c[j].i);

        add_real += c[j].r;
        add_imag += c[j].i;

        sub_real -= c[j].r;
        sub_imag -= c[j].i;

        mul_real *=c[j].r;
        mul_imag*=c[j].i;
    }
    printf("Sum is: %f + %f i \n",add_real,add_imag);
    printf("Difference is :%f - %f i\n",sub_real,sub_imag);
    printf("Product is:%f + %f i \n",mul_real,mul_imag);
}