#include <stdlib.h>
#include <stdio.h>

void two_even_parts(int *w) {
    if(*w % 2 == 0 && *w != 2) {
        printf("YES"); 
    } else {
        printf("NO");
    }
}

int main(){
    int w;
    scanf("%i", &w);
    two_even_parts(&w);
    return 0;
}