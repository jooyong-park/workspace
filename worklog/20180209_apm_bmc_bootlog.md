```
U-Boot 2013.07 (Feb 18 2016 - 15:50:52)

I2C:   ready
DRAM:  240 MiB
Flash: Found SPI Chip Micron N25Q256A
32 MiB
MMC:   ast_sd: 0, ast_sd: 1
Net:   ast_eth0, ast_eth1
DRAM ECC disabled
Hit any key to stop autoboot:  0
Un-Protected 1 sectors
Erasing Flash...
Erasing sector  4 ... ok.
Erased 1 sectors
Writing to Flash... done
Protected 1 sectors
Image to be booted is 1
conf @ /dev/mtdblock1 Address 20060000
conf @ /dev/mtdblock2 Address 200e0000
Found Root File System @ /dev/mtdblock3
Root File System is CRAMFS
root @ /dev/mtdblock3 Address 20160000
www @ /dev/mtdblock4 Address 211d0000
Un-Protect Flash Bank # 1
Booting from MODULE_PIMAGE ...
Bootargs = [root=/dev/mtdblock3 ro ip=none mem=240M console=ttyS4,115200 rootfstype=cramfs bigphysarea=6144 imagebooted=1]
## Booting kernel from Legacy Image at 40100000 ...
   Image Name:   Linux-3.14.17-ami
   Image Type:   ARM Linux Kernel Image (uncompressed)
   Data Size:    3482704 Bytes = 3.3 MiB
   Load Address: 40008000
   Entry Point:  40008000
   Loading Kernel Image ... OK

Starting kernel ...

Uncompressing Linux... done, booting the kernel.
[    0.000000] Booting Linux on physical CPU 0x0
[    0.000000] Linux version 3.14.17-ami (AMI@localhost) (gcc version 4.6.1 (Sourcery CodeBench Lite 2011.09-70) ) #1 Thu Feb 18 15:50:01 IST 2016
[    0.000000] CPU: ARM926EJ-S [41069265] revision 5 (ARMv5TEJ), cr=00053177
[    0.000000] CPU: VIVT data cache, VIVT instruction cache
[    0.000000] Machine: AST2400EVB
[    0.000000] Memory policy: Data cache writeback
[    0.000000] Built 1 zonelists in Zone order, mobility grouping on.  Total pages: 60960
[    0.000000] Kernel command line: root=/dev/mtdblock3 ro ip=none mem=240M console=ttyS4,115200 rootfstype=cramfs bigphysarea=6144 imagebooted=1
[    0.000000] PID hash table entries: 1024 (order: 0, 4096 bytes)
[    0.000000] Dentry cache hash table entries: 32768 (order: 5, 131072 bytes)
[    0.000000] Inode-cache hash table entries: 16384 (order: 4, 65536 bytes)
[    0.000000] Memory: 213060K/245760K available (3558K kernel code, 196K rwdata, 1108K rodata, 929K init, 124K bss, 32700K reserved)
[    0.000000] Virtual kernel memory layout:
[    0.000000]     vector  : 0xffff0000 - 0xffff1000   (   4 kB)
[    0.000000]     fixmap  : 0xfff00000 - 0xfffe0000   ( 896 kB)
[    0.000000]     vmalloc : 0xcf800000 - 0xff000000   ( 760 MB)
[    0.000000]     lowmem  : 0xc0000000 - 0xcf000000   ( 240 MB)
[    0.000000]     modules : 0xbf000000 - 0xc0000000   (  16 MB)
[    0.000000]       .text : 0xc0008000 - 0xc0496e54   (4668 kB)
[    0.000000]       .init : 0xc0497000 - 0xc057f62c   ( 930 kB)
[    0.000000]       .data : 0xc0580000 - 0xc05b1240   ( 197 kB)
[    0.000000]        .bss : 0xc05b1240 - 0xc05d0370   ( 125 kB)
[    0.000000] SLUB: HWalign=32, Order=0-3, MinObjects=0, CPUs=1, Nodes=1
[    0.000000] NR_IRQS:51
[    0.000000] AST Interrupt Controller Enabled
[    0.000000] AST Timer Enabled
[    0.000000] sched_clock: 32 bits at 100 Hz, resolution 10000000ns, wraps every 21474836480000000ns
[    0.000000] Console: colour dummy device 80x30
[    0.120000] console [ttyS4] enabled
[    0.120000] Calibrating delay loop... 190.87 BogoMIPS (lpj=954368)
[    0.210000] pid_max: default: 32768 minimum: 301
[    0.210000] Mount-cache hash table entries: 1024 (order: 0, 4096 bytes)
[    0.220000] Mountpoint-cache hash table entries: 1024 (order: 0, 4096 bytes)
[    0.230000] CPU: Testing write buffer coherency: ok
[    0.230000] Setting up static identity map for 0x4037fc20 - 0x4037fc5c
[    0.250000] NET: Registered protocol family 16
[    0.250000] DMA: preallocated 256 KiB pool for atomic coherent allocations
[    0.340000] bio: create slab <bio-0> at 0
[    0.420000] NET: Registered protocol family 2
[    0.430000] TCP established hash table entries: 2048 (order: 1, 8192 bytes)
[    0.440000] TCP bind hash table entries: 2048 (order: 1, 8192 bytes)
[    0.440000] TCP: Hash tables configured (established 2048 bind 2048)
[    0.450000] TCP: reno registered
[    0.450000] UDP hash table entries: 256 (order: 0, 4096 bytes)
[    0.460000] UDP-Lite hash table entries: 256 (order: 0, 4096 bytes)
[    0.470000] NET: Registered protocol family 1
[    0.470000] RPC: Registered named UNIX socket transport module.
[    0.480000] RPC: Registered udp transport module.
[    0.480000] RPC: Registered tcp transport module.
[    0.490000] RPC: Registered tcp NFSv4.1 backchannel transport module.
[    0.680000] futex hash table entries: 256 (order: -1, 3072 bytes)
[    0.730000] bigphysarea: Allocated 6144 pages at 0xcd60f000.
[    0.760000] squashfs: version 4.0 (2009/01/31) Phillip Lougher
[    0.770000] NFS: Registering the id_resolver key type
[    0.780000] Key type id_resolver registered
[    0.780000] Key type id_legacy registered
[    0.790000] jffs2: version 2.2. �© 2001-2006 Red Hat, Inc.
[    0.800000] msgmni has been set to 416
[    0.820000] alg: No test for stdrng (krng)
[    0.820000] io scheduler noop registered (default)
[    0.860000] Serial: 8250/16550 driver, 5 ports, IRQ sharing disabled
[    0.880000] serial8250: ttyS2 at MMIO 0x1e78e000 (irq = 33, base_baud = 1500000) is a 16550A
[    0.900000] serial8250: ttyS3 at MMIO 0x1e78f000 (irq = 34, base_baud = 1500000) is a 16550A
[    0.920000] serial8250: ttyS4 at MMIO 0x1e784000 (irq = 10, base_baud = 1500000) is a 16550A
[    0.960000] brd: module loaded
[    0.990000] loop: module loaded
[    0.990000] Ractrends Flash mapping: 0x02000000 at 0x20000000
[    1.000000] Flash total banks (2)
[    1.000000] Probing for Flash at Bank # 0
[    1.010000] SPI: probing for micron devices ...
[    1.010000] Found SPI Chip Micron N25Q256A
[    1.020000] Probing for Flash at Bank # 1
[    1.020000] SPI: probing for micron devices ...
[    1.030000] SPI: probing for winbond devices ...
[    1.030000] SPI: probing for intel s33 devices ...
[    1.040000] SPI: probing for atmel devices ...
[    1.040000] SPI: probing for macronix devices ...
[    1.040000] SPI: probing for spansion devices ...
[    1.050000] SPI: probing for m25pxx devices ...
[    1.050000] Ractrends: No spi compatible flash device found
[    1.060000] *PartCount is 0
[    1.060000] MTD Partition 0 : fullpart @ 0x0 of Size 0x2000000
[    1.070000] MTD Partition 1 : conf @ 0x60000 of Size 0x70000
[    1.070000] MTD Partition 2 : conf @ 0xe0000 of Size 0x70000
[    1.080000] MTD Partition 3 : root @ 0x160000 of Size 0xd00000
[    1.090000] MTD Partition 4 : www @ 0x11d0000 of Size 0x240000
[    1.100000] Creating 5 MTD partitions on "Ractrends":
[    1.110000] 0x000000000000-0x000002000000 : "fullpart"
[    1.120000] 0x000000060000-0x0000000d0000 : "conf"
[    1.120000] 0x0000000e0000-0x000000150000 : "conf"
[    1.130000] 0x000000160000-0x000000e60000 : "root"
[    1.140000] 0x0000011d0000-0x000001410000 : "www"
[    1.150000] bonding: Ethernet Channel Bonding Driver: v3.7.1 (April 27, 2011)
[    1.200000] i2c /dev entries driver
[    1.210000] sdhci: Secure Digital Host Controller Interface driver
[    1.210000] sdhci: Copyright(c) Pierre Ossman
[    1.300000] mmc0: SDHCI controller on ast_sdhci1 [ast_sdhci1.0] using DMA
[    1.350000] mmc1: SDHCI controller on ast_sdhci2 [ast_sdhci2.0] using DMA
[    1.360000] AST SoC SD/MMC Driver Init Success
[    1.360000] Netfilter messages via NETLINK v0.30.
[    1.380000] nfnl_acct: registering with nfnetlink.
[    1.390000] xt_time: kernel timezone is -0000
[    1.390000] ip_tables: (C) 2000-2006 Netfilter Core Team
[    1.400000] arp_tables: (C) 2002 David S. Miller
[    1.410000] TCP: cubic registered
[    1.410000] NET: Registered protocol family 10
[    1.420000] ip6_tables: (C) 2000-2006 Netfilter Core Team
[    1.430000] sit: IPv6 over IPv4 tunneling driver
[    1.440000] NET: Registered protocol family 17
[    1.440000] 8021q: 802.1Q VLAN Support v1.8
[    1.450000] Key type dns_resolver registered
[    1.460000] Freeing unused kernel memory: 928K (c0497000 - c057f000)
Unpacking initramfs ...
Mounting /dev/mtdblock3 with option ro
INIT: version 2.88 booting
Sat Jan  1 00:00:00 UTC 2000
Starting PAM Helper Daemon: PAMHelperD .
kernel.panic = 5
net.ipv4.tcp_syncookies = 1
net.ipv4.tcp_max_syn_backlog = 2048
net.ipv4.tcp_synack_retries = 3
License App startedStarting Execution Daemon[   14.320000] random: nonblocking pool is initialized
.
Starting Process Manager.
Setting the network link mode as specified in the configuration file - /conf/phycfg.conf ...
[   19.190000] IPv6: ADDRCONF(NETDEV_UP): lo: link is not ready
[   19.190000] IPv6: ADDRCONF(NETDEV_UP): bond0: link is not ready
[   19.200000] IPv6: ADDRCONF(NETDEV_UP): eth0: link is not ready
[   19.200000] IPv6: ADDRCONF(NETDEV_UP): eth1: link is not ready
[   19.210000] IPv6: ADDRCONF(NETDEV_UP): sit0: link is not ready
[   19.220000] IPv6: ADDRCONF(NETDEV_UP): ip6tnl0: link is not ready
[   19.400000] Helper Module Driver Version 1.2
[   19.410000] Copyright (c) 2009-2015 American Megatrends Inc.
[   19.420000] NCSI Interface Driver Version 1.1
[   19.420000] Copyright (c) 2009-2015 American Megatrends Inc.
[   19.430000] NCSI(eth0): Detect NCSI Packages and Channels
[   19.520000] IPv6: ADDRCONF(NETDEV_UP): eth0: link is not ready
[   19.530000] IPv6: ADDRCONF(NETDEV_CHANGE): eth0: link becomes ready
[   23.730000] NCSI(eth1): Detect NCSI Packages and Channels
[   24.420000] NCSI(eth1): Error! Mac Address is 0. Cannot enable NCSI
Enabling User Specified NCSI Port ...
[   24.550000] IPv6: ADDRCONF(NETDEV_UP): eth0: link is not ready
[   24.590000] IPv6: ADDRCONF(NETDEV_UP): eth1: link is not ready
mount: mounting /dev/mmcblk0p1 on /mnt/sdmmc0p1 failed: No such file or directory
mount: mounting /dev/mmcblk0p2 on /mnt/sdmmc0p2 failed: No such file or directory
mount: mounting /dev/mmcblk0p3 on /mnt/sdmmc0p3 failed: No such file or directory
mount: mounting /dev/mmcblk0p4 on /mnt/sdmmc0p4 failed: No such file or directory
mount: mounting /dev/mmcblk0p5 on /mnt/sdmmc0p5 failed: No such file or directory
mount: mounting /dev/mmcblk0p6 on /mnt/sdmmc0p6 failed: No such file or directory
mount: mounting /dev/mmcblk0p7 on /mnt/sdmmc0p7 failed: No such file or directory
[   24.890000] bonding: bond0 is being deleted...
[   24.900000] bonding: bond0: released all slaves
Interface lo is going to go up
Interface lo is up
IPv6 entry is not present in interfaces file
Interface bond0 is going to go up
[   25.840000] bonding: unable to delete non-existent bond0
sh: write error:[   25.840000] bonding: bond0 is being created...
 No such device
[   25.950000] bonding: bond0: Setting MII monitoring interval to 100.
[   25.960000] bonding: bond0: Setting use_carrier to 0.
[   26.010000] bonding: bond0: Adding slave eth0.
[   26.020000] bonding: bond0: Warning: The first slave device specified does not support setting the MAC address.
[   26.030000] bonding: bond0: Setting fail_over_mac to active for active-backup mode.
[   26.230000] bonding: bond0: making interface eth0 the new active one.
[   26.230000] bonding: bond0: enslaving eth0 as an active interface with an up link.
[   26.260000] bonding: bond0: Adding slave eth1.
[   26.950000] IPv6: ADDRCONF(NETDEV_UP): eth1: link is not ready
[   27.670000] bonding: bond0: enslaving eth1 as a backup interface with a down link.
bond0 of type 1 created with interfaces eth0,eth1.
[   27.760000] 8021q: adding VLAN 0 to HW filter on device bond0
Calling udhcpc....
DHCP internal = 0
udhcpc (v1.21.1) started
Sending discover...
Sending discover...
Sending discover...
No lease, forking to background
Interface bond0 is up
NSUPDATE: Skip update as DNS IP is empty
Interface bond0 is going to go up
bond0 has been found in the bonding_masters.
 calling dhcp6c....
Interface bond0 is up
NSUPDATE: Skip update as DNS IP is empty
Starting IPMI Stack: IPMIMain [   43.240000] Reset Common Driver, (c) 2009-2015 American Megatrends Inc.
[   43.250000] KCS Common Driver, (c) 2009-2015 American Megatrends Inc.
[   43.280000] BT Common Driver, (c) 2009-2015 American Megatrends Inc...
[   43.290000] BT hw module loaded
[   43.320000] I2C0: Hardware routines registered
[   43.320000] Registered bus id: i2c-0
[   43.320000] I2C1: Hardware routines registered
[   43.330000] Registered bus id: i2c-1
[   43.350000] I2C2: Hardware routines registered
[   43.350000] Registered bus id: i2c-2
[   43.350000] I2C3: Hardware routines registered
[   43.360000] Registered bus id: i2c-3
[   43.400000] I2C4: Hardware routines registered
[   43.400000] Registered bus id: i2c-4
[   43.400000] I2C5: Hardware routines registered
[   43.410000] Registered bus id: i2c-5
[   43.440000] I2C6: Hardware routines registered
[   43.440000] Registered bus id: i2c-6
[   43.470000] I2C7: Hardware routines registered
[   43.470000] Registered bus id: i2c-7
[   43.480000] I2C8: Hardware routines registered
[   43.480000] Registered bus id: i2c-8
[   43.480000] I2C9: Hardware routines registered
[   43.490000] Registered bus id: i2c-9
[   43.520000] I2C10: Hardware routines registered
[   43.520000] Registered bus id: i2c-10
[   43.530000] I2C11: Hardware routines registered
[   43.530000] Registered bus id: i2c-11
[   43.530000] I2C12: Hardware routines registered
[   43.540000] Registered bus id: i2c-12
[   43.580000] I2C13: Hardware routines registered
[   43.580000] Registered bus id: i2c-13
[   43.600000] Snoop Common Driver, (c) 2009-2015 American Megatrends Inc.
[   43.610000] The GPIO Driver is loaded successfully.
[   43.630000] APSEED AST SoC GPIO HW Driver, (c) 2009-2015 American Megatrends Inc.
[   43.650000] ADC Driver Version 1.0
[   43.650000] Copyright (c) 2009-2015 American Megatrends Inc.
[   43.840000] AST2300/AST2400 ADC HW module loaded
[   43.840000] The Cipher coprocessor driver loaded successfully
[   43.870000] Initializing USB Devices
[   43.870000] USB Device Endpoint Driver
[   43.880000] Copyright 2006 American Megatrends Inc.
[   43.880000] USB Driver is Successfully Initialized
[   43.900000] Loading iUSB Module...
[   43.940000] Loading CDROM Device Module...
[   44.970000] [sched_delayed] sched: RT throttling activated
[   44.970000] Watchdog Common Driver, (c) 2010 American Megatrends Inc.
[   45.000000] PECI Common Driver, (c) 2009-2015 American Megatrends Inc.
[   45.030000] Network Interface Monitor Version 2.2.0
[   45.030000] Copyright (c) 2009-2015 American Megatrends Inc.
[   45.060000] AST UARTROUTE Driver Version 103.0
[   45.060000] Copyright (c) 2010 American Megatrends Inc.
[   45.090000] PWMTACH Common Driver, (c) 2009-2015 American Megatrends Inc.
[   47.440000] Reset ioctl unlocked
[1243 : 1243 INFO]No Files Found in /conf/BMC1/SEL.Records will be added later

[1243 : 1243 WARNING][BMCInit.c:208]Power Restore Policy Succeded with always on  

[   52.580000] Unable to get Firmware Information
POWER ON CHASSIS
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1270 CRITICAL][ChassisTimer.c:215]Chassis interrupts handling failed

[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1243 CRITICAL][IPMI_Main.c:535] Can not open /tmp/threadrestart
Environment variable recoverysuccess not found!
.
Sun Jan  1 00:00:00 EST 2012
Running ntpdate to synchronize clock :
Trying NTP Server pool.ntp.org :[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
Error resolving pool.ntp.org: Name or service not known (-2)
Failure
Failure
Trying NTP Server time.nist.gov :Error resolving time.nist.gov: Name or service not known (-2)
Failure
Failure
starting iptables...
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
Restoring normal configuration..
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
/conf/iptables.conf Success
starting ip6tables...
Success.
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
Starting UART Mirror Log application[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
.
[1344 : 1344 INFO]INFO: UART Logging from device: /dev/ttyS3 into File: /var/sollog/SOLHostCapture.log

Starting OpenSLP server: Stopping the UART Log Rotating Service...
[1344 : 1355 INFO]Archive Thread: Starting the thread to archive the Serial data from Rolling Buffers upon request

[1344 : 1354 INFO]Send Thread: Starting the thread to mirror data from /dev/ttyS3 to (null)

killall: uartlogrotate.sh: no process killed
.
slpd.
Setting up watches.  Beware: since -r was given, this may take a while!
Watches established.
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
INIT: Entering runlevel: 3api.c:
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
Starting NTP server: ntpd[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
.
Starting enhanced syslogd: rsyslogd[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
.
Starting DHCP monitor.
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
Starting OpenBSD Secure Shell server: sshd[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
.
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
sh: : unknown operand
sh: 0: unknown operand
[tftp] is enabled.
/etc/rc3.d/S16tftpd: line 100: arithmetic syntax error
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
Starting system message bus: dbus[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
Unknown group "netdev" in message bus configuration file
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
.
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
Starting SSL tunnels: stunnel[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
Clients allowed=500
stunnel 4.53 on arm-unknown-linux-gnueabi platform
Compiled/running with OpenSSL 1.0.1e 11 Feb 2013
Threading:PTHREAD SSL:+ENGINE+OCSP Auth:LIBWRAP Sockets:POLL+IPv6
Reading configuration from file /etc/stunnel/stunnel.conf
Compression not enabled
PRNG seeded successfully
Initializing inetd mode configuration
Insecure file permissions on /usr/local/www/certs/privkey.pem
Certificate: /usr/local/www/certs/server.pem
Certificate loaded
Key file: /usr/local/www/certs/privkey.pem
Private key loaded
Could not load DH parameters from /usr/local/www/certs/server.pem
Using hardcoded DH parameters
DH initialized with 2048-bit key
ECDH initialized with curve prime256v1
SSL options set: 0x00000004
Inetd mode must have 'connect' or 'exec' options
str_stats: 10 block(s), 191 data byte(s), 420 control byte(s)
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[Failed: /etc/stunnel/stunnel.conf]. Check if pid= is specified in the file
Starting VM Application: vmapp
[   70.850000] Loading Floppy Device Module...
[   71.900000] Loading Hdisk Device Module...
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
0
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
0
0
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
Stopping CD Redirection Server: cdserver.
Stopping FD Redirection Server: fdserver[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
.
Stopping HD Redirection Server: hdserver.
[   76.310000] dev 0 does not connect to host
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[   77.320000] dev 1 does not connect to host
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[   78.320000] dev 2 does not connect to host
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
Starting CD Redirection Server: cdserver[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
Starting FD Redirection Server: fdserverStarting HD Redirection Server: hdserver[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
Starting SD Server[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1

Number of Virtual CD Devices = 4
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1

Number of Virtual FD Devices = 4
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1

Number of Virtual HD Devices = 4
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
SD media PartitionNum = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
Stopping Local Media Server[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
.
SD card Sectors are 0 or SD card not found
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
Starting CD Redirection Server: cdserver[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
Starting FD Redirection Server: fdserverStarting HD Redirection Server: hdserverStarting SD Server[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
SD media PartitionNum = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
Stopping Local Media Server.
SD card Sectors are 0 or SD card not found
Starting Video Redirection Server :adviserd[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
.
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
Starting Local Media Server[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[   97.260000] Loading HID Device Module...
[   97.260000] UsbConfigureLS(): USB Device 3 is running in Low Speed
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[   98.310000] AST Video Capture Driver, (c) 2009-2015 American Megatrends Inc.
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
INFO: LMedia is not enabled ... exiting
.
Starting Remote Media Server[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1

INFO: Remote Media is not enabled ... exiting
.
Starting upnp discovery: upnp[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
No Useable external INET Interface Available
.
Starting Firmware Upgrade Utility: flasher.
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
MegaRAC Firmware Upgrade Utility
Copyright (c) 2009-2015 American Megatrends Inc.
FlashStart      = 0x20000000
FlashSize       = 0x2000000
UsedFlashStart  = 0x20000000
UsedFlashSize   = 0x2000000
EnvStart        = 0x20040000
EnvSize         = 0x10000
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
Starting periodic command scheduler: cron.
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
Lighttpd configurations exists
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
WEB is enabled and port numbers are NON-SSL:0x50 SSL:0x1bb
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
No Useable external INET Interface Available
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
2012-01-01 00:00:45: (log.c.164) server started
Starting lighttpd
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
Starting Fail Safe Services for /bkupconf
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
Starting Timeout Daemon Utility: timeoutd.
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
Starting Boot Complete.
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1

AMI112233445566 login: [1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
No Useable external INET Interface Available
Starting to Read Current PostCode buffer...
No Post Codes ...
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
Setting up watches.  Beware: since -r was given, this may take a while!
Watches established.
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
sysa[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
d[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
m[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
No Useable external INET Interface Available
in
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
Password: [1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1

[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1640 : 1640 INFO]SERIAL Login from IP:127.0.0.1 user:sysadmin

[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
~ # [1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
No Useable external INET Interface Available
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1                                                           
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1                                                      
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1                                                      
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1                                                      
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1                                                           
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 6, sensor name = SOC_Fan, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 4, sensor name = Chassis_Fan2, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 5, sensor name = Chassis_Fan3, error = 1
[1243 : 1263 WARNING][hal_api.c:295]hal_api.c : sensor number = 3, sensor name = Chassis_Fan1, error = 1

```
