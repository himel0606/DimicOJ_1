#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  

    for(int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);  

        if(num % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }

    return 0;
}
