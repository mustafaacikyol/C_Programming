#include<stdio.h>

int main(){

    int i,j,number;
    
    while(1){
        
        printf("Enter a number:");
        scanf("%d",&number);

        for(i=2;i<=number;i++){
            
            for(j=2;j*j<=i;j++){
                
                if( !(i%j) ){
                    
                    break;
                }
            }

            if(j*j>i){
                printf("%d is a prime number\n",i);
            }
        }
    }
    return 0;
}
