#include <stdio.h>
struct complex
{
    float real;
    float imaginary;
}c[2];
void main(){
    int i;
    float real_part,imag_part;
    for(i=0;i<2;i++){
        printf("Enter the real part:");
        scanf("%f",&c[i].real);
        printf("Enter the imaginary part:");
        scanf("%f",&c[i].imaginary);

        real_part += c[i].real;
        imag_part+= c[i].imaginary;
    }
    printf("Sum is: %.1f %.1f i",real_part,imag_part);
}