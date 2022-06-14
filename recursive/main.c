#include <stdio.h>

void f(int x){

    printf("%d\n",x);
    
    if( x<3 ){
        
        f( x+1 );
    }
   
    printf("%d\n",x);
}

int main(){

    f(0);
    return 0;
}
