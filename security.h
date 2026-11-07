
#ifndef SECURITY_H
#define SECURITY_H

#define MAX_LOGS 100
#define MAX_MESSAGE_LENGTH 256

typedef struct {
    int event_id;
    char message[MAX_MESSAGE_LENGTH];
    int failed_attempts;
} SecurityEvent;

void analyze_event(SecurityEvent event);
void display_report(void);

#endif
