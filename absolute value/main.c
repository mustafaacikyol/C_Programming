#include <stdio.h>

int absolute_value(int x){
    
    if( x>=0 ){
        return x;
    }else if ( x<0 ){
        return x*(-1);
    }
    
}

int main(){

    int number;
    printf("Enter a number:");
    scanf("%d",&number);

    int result = absolute_value(number);
    printf("%d",result);

    return 0;
}
