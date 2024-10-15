#include <stdio.h>

int main(void) {
    int num /*= 100*/;
    /*while (num >=0 && num <= 100 && num %2 == 0) {
        printf("%d\n", num);
        num = num - 2;
    }*/
    for (num = 100; num >= 0 && num <= 100 && num %2 == 0; num-=2) {
        printf("%d\n", num);
    }
    return 0;
}