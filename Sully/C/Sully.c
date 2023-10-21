#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	dprintf(open("second_file.c", O_WRONLY | O_CREAT, 0644), "#include <stdio.h>%cint main(){printf(%cbonjour%c);return 0;}", 10, 34, 34);
	system("gcc second_file.c -o second_file");
	execv("./second_file", NULL);
	return 0;
}