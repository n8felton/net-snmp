/*
 *  Template MIB group interface - tcp.h
 *
 */
#ifndef _MIBGROUP_TCPTABLE_H
#define _MIBGROUP_TCPTABLE_H

config_arch_require(solaris2, kernel_sunos5)
config_require(mibII/ip util_funcs)

extern void                init_tcpTable(void);
extern Netsnmp_Node_Handler     tcpTable_handler;
extern NetsnmpCacheLoad         tcpTable_load;
extern NetsnmpCacheFree         tcpTable_free;
extern Netsnmp_First_Data_Point tcpTable_first_entry;
extern Netsnmp_Next_Data_Point  tcpTable_next_entry;

#define TCPCONNSTATE	     1
#define TCPCONNLOCALADDRESS  2
#define TCPCONNLOCALPORT     3
#define TCPCONNREMOTEADDRESS 4
#define TCPCONNREMOTEPORT    5

#endif                          /* _MIBGROUP_TCPTABLE_H */
