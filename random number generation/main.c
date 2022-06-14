#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    srand(time(NULL));
    int number = rand()%10;
    printf("%d\n",number);

    //Generating 5 random numbers from 1 to 6
    for( int i=0 ; i<5 ; i++ ){
        int random_number = 1 + rand()%6;
        printf("%d\n",random_number);
    }
    
    return 0;
}
