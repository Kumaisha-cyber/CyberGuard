
#include <stdio.h>
#include "security.h"
#include "analyzer.h"
#include "report.h"

int main(void) {

    SecurityEvent events[] = {
        {101, "Normal Login", 1},
        {102, "Failed Login", 3},
        {103, "Suspicious Login", 6},
        {104, "Unknown Access", 8},
        {105, "Normal Login", 0}
    };

    int total = sizeof(events) / sizeof(events[0]);

    printf("\n====================================\n");
    printf("           CYBERGUARD\n");
    printf("     SECURITY MONITORING SYSTEM\n");
    printf("====================================\n");

    for (int i = 0; i < total; i++) {
        analyze_event(events[i]);
    }

    generate_report();

    printf("\nAnalysis completed successfully!\n");

    return 0;
}
