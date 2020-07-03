#ifndef _KERNEL_ATOMIC_H
#define _KERNEL_ATOMIC_H

#include <cpu/atomic.h>

struct spinlock
{
	int locked;
};

#define SPINLOCK_INIT   {0};
#define SPINLOCK_LOCK   1
#define SPINLOCK_UNLOCK 0

#define atomic_test_and_set(mem, bit) arch_atomic_test_and_set(mem, bit)
#define atomic_compare_exchange(mem, bitunset, bitset) \
	arch_atomic_compare_exchange(mem, bitunset, bitset)

#define atomic_store(mem, bit) arch_atomic_store(mem, bit)

void spinlock_lock(struct spinlock *sl);
void spinlock_unlock(struct spinlock *sl);

#endif /* _KERNEL_ATOMIC_H */