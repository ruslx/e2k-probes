#include <stdio.h>

int main() {
#if defined(__LCC__)
#  if defined(__e2k__) /* MCST eLbrus C Compiler */
    printf("MCST eLbrus C Compiler\n");
#  else                /* Local (or Little) C Compiler */
    printf("Local (or Little) C Compiler\n");
#  endif
#endif

// #if 5 <= __GNUC__ && !defined __ICC && !(defined __LCC__ && __LCC__ <= 123)
//#  warning Recomend use a LCC >= 1.23 version
// #elif 5 <= __GNUC__ && !defined __ICC && \
//         !(defined __LCC__ && __LCC__ <= 123) && !__STRICT_ANSI__
//#  error LCC must be 1.23 version
// #endif

// https://gcc.gnu.org/onlinedocs/cpp/Standard-Predefined-Macros.html
    printf("Message from file: %s\nMessage from line: %d\nIn function: %s\nCompiled: %s %s\n", __FILE__, __LINE__, __FUNCTION__, __DATE__, __TIME__);
    printf("is STD:%d\nSTD ver: %d\nLCC ver: %d\nis E2K Arch: %d\n", __STDC__, __STDC_VERSION__, __LCC__, __e2k__);
    //printf("%d %d\n", , __ASSEMBLER__, __cplusplus);

    return 0;
}
