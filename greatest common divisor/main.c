#include <stdio.h>

int min (int x, int y){

    if(x<y){
        return x;
    }else{
        return y;
    }
}

int greatest_common_divisor( int x, int y){

    int result = 1;
    for( int i=2 ; i<=min(x,y) ; i++){

        if( !(x%i) && !(y%i) ){
            result = result * i;
        }

    }
    return result;
}

int main(){

    int number1, number2;
    printf("Enter two numbers:");
    scanf("%d%d",&number1,&number2);

    printf("%d and %d greatest common divisor:%d",number1,number2,greatest_common_divisor(number1,number2));
    return 0;
}
