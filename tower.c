#include <stdio.h>

void tower_of_hanoi(int n, char s, char aux, char target) {
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n",s, target);
        return;
    }
    tower_of_hanoi(n - 1, s, target, aux);
    printf("Move disk %d from rod %c to rod %c\n", n, s, target);
    tower_of_hanoi(n - 1, aux, s, target);
}

int main() {
    int N = 3;
    tower_of_hanoi(N, 'A', 'B', 'C');
    return 0;
}

