#include <stdio.h>

struct StructExample {
    int num;
    char ch;
};

union UnionExample {
    int num;
    char ch;
};

int main() {
    struct StructExample s;
    union UnionExample u;
    printf("Size of structure: %lu\n", sizeof(s));
    printf("Size of union: %lu\n", sizeof(u));
    return 0;
}

