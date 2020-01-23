// Copyright 2020 (C) Julian Huch
// Autor: Julian Huch

#include "checkAddr.h"

__intptr_t  __currentBrk;

// ___________________________________________________________________________
HWND __sbrk(__intptr_t increment)
{
    __intptr_t __oldBrk = __currentBrk;
    __currentBrk += increment;
    return (HWND) __oldBrk;
}

// ___________________________________________________________________________
bool heapAddr(HWND checkPtr)
{
    if ( !(checkPtr < __sbrk(0)) ) { return 0; }
    else { return 1; }

}

