#include <stdio.h>
int main()
{
    int y, m, d;
    
    scanf("%d.", &y);
    printf("%04d.", y);
    scanf("%d.", &m);
    printf("%02d.", m);
    scanf("%d", &d);
    printf("%02d\n", d);
    
    return 0;
}
