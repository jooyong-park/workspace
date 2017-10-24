1. Man and help info for IPMItool

ipmitool help
man ipmitool
2. Check the firmware version

ipmitool mc info
3. Reset the management controller

ipmitool mc reset [ warm | cold ]
4. Show field-replaceable-unit details

ipmitool fru print
5. Show sensor output

ipmitool sdr list
ipmitool sdr type list
ipmitool sdr type Temperature 
ipmitool sdr type Fan
ipmitool sdr type ‘Power Supply’
6. Chassis commands

ipmitool chassis status ipmitool chassis identify [] # turn on front panel identify light (default 15s)
ipmitool [chassis] power soft # initiate a soft-shutdown via acpi
ipmitool [chassis] power cycle # issue a hard power off, wait 1s, power on
ipmitool [chassis] power off # issue a hard power off
ipmitool [chassis] power on # issue a hard power on
ipmitool [chassis] power reset # issue a hard reset
7. Modify boot device for next reboot

ipmitool chassis bootdev pxe
ipmitool chassis bootdev cdrom
ipmitool chassis bootdev bios
8. Logging

ipmitool sel info
ipmitool sel list
ipmitool sel elist # extended list (see manpage)
ipmitool sel clear
9. For remote access, you need to setup user and network settings, either at boot time on the iLO or on the DRAC card itself, or from the OS via IPMI tool:

Display/reset password for default root user (userid ’2′)

ipmitool user list 1
ipmitool user set password 2
10. Display/configure lan settings

ipmitool lan print 1
ipmitool lan set 1 ipsrc [ static | dhcp ]
ipmitool lan set 1 ipaddr {YOUR DESIRED IP}
ipmitool lan set 1 netmask {YOUR NETMASK}
ipmitool lan set 1 defgw ipaddr 10.0.1.1
After configuring the lan settings you should be able to connect remotely using the ‘lan’ interface of IPMItool.

The following is an example:

[root@anm ~]# ipmitool -I lan -U root -H {YOUR DESIRED IP} chassis status
11. Hanging BMC

ipmitool bmc reset cold
12. Change system state

ipmitool -H <ip> -U <user> chassis power <status|on|off|cycle|reset>
13. Get debug info

ipmitool lan print
ipmitool -H <ip> -U <user> shell # get ipmitool shell, type 'help'
ipmitool -H <ip> -U <user> sel list # Show system event log
ipmitool -H <ip> -U <user> sdr # List sensor data
14. Get SOL console

modprobe lanplus # If not yet loaded
ipmitool -H <IP> -U <user> -I lanplus sol activate
