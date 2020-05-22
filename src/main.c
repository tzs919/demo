#include "demo.h"

#include <stdio.h>

int main(int argc, char **argv)
{
    int x = 15;
    int y = 16;
    int result = add(x, y);
    printf("%d + %d = %d\n", x, y, result);
}