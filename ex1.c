// Name : SIDDHARTH SANTOSH DAVARI 
//ROLL no: 116
#include<stdio.h>
int main() {
    float num1, num2, num3, sum, average;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    sum = num1 + num2 + num3;

    average = sum / 3;
    printf ("sum is");
    printf("%f\n",sum);
    printf ("average is");
    printf("%f", average);

    return 0;
}
//output
/*

Enter three numbers: 1
2
3
sum is6.000000
average is2.000000
[Process completed - press Enter]

*/


