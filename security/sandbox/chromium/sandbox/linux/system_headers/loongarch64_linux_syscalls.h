#ifndef SANDBOX_LINUX_SYSTEM_HEADERS_LOONGARCH64_LINUX_SYSCALLS_H_
#define SANDBOX_LINUX_SYSTEM_HEADERS_LOONGARCH64_LINUX_SYSCALLS_H_

#ifndef __NR_newfstatat
#define __NR_newfstatat 79
#endif

#ifndef __NR_fstat
#define __NR_fstat 80
#endif

#ifndef __NR_getrlimit
#define __NR_getrlimit 163
#endif

#ifndef __NR_rseq
#define __NR_rseq 293
#endif

#ifndef __NR_faccessat2
#define __NR_faccessat2 439
#endif

#ifndef __NR_epoll_pwait2
#define __NR_epoll_pwait2 441
#endif

#ifndef __NR_landlock_create_ruleset
#define __NR_landlock_create_ruleset 444
#endif

#ifndef __NR_landlock_add_rule
#define __NR_landlock_add_rule 445
#endif

#ifndef __NR_landlock_restrict_self
#define __NR_landlock_restrict_self 446
#endif

#endif  // SANDBOX_LINUX_SYSTEM_HEADERS_LOONGARCH64_LINUX_SYSCALLS_H_
