#ifndef SNMPV3_H
#define SNMPV3_H

void setup_engineID(char *text);
void engineID_conf(char *word, char *cptr);
void engineBoots_conf(char *, char *);
void init_snmpv3(char *);
void shutdown_snmpv3(char *type);
int snmpv3_get_engine_boots(void);
int snmpv3_get_engineID(char *buf);

#endif /* SNMPV3_H */
