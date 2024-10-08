#include <stdio.h>
void main(void)
{
int x;
x = 3 + 4 * 5 - 6;
printf("%d\n",x);
x = 3 * 4 % 5 - 6;
printf("%d\n",x);
x = (7 + 6) % 5 / 2;
printf("%d\n",x);

int x = 2, y, z;
x *= 3 + 2;
printf("%d\n", x);
x *= y = 4;
printf("%d\t%d\n", x, y);
z = (x == y);
printf("%d\t%d\t%d\n", x, y, z);

int x, y = 1, z;
x = 0;
z = 1;
x = x && y || z;
printf("%d\n", x);
printf("%d\n", x || !y && z);
printf("%d\n", z >= y && y >= x);

int x, y, z;
x = y = z = -1;
++x || ++y || ++z;
printf("%d %d %d\n", x, y, z);
x = y = z = -1;
++x && ++y && ++z;
printf("%d %d %d\n", x, y, z);

int i, j, k;
i = j = k = 1;
i -= j -= k;
printf("%d\t%d\t%d\n", i, j, k);
i = j = 1;
printf("%d\n", i++ - ++j);
printf("%d\t%d\n", i, j);
}
