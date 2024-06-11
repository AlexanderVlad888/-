#include "math.h"


int sum(int a, int b) {
    return a + b;
}
float div1(int a, int b) {
    return (float)a / b;
}
int mul(int a, int b) {
    return a * b;
}
int sub(int a, int b) {
    return a - b;
}
int pow(int a, int b) {
    int c = a;
    for (int i = 1; i < b; i++) {
        c = c * a;
    }
    return c;
}