#include <stdio.h>
#include "report.h"
#include "analyzer.h"

void generate_report(void)
{
    printf("\n");
    printf("====================================\n");
    printf("         CYBERGUARD REPORT\n");
    printf("====================================\n");

    printf("Normal Events : %d\n", get_normal_count());
    printf("Medium Alerts : %d\n", get_medium_count());
    printf("High Alerts   : %d\n", get_high_count());

    printf("------------------------------------\n");
    printf("Security Analysis Completed\n");
    printf("====================================\n");
}
