#include <stdio.h>

int find_reverse(int x){

    int place,sum_number=0;

    for( int i=1 ; i<=x ; i*=10 ){

       place = (x/i)%10;
       sum_number = (sum_number*10) + place;

    }

    return sum_number;
}

int main(){

    int number, reverse_number;
    printf("Enter a number:");
    scanf("%d",&number);
    reverse_number = find_reverse(number);
    
    if ( reverse_number == number){
        printf("It's a palindromic number");
    }else {
        printf("It's not a palindromic number");
    }
    
    return 0;
}
