/**************************************************************
 *
 * userprog/ksyscall.h
 *
 * Kernel interface for systemcalls 
 *
 * by Marcus Voelp  (c) Universitaet Karlsruhe
 *
 **************************************************************/

#ifndef __USERPROG_KSYSCALL_H__ 
#define __USERPROG_KSYSCALL_H__ 

#include "kernel.h"

double SysDivision(int op1, int op2)
{
	return op1/op2;
}

int SysMultiplication(int op1, int op2)
{
	return op1*op2;
}

int SysPow(int op)
{
	return op*op;
}


void SysHalt()
{
  kernel->interrupt->Halt();
}


int SysAdd(int op1, int op2)
{
  return op1 + op2;
}






#endif /* ! __USERPROG_KSYSCALL_H__ */
