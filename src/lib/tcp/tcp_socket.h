#ifndef _TCP_SOCKET_H_
#define _TCP_SOCKET_H_

#include "std_types.h"
#include "std_errno.h"

typedef struct {
	int fd;
} TcpSocketType;

extern Std_ReturnType tcp_socket_open(TcpSocketType *socket);
extern void tcp_socket_close(TcpSocketType *socket);
extern Std_ReturnType tcp_inet_get_ipaddr(const char *hostname, uint32 *ipaddr);

#endif /* _TCP_SOCKET_H_ */
