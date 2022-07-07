#ifndef __ECLIB_CORE_H
#define __ECLIB_CORE_H

#include <stddef.h>
#include <stdint.h>

#ifdef HAVE_OWN_STDLIB
	#define eclib_malloc ECLIB_PROV_MALLOC
	#define eclib_free   ECLIB_PROV_FREE
#else
	#include <stdlib.h>
	#define eclib_malloc malloc
	#define eclib_free   free
#endif /* HAVE_OWN_STDLIB */

#ifdef HAVE_OWN_STRING
	#define eclib_memcpy ECLIB_PROV_MEMCPY
	#define eclib_memset ECLIB_PROV_MEMSET
#else
	#include <string.h>
	#define eclib_memcpy memcpy
	#define eclib_memset memset
#endif /* HAVE_OWN_STRING */

#define ECLIB_EIND   1
#define ECLIB_EDESTR 2

#endif /* __ECLIB_CORE_H */