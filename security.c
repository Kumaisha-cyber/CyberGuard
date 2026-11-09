#include <stdio.h>
#include "security.h"
#include "analyzer.h"

void analyze_event(SecurityEvent event)
{
    RiskLevel risk;

    if (event.failed_attempts >= 5)
        risk = HIGH;
    else if (event.failed_attempts >= 3)
        risk = MEDIUM;
    else
        risk = NORMAL;

    printf("\nEvent ID: %d\n", event.event_id);
    printf("Message: %s\n", event.message);
    printf("Failed Attempts: %d\n", event.failed_attempts);

    if (risk == HIGH)
        printf("Risk Level: HIGH\n");
    else if (risk == MEDIUM)
        printf("Risk Level: MEDIUM\n");
    else
        printf("Risk Level: NORMAL\n");

    record_risk(risk);
}
