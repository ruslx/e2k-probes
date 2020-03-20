#include <stdio.h>

int main() {
    printf("Hello World\n");
#if defined(__LCC__)
#  if defined(__e2k__) /* MCST eLbrus C Compiler */
    printf("MCST eLbrus C Compiler\n");
#  else                /* Local (or Little) C Compiler */
    printf("Local (or Little) C Compiler\n");
#  endif
#endif
    return 0;
}
