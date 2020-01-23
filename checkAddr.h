// Copyright 2020 (C) Julian Huch
// Autor: Julian Huch

#include <stdbool.h>
#include <stdlib.h>
#include <bits/types.h>

typedef void* PVOID;
typedef PVOID HWND;

void* __sbrk(__intptr_t increment);

bool heapAddr(void* checkPtr);

