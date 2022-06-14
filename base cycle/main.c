#include<stdio.h>

void from_10_to_2_base( int x ){

    int quotient = x, remainder, i = 0, array[10];

    do {

        remainder = quotient % 2;
        array[i] = remainder;
        i++;
        quotient = quotient / 2;

    }

    while (quotient > 0);

    for( int j=i-1 ; j>-1 ; j-- ){

        printf("%d",array[j]);
    }

}

int main(){

    int number,number_base_2;
    printf("Enter a number:");
    scanf("%d",&number);

    printf("The binary of %d : ",number);

    from_10_to_2_base(number);
   
    return 0;
}