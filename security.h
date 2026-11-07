
#ifndef SECURITY_H
#define SECURITY_H

#define MAX_MESSAGE_LENGTH 100

typedef struct {
    int event_id;
    char message[MAX_MESSAGE_LENGTH];
    int failed_attempts;
} SecurityEvent;

typedef enum {
    NORMAL,
    MEDIUM,
    HIGH
} RiskLevel;

#endif
