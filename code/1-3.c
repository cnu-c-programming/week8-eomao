#include <stdio.h>
#include <string.h>

char *my_strcat(char *dst, const char *src){
    int dlen = strlen(dst);
    int slen = strlen(src);

    for(int i = 0; i < slen; i++){
        dst[dlen + i] = src[i];
    }

    dst[dlen + slen] = '\0';

    return dst;
}

int main(){
    char str1[20] = "Hello";
    char str2[] = "World";

    printf("%s\n", str1);
    my_strcat(str1, str2);
    printf("%s\n", str1);

    return 0;
}
