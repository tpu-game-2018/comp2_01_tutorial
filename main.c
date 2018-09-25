#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[256];
    fgets(str, sizeof(str), stdin);
    scanf("%s\n",str);
    printf("%s", str);

    return 0;
}
