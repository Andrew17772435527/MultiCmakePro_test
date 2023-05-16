#pragma once
#ifndef __PRINT_FUNCTION_H__
#define __PRINT_FUNCTION_H__

#include "common_type.h"

typedef short s_t;
#ifdef   __cplusplus
extern "C" {
#endif

	typedef struct {
		uc_t test_char;
		s_t test_short;
	}print_struct;

	void print_struct_function(print_struct p);

#ifdef    __cplusplus
}
#endif

#endif