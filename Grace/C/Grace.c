#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
int main() {char *string="#include <fcntl.h>%c#include <unistd.h>%c#include <stdio.h>%cint main() {char *string=%c%s%c; dprintf(open(%cGrace_kid.c%c, O_WRONLY | O_CREAT, 0644), string, 10, 10, 10, 34, string, 34, 34, 34); return 0;}"; dprintf(open("Grace_kid.c", O_WRONLY | O_CREAT, 0644), string, 10, 10, 10, 34, string, 34, 34, 34); return 0;}