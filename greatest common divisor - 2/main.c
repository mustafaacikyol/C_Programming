#include <stdio.h>

int min(int x, int y){

    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int greatest_common_divisor(int x, int y){

    int result = 1;
    for (int i = 2; i <= min(x, y); i++)
    {

        if (!(x % i) && !(y % i))
        {
            result = result * i;
        }
    }
    return result;
}

int read_number(){

    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    return x;
}

int main(){

    int quantity, gcd;
    printf("How many numbers will you enter:");
    scanf("%d",&quantity);
    gcd = read_number();

    for( int i = 2; i<=quantity ; i++){

        gcd = greatest_common_divisor(gcd,read_number());
    }

    printf("%d numbers greatest common divisor : %d", quantity, gcd);

    return 0;
}
