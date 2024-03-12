#include <stdio.h>
#include <stdlib.h>

int main(){
    long n, m, a;
    long long totalSquares = 0;
    scanf("%ld %ld %ld", &n, &m, &a);
    div_t h_sq = div(n, a);
    div_t w_sq = div(m, a);
    totalSquares += h_sq.quot;
    if(h_sq.rem != 0) {
        totalSquares ++;
    }
    int mult = w_sq.quot;
    if(w_sq.rem != 0) {
        mult++;
    }
    totalSquares *= mult;
    printf("%lld", totalSquares);
    return 0;
}