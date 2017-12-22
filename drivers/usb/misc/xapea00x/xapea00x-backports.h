// SPDX-License-Identifier: GPL-2.0+
/*
 *  Driver for the XAP-EA-00x series of the Xaptum Edge Access Card, a
 *  TPM 2.0-based hardware module for authenticating IoT devices and
 *  gateways.
 *
 *  Copyright (c) 2017 Xaptum, Inc.
 */

#ifndef _XAPEA00X_BACKPORTS_H
#define _XAPEA00X_BACKPORTS_H

#include <linux/usb.h>
#include <linux/version.h>

#if KERNEL_VERSION(4, 12, 0) >= LINUX_VERSION_CODE
int __must_check
usb_find_common_endpoints(struct usb_host_interface *alt,
			  struct usb_endpoint_descriptor **bulk_in,
			  struct usb_endpoint_descriptor **bulk_out,
			  struct usb_endpoint_descriptor **int_in,
			  struct usb_endpoint_descriptor **int_out);
#endif

#endif /* _XAPEA00X_BACKPORTS_H */
