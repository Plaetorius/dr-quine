#include <stdio.h>
int rline(){return 10;}
/*
	This is an outside comment
*/
int main(){
/*
	This an inside comment
*/
char *a="#include <stdio.h>%cint rline(){return 10;}%c/*%c%cThis is an outside comment%c*/%cint main(){%c/*%c%cThis an inside comment%c*/%cchar *a=%c%s%c;printf(a, rline(), rline(), rline(), 9, rline(), rline(), rline(), rline(), 9, rline(), rline(), 34, a, 34);return 0;}";printf(a, rline(), rline(), rline(), 9, rline(), rline(), rline(), rline(), 9, rline(), rline(), 34, a, 34);return 0;}