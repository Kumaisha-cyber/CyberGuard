
#include <stdio.h>
#include "security.h"

void analyze_event(SecurityEvent event) {

    printf("\n----------------------------------\n");
    printf("       SECURITY EVENT ANALYSIS\n");
    printf("----------------------------------\n");

    printf("Event ID: %d\n", event.event_id);
    printf("Event Message: %s\n", event.message);
    printf("Failed Attempts: %d\n", event.failed_attempts);

    if (event.failed_attempts >= 5) {
        printf("Status: HIGH RISK\n");
        printf("Alert: Suspicious login activity detected!\n");
    }
    else if (event.failed_attempts >= 3) {
        printf("Status: MEDIUM RISK\n");
        printf("Alert: Multiple failed login attempts.\n");
    }
    else {
        printf("Status: NORMAL\n");
        printf("No suspicious activity detected.\n");
    }

    printf("----------------------------------\n");
}

void display_report(void) {

    printf("\n");
    printf("==================================\n");
    printf("       CYBERGUARD REPORT\n");
    printf("==================================\n");
    printf("Security analysis completed.\n");
    printf("System monitoring is active.\n");
    printf("==================================\n");
}
