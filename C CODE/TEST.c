#include <stdio.h>
int f() {
    static int num = 5;
    return num--;
}
int main() {
    for(int i = 0; i < 7; i++)
        printf("%d ", f());
    return 0;
}