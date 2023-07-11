#include <stdio.h>
#include <math.h>

int minSteps(int x, int y) {
    int d = y - x;
    int k = (int)ceil((-1.0 + sqrt(1 + 8.0 * d)) / 2);
    int total = k * (k + 1) / 2;
    if (d == total) {
        return k;
    } else if ((total - d) % 2 == 0) {
        return k;
    } else {
        return k + 1 + k % 2;
    }
}

int main() {
    printf("%d\n", minSteps(45, 48));
    printf("%d\n", minSteps(45, 49));
    printf("%d\n", minSteps(45, 50));
    printf("%d\n", minSteps(45, 51));
    return 0;
}
