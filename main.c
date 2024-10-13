#include <stdio.h>

int main(void) {
    int num = 100;
    while (num >=0 && num <= 100 && num %2 == 0) {
        printf("%d\n", num);
        num = num - 2;
    }
    return 0;
}