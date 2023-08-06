#include "demo.h"

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc < 3)
    {
        printf("Usage: %s x y \n", argv[0]);
        return 1;
    }

    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    // 演示断言assertion
    if (x <= 0 || y <= 0)
    {
        return 2;
    }

    int result = add(x, y);
    printf("%d + %d = %d\n", x, y, result);
}