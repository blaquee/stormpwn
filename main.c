#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <netdb.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <netinet/udp.h>
#include <netinet/ip_icmp.h>
#include <pthread.h>
#include <errno.h>

#include "common.h"
typedef int SOCKET;

SOCKET recvSocket;
SOCKET sendSocket;


unsigned short csum(unsigned short *buf, int nwords)
{       //
	unsigned long sum;
    for(sum=0; nwords>0; nwords--)
            sum += *buf++;
    sum = (sum >> 16) + (sum &0xffff);
    sum += (sum >> 16);
    return (unsigned short)(~sum);
}

int setListenerThread(void* ptr)
{

}

int main(int argc, char** argv)
{

}