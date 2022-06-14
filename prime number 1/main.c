#include <stdio.h>

int main(){

    int i,number;
   
    while(1){
        
        printf("Enter a number:");
        scanf("%d",&number);
       
        for(i=2;i*i<=number;i++){
            
            if(!(number%i)){
               
                printf("%d is not a prime number\n",number);
                break;
            }
        }

        if(i*i>number){
            printf("%d is a prime number\n",number);
        }
    }

    return 0;
}
