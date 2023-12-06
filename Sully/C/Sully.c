#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main() {
	int i = 5;
	char name[] = "Sully_ .c";
	char comp[] = "clang Sully_ .c -o Sully_ ; ./Sully_ ";
	name[6] = i + 48;
	comp[12] = i + 48;
	comp[25] = i + 48;
	comp[36] = i + 48;
	char *a = "#include <stdio.h>%1$c#include <stdlib.h>%1$c#include <fcntl.h>%1$cint main()%1$c{%1$cint i = %2$d;%1$cchar name[] = %3$cSully_ .c%3$c;%1$cchar comp[] = %3$cclang Sully_ .c -o Sully_ ; ./Sully_ %3$c;%1$cname[6] = i + 48; comp[12] = i + 48; comp[25] = i + 48; comp[36] = i + 48; %1$cchar *a = %3$c%4$s%3$c;%1$cdprintf(open(name, O_WRONLY | O_CREAT, 0644), a, 10, i - 1, 34, a);%1$csystem(i > 0 ? comp : NULL);%1$c}";
	dprintf(open(name, O_WRONLY | O_CREAT, 0644), a, 10, i - 1, 34, a);
	system(i > 0 ? comp : NULL);
}