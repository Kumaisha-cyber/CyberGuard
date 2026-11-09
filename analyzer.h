#ifndef ANALYZER_H
#define ANALYZER_H

#include "security.h"

void record_risk(RiskLevel risk);
int get_high_count(void);
int get_medium_count(void);
int get_normal_count(void);

#endif
