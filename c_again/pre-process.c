#include <stdio.h>

#define PLATFORM 2 // Change this value to simulate different platforms

int main() {
    // Example of conditional compilation using #if, #elif, and #else
#if PLATFORM == 1
    printf("Platform: Linux\n");
#elif PLATFORM == 2
    printf("Platform: Windows\n");
#else
    printf("Platform: Other\n");
#endif

    return 0;
}
