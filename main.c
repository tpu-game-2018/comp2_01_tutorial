#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[256];
    fgets(str, sizeof(str), stdin);
    scanf("%s",str);
    printf("%s\n", str);

    return 0;
}
