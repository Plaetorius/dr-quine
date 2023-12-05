#define FCNTL <fcntl.h>
#define STDIO <stdio.h>
/*
	This is a comment
*/
#define MAIN(x) int main() {char *string="#define FCNTL <fcntl.h>%1$c#define STDIO <stdio.h>%1$c/*%1$c%2$cThis is a comment%1$c*/%1$c#define MAIN(x) int main() {char *string=%3$c%4$s%3$c; dprintf(open(%3$cGrace_kid.c%3$c, O_WRONLY | O_CREAT, 0644), string, x, 9, 34, string); return 0;}%1$c#include FCNTL%1$c#include STDIO%1$cMAIN(10)"; dprintf(open("Grace_kid.c", O_WRONLY | O_CREAT, 0644), string, x, 9, 34, string); return 0;}
#include FCNTL
#include STDIO
MAIN(10)