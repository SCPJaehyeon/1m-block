#include <header/header.h>

void usage(char *argv){
    printf("Usage : %s [site list file] \n", argv);
    printf("Example) %s blacklistsites.csv \n", argv);
}

void dump(unsigned char* buf, int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (i % 16 == 0)
            printf("\n");
        printf("%02x ", buf[i]);
    }
}
