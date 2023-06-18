
#include <stdio.h>

int main(){

    int n1, n2;

    printf("Digite os 2 números : ");

    scanf("%d %d", &n1, &n2);

    if(n1 > n2){
        printf("%d %d", n2, n1);
    }else{
        printf("%d %d", n1, n2);
    }
    return 0;

}