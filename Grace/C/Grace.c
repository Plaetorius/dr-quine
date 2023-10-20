#define INCLUDE <unistd.h>
#define MESSAGE write(1, "bonjour", 7)
#define MAIN int main(){MESSAGE; return 0;}

#include INCLUDE
MAIN
