//
// Created by dev on 25/1/2022.
//

#ifndef OP_NET_COMMON_H
#define OP_NET_COMMON_H
#ifndef __cplusplus
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#endif
#ifdef __cplusplus
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <iostream>
void error_handling(const std::string &message);
#elif
void error_handling(char *message);
#endif
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#endif //OP_NET_COMMON_H
