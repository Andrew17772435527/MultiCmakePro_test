#pragma once
#ifndef __COMMON_TYPE_H__
#define __COMMON_TYPE_H__

#include<stdio.h>
#define abs 33
#define USUUA (abs)

typedef short s_t;
#ifdef   __cplusplus
extern "C" {
#endif
	typedef unsigned char uc_t;
	typedef short s_t;

	typedef struct {
		uc_t test_char;
		s_t test_short;
	}test_struct;

#ifdef    __cplusplus
}
#endif

#endif