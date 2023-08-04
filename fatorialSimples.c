#include <stdio.h>
#include <math.h>
#include <string.h>

int fatorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * fatorial(n - 1);
    }

}
int main()
{
    int fat;
    scanf("%d", &fat);
    printf("%d", fatorial(fat));
    
    return 0;
}