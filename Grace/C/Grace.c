#define FCNTL <fcntl.h>
#define STDIO <stdio.h>
//This is a comment
#define MAIN int main() {char *string="#define FCNTL <fcntl.h>%c#define STDIO <stdio.h>%c//This is a comment%c#define MAIN int main() {char *string=%c%s%c; dprintf(open(%cGrace_kid.c%c, O_WRONLY | O_CREAT, 0644), string, 10, 10, 10, 34, string, 34, 34, 34, 10, 10, 10); return 0;}%c#include FCNTL%c#include STDIO%cMAIN"; dprintf(open("Grace_kid.c", O_WRONLY | O_CREAT, 0644), string, 10, 10, 10, 34, string, 34, 34, 34, 10, 10, 10); return 0;}
#include FCNTL
#include STDIO
MAIN