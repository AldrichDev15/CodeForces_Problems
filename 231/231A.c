#include <stdlib.h>
#include <stdio.h>

int main() {
    int n, total_solve = 0;
    scanf("%i", &n);
    for (int i = 0; i < n; i++)
    {
        int t, p, v;
        scanf("%i %i %i", &t, &p, &v);
        if(t + p + v >= 2){
            total_solve++;
        }
    }
    printf("%i", total_solve);
    return 0;
}