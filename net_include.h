#include <stdio.h>

#include <stdlib.h>

#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/select.h>
#include <netinet/in.h> 
#include <netdb.h>

#include <errno.h>

#define PORT	     10230

#define MAX_MESS_LEN 1400
#define RTR_SIZE 1380


struct Token{
    int index;
    int token_index;
    int aru;
    int aru_id;
    int num_rtr;
    int rtr[RTR_SIZE];
};

struct Packet{
    int index;
    int random_number;
    char payload_data[1300];
};


struct IP_Packet{
    int p_id;
    //double check correct type....
    struct in_addr ip_addr;
};




