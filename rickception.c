#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calcCamadas(int n, int t, int cont){

    if(cont == t){
        return n;
    }
    if(cont % 2 == 0){
        return calcCamadas(n + 3, t, cont +1);
    }

    return calcCamadas(n + (n % 5), t, cont + 1);

}
int main() {
    
    int n,t;
    scanf("%d %d", &n, &t);

    printf("%d", calcCamadas(n,t,0));
	return 0;
}