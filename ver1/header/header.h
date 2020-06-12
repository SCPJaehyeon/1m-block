#pragma once
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include <netinet/in.h>
#include <linux/types.h>
#include <linux/netfilter.h>
#include <errno.h>
#include <string.h>
#include <libnetfilter_queue/libnetfilter_queue.h>


#define UNUSED(X) (void)(X)
#define ETH_LEN     14
#define PKT_MAX     1514
#define JMP_METD    18
#define JMP_HOST    8
#define IPPRO_TCP   0x06
#define TCP_HTTP    0x5000

typedef struct iph{ //IP header
    uint8_t verandh;
    uint8_t service;
    uint16_t totallength;
    uint16_t identi;
    uint16_t offset;
    uint8_t ttl;
    uint8_t pro;
    uint16_t checks;
    uint32_t sip;
    uint32_t dip;
}IPH;

typedef struct tcph{
    uint16_t sport;
    uint16_t dport;
    uint32_t seq;
    uint32_t ack;
    uint8_t thoff;
    uint8_t flag;
    uint16_t win;
    uint16_t cks;
    uint16_t sp;
}TCPH;


void usage(char *argv);
int netfilter_block(char *argv);
bool check_method(u_char *data);
bool set_table();
void dump(unsigned char* buf, int size);
