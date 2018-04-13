#ifndef	_TCP_PROXY_
#define	_TCP_PROXY_

#include "ikcp.h"

void tcp_proxy_accept_cb(struct evconnlistener *listener, evutil_socket_t fd,
						 struct sockaddr *a, int slen, void *param);

struct xkcp_task* tcp_proxy_location_service_connected_cb(
		struct event_base* base, struct bufferevent* bev, void *para);

#endif
