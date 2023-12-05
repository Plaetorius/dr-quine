#include <stdio.h>
int rline(){return 10;}
/*
	This is an outside comment
*/
int main(){
/*
	This an inside comment
*/
char *a="#include <stdio.h>%1$cint rline(){return 10;}%1$c/*%1$c%2$cThis is an outside comment%1$c*/%1$cint main(){%1$c/*%1$c%2$cThis an inside comment%1$c*/%1$cchar *a=%3$c%4$s%3$c;printf(a, rline(), 9, 34, a);return 0;}";printf(a, rline(), 9, 34, a);return 0;}