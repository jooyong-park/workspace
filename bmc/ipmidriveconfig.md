6.6.3 Configuring the Open IPMI Driver On Linux systems, the OpenIPMI driver is the supported driver for Oracle Clusterware deployments with IPMI. You can install and configure the driver dynamically by manually loading the required modules.

Contact your Linux distribution vendor for information about how to configure IPMI for your distribution. Configure the Open IPMI driver manually on Oracle Linux as follows: Log in as root. Run the following commands:

/sbin/modprobe ipmi_msghandler
==============================

/sbin/modprobe ipmi_si
======================

/sbin/modprobe ipmi_devintf
===========================

(Optional) Run the command /sbin/lsmod |grep ipmi to confirm that the IPMI modules are loaded. For example:

/sbin/lsmod | grep ipmi
=======================

ipmi_devintf 12617 0 ipmi_si 33377 0 ipmi_msghandler 33701 2 ipmi_devintf,ipmi_si You can install the modules whether or not a BMC is present.

Open the /etc/rc.local file using a text editor, navigate to the end of the file, and enter lines similar to the following, to run the modprobe commands in step 2 automatically on system restart:

START IPMI ON SYSTEM RESTART
============================

/sbin/modprobe ipmi_msghandler /sbin/modprobe ipmi_si /sbin/modprobe ipmi_devintf On SUSE Linux Enterprise Server systems, add the modprobe commands above to /etc/init.d/boot.local.

Check to ensure that the Linux system is recognizing the IPMI device, using the following command: ls -l /dev/ipmi0 If the IPMI device is dynamically loaded, then the output must be similar to the following:

ls -l /dev/ipmi0 crw------- 1 root root 253, 0 Sep 23 06:29 /dev/ipmi0
======================================================================

If you do see the device file output, then the IPMI driver is configured, and you can ignore the following step.

If you do not see the device file output, then the udevd daemon is not set up to create device files automatically. Proceed to the next step.

Determine the device major number for the IPMI device using the command grep ipmi /proc/devices. For example:

grep ipmi /proc/devices 253 ipmidev
===================================

The device major number is 253. Run the mknod command to create a directory entry and i-node for the IPMI device, using the device major number. For example:

mknod /dev/ipmi0 c 253 0x0
==========================

The permissions on /dev/ipmi0 in the example allow the device to be accessible only by root. The device should only be accessed by root, to prevent a system vulnerability.
