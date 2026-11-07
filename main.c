
#include <stdio.h>
#include "security.h"

int main(void) {

    SecurityEvent events[] = {
        {101, "Normal login activity", 1},
        {102, "Repeated login failures", 3},
        {103, "Suspicious login activity", 6}
    };

    int total = sizeof(events) / sizeof(events[0]);

    printf("\n");
    printf("====================================\n");
    printf("           CYBERGUARD\n");
    printf("    SECURITY MONITORING SYSTEM\n");
    printf("====================================\n");

    for (int i = 0; i < total; i++) {
        analyze_event(events[i]);
    }

    display_report();

    return 0;
}
