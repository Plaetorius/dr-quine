#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int main()
{
	int i = 5;
	if (i < 1)
		return 1;
	char name[] = "Sully_ .c";
	char comp[] = "gcc Sully_ .c -o Sully_ ; ./Sully_ ";
	name[6] = i + 47;
	comp[10] = i + 47;
	comp[23] = i + 47;
	comp[34] = i + 47;
 	char *a = "#include <stdio.h>%c#include <stdlib.h>%c#include <fcntl.h>%cint main()%c{%c%cint i = %d;%c%cif (i < 1)%c%c%creturn 1;%c%cchar name[] = %cSully_ .c%c;%c%cchar comp[] = %cgcc Sully_ .c -o Sully_ ; ./Sully_ %c;%c%cname[6] = i + 47;%c%ccomp[10] = i + 47;%c%ccomp[23] = i + 47;%c%ccomp[34] = i + 47;%c %cchar *a = %c%s%c;%c%cdprintf(open(name, O_WRONLY | O_CREAT, 0644), a, 10, 10, 10, 10, 10, 9, i - 1, 10, 9, 10, 9, 9, 10, 9, 34, 34, 10, 9, 34, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 34, a, 34, 10, 9, 10, 9, 10, 9, 10); %c%csystem(i < 1 ? NULL : comp);%c%creturn 0;%c}";
	dprintf(open(name, O_WRONLY | O_CREAT, 0644), a, 10, 10, 10, 10, 10, 9, i - 1, 10, 9, 10, 9, 9, 10, 9, 34, 34, 10, 9, 34, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 34, a, 34, 10, 9, 10, 9, 10, 9, 10); 
	system(i < 1 ? NULL : comp);
	return 0;
}