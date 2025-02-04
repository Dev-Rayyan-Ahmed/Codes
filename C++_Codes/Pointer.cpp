#include <stdio.h>
#include <iostream>
using namespace std;

void update(int *a,int *b) {
    // Complete this function  
    int ans1,ans2;
    ans1 = *a+*b;
    ans2 = abs(*a-*b);
    *a = ans1;
    *b = ans2;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}