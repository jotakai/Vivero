#include<iostream>
#include <cstring>

using namespace std;

#include"registroCompra.h"

void registroCompra::setIdProveedor(const char *idProveedor) { strcpy(_idProveedor, idProveedor); }