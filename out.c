#include <stdio.h>
#include <stdlib.h>
int main(void){char a[30000]={0};char *p=a;++(*p);++(*p);++(*p);++(*p);++(*p);++(*p);++(*p);++(*p);while (*p) {++p;++(*p);++(*p);++(*p);++(*p);while (*p) {++p;++(*p);++(*p);++p;++(*p);++(*p);++(*p);++p;++(*p);++(*p);++(*p);++p;++(*p);--p;--p;--p;--p;--(*p);}++p;++(*p);++p;++(*p);++p;--(*p);++p;++p;++(*p);while (*p) {--p;}--p;--(*p);}++p;++p;putchar(*p);++p;--(*p);--(*p);--(*p);putchar(*p);++(*p);++(*p);++(*p);++(*p);++(*p);++(*p);++(*p);putchar(*p);putchar(*p);++(*p);++(*p);++(*p);putchar(*p);++p;++p;putchar(*p);--p;--(*p);putchar(*p);--p;putchar(*p);++(*p);++(*p);++(*p);putchar(*p);--(*p);--(*p);--(*p);--(*p);--(*p);--(*p);putchar(*p);--(*p);--(*p);--(*p);--(*p);--(*p);--(*p);--(*p);--(*p);putchar(*p);++p;++p;++(*p);putchar(*p);++p;++(*p);++(*p);putchar(*p);
}