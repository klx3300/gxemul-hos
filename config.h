/*
 *  THIS FILE IS AUTOMATICALLY CREATED BY configure!
 *  DON'T EDIT THIS FILE MANUALLY, IT WILL BE OVERWRITTEN.
 */

#ifndef CONFIG_H
#define CONFIG_H

#define VERSION "hos"
#define UNSTABLE_DEVEL
#define WITHUNITTESTS
#define COMPILE_DATE "compiled on Linux/x86_64, Fri Mar 15 01:14:48 CST 2019"
#define ADD_ALL_CPU_FAMILIES     add_cpu_family(alpha_cpu_family_init, ARCH_ALPHA); add_cpu_family(arm_cpu_family_init, ARCH_ARM); add_cpu_family(m88k_cpu_family_init, ARCH_M88K); add_cpu_family(mips_cpu_family_init, ARCH_MIPS); add_cpu_family(ppc_cpu_family_init, ARCH_PPC); add_cpu_family(sh_cpu_family_init, ARCH_SH);
#define WITH_X11
#define strlcpy mystrlcpy
#define strlcat mystrlcat
#define USE_STRLCPY_REPLACEMENTS
#define HAVE___FUNCTION__
#define HOST_LITTLE_ENDIAN

#undef mips

#endif  /*  CONFIG_H  */
