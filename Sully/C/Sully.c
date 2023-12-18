#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main() {
	int i = 5;
	char name[snprintf(NULL, 0, "Sully_%d.c", i) + 1];
	sprintf(name, "Sully_%d.c", i);
	char comp[snprintf(NULL, 0, "clang Sully_%d.c -o Sully_%d ; ./Sully_%d", i, i, i) + 1];
	sprintf(comp, "clang Sully_%d.c -o Sully_%d ; ./Sully_%d", i, i, i);	
	char *a = "#include <stdio.h>%1$c#include <stdlib.h>%1$c#include <fcntl.h>%1$cint main() {%1$c%5$cint i = %2$d;%1$c%5$cchar name[snprintf(NULL, 0, %3$cSully_%%d.c%3$c, i - 1) + 1];%1$c%5$csprintf(name, %3$cSully_%%d.c%3$c, i - 1);%1$c%5$cchar comp[snprintf(NULL, 0, %3$cclang Sully_%%d.c -o Sully_%%d; ./Sully_%%d%3$c, i - 1, i - 1, i - 1) + 1];%1$c%5$csprintf(comp, %3$cclang Sully_%%d.c -o Sully_%%d; ./Sully_%%d%3$c, i - 1, i - 1, i - 1);%1$c%5$cchar *a = %3$c%4$s%3$c;%1$c%5$cdprintf(open(name, O_WRONLY | O_CREAT, 0644), a, 10, i - 1, 34, a, 9);%1$c%5$csystem(i > 1 ? comp : NULL);%1$c}";
	dprintf(open(name, O_WRONLY | O_CREAT, 0644), a, 10, i, 34, a, 9);
	system(i > 1 ? comp : NULL);
}