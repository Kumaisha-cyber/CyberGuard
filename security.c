
#include <stdio.h>
#include "security.h"
#include "analyzer.h"

void analyze_event(SecurityEvent event) {

    RiskLevel risk;

    if (event.failed_attempts >= 5) {
        risk = HIGH;
    }
    else if (event.failed_attempts >= 3) {
        risk = MEDIUM;
    }
    else {
        risk = NORMAL;
    }

    printf("\nEvent ID: %d\n", event.event_id);
    printf("Message: %s\n", event.message);
    printf("Failed Attempts: %d\n", event.failed_attempts);

    switch (risk) {

        case HIGH:
            printf("Risk: HIGH\n");
            break;

        case MEDIUM:
            printf("Risk: MEDIUM\n");
            break;

        default:
            printf("Risk: NORMAL\n");
    }

    record_risk(risk);
}
