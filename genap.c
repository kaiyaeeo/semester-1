#include <stdio.h>
//program mencetak bilangan genap antara 1-50
int main()
{
    int i;

    for(i=0; i<=50; i++){
        if(i%2 == 0){
            printf("Bilangan genap:%d\n", i);
        }else{
            printf(" ");
        }
    }
    return 0;
}