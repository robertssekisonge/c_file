#include <stdio.h>

int main(){

    int janesAge = 63;
    int johnsAge = 40;

    printf("this is janes age %d\n", janesAge);
    printf("this is johns age %d\n",johnsAge);
    printf("jane has an age of %d years and john has an age of %d years" ,janesAge , johnsAge);

    int totalAge = johnsAge + janesAge;
    int ageDifference = johnsAge - janesAge;
    int ageProduct = johnsAge * janesAge;
    float ageDivision =johnsAge / janesAge;

    printf("the total age is %d\n", totalAge);
    printf("the age difference is %d\n",ageDifference);
    printf("the product age is %d\n",ageProduct);
    printf("the age division is %.3f", ageDivision);
    return 0;
//int %d
//float %f
//double %if


}