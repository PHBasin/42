#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display(char *tableau)
{
    printf("%s", tableau);
}

int main() {
    char str_src[30] = "la belle au bois dormant";
    char str_dest[20];

    strlcpy(str_dest, str_src, 31);
    
    display(str_src);
    return 0;
}
