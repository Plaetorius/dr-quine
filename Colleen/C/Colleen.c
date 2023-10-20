#include <stdio.h>
int rline(){return 10;}
// This is an outside comment
int main(){/*This an inside commnent*/char *a="#include <stdio.h>%cint rline(){return 10;}%c// This is an outside comment%cint main(){/*This an inside commnent*/char *a=%c%s%c;printf(a, rline(), rline(), rline(), 34, a, 34);return 0;}";printf(a, rline(), rline(), rline(), 34, a, 34);return 0;}