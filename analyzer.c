
#include "analyzer.h"

static int high_count = 0;
static int medium_count = 0;
static int normal_count = 0;

void record_risk(RiskLevel risk) {

    switch (risk) {

        case HIGH:
            high_count++;
            break;

        case MEDIUM:
            medium_count++;
            break;

        default:
            normal_count++;
    }
}

int get_high_count(void) {
    return high_count;
}

int get_medium_count(void) {
    return medium_count;
}

int get_normal_count(void) {
    return normal_count;
}
