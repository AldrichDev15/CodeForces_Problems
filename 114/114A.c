#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int k, l, numDivisions = 0;
    scanf("%i %i", &k, &l);
    while (l % k == 0 && l != 1) {
        l = l / k;
        numDivisions++;
    }
    if(l == 1) {
        printf("YES\n%i", numDivisions - 1);
    } else {
        printf("NO");
    }
    return 0;
}