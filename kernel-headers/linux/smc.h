/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef _UAPI_LINUX_SMC_H_
#define _UAPI_LINUX_SMC_H_
enum {
  SMC_PNETID_UNSPEC,
  SMC_PNETID_NAME,
  SMC_PNETID_ETHNAME,
  SMC_PNETID_IBNAME,
  SMC_PNETID_IBPORT,
  __SMC_PNETID_MAX,
  SMC_PNETID_MAX = __SMC_PNETID_MAX - 1
};
enum {
  SMC_PNETID_GET = 1,
  SMC_PNETID_ADD,
  SMC_PNETID_DEL,
  SMC_PNETID_FLUSH
};
#define SMCR_GENL_FAMILY_NAME "SMC_PNETID"
#define SMCR_GENL_FAMILY_VERSION 1
#endif
