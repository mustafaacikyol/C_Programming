#include <stdio.h>

int min( int x, int y ){

    if(x<y){
        return x;
    }else {
        return y;
    }
}

int max( int x, int y ){

    if(x>y){
        return x;
    }else{
        return y;
    }
}

int main(){

    int number1, number2;
    printf("Enter two numbers:");
    scanf("%d%d",&number1,&number2);
    printf("The smaller of the numbers:%d\n",min(number1,number2));
    printf("The larger of the numbers:%d",max(number1,number2));

    return 0;
}
