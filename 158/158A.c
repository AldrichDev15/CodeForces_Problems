#include <stdlib.h>
#include <stdio.h>

int main() {
    int k, n, participants = 0;
    scanf("%i %i", &n, &k);
    
    int *scores = (int *)malloc(n * sizeof(int));
    int first_zero = 51;

    for (int i = 0; i < n; i++)
    {
        scanf("%i", &scores[i]);
        if(scores[i] == 0 && first_zero == 51) {
            first_zero = i;
        }
    }
    
    if(k < first_zero + 1) {
        participants = k;
        for (int i = k; i < n; i++)
        {
            if(scores[k - 1] == scores[i]) {
                participants++;
            } else {
                break;
            }
        }
        printf("%i", participants);
        
    } else {
        printf("%i", first_zero );
    }
    
    free(scores);
    return 0;
}
