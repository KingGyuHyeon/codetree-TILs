#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *p;
    int i, count = 0, t = 2;
    scanf("%d", &n);
    p = (int *)malloc(sizeof(int) * n);
    for(i = 0; i < n; i++) {
        scanf("%d", &p[i]);
        if (p[i] == t) {
            count++;
            if (count == 3) {
                printf("%d\n", i + 1);
                break;
            }
        }
    }
    free(p);
    return 0;
}