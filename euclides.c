#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int mdc(int n1, int n2){

    if(n2 == 0){
        return n1;
    }

    return mdc(n2, n1 % n2);

}
void inputado(int n){

    if(n == 0){
        return;
    }

    int n1,n2;
    scanf("%d %d",&n1, &n2);

    printf("MDC(%d,%d) = %d\n", n1, n2, mdc(n1,n2));

    return inputado(n-1);

}
int main() {
    int n;
    scanf("%d", &n);
    inputado(n);

	return 0;
}