baudrate=115200 bootargs=console=ttyS4,115200n8 root=/dev/ram rw bootcmd=fdt addr 20080000; if fdt get value ramdisk_conf /configurations/conf@1 ramdisk; then i bootdelay=2 ethact=FTGMAC100#0 spi_dma=yes stderr=serial stdin=serial stdout=serial verify=yes

baudrate=115200 bootargs=console=ttyS0,115200n8 ramdisk_size=16384 root=/dev/ram rw init=/linuxrc mem=80M bootcmd=bootm 20080000 20300000 bootdelay=2 bootfile=all.bin eth1addr=00:C0:A8:12:34:57 ethact=FTGMAC100#0 ethaddr=00:C0:A8:12:34:56 gatewayip=192.168.0.1 ipaddr=192.168.0.45 netmask=255.255.255.0 serverip=192.168.0.81 spi_dma=yes stderr=serial stdin=serial stdout=serial update=tftp 80800000 ast2500.scr; so 80800000 verify=no

curl -c cjar -k -X POST -H "Content-Type: application/json" \\ -d '{"data": [ "root", "0penBmc" ] }' \\ https://192.168.52.29/login

```
curl -c cjar -b cjar -k -H "Content-Type: application/json" -X POST
https://<ip>/login -d "{\"data\": [ \"root\", \"0penBmc\" ] }"
```

curl -c cjar -b cjar -k https://192.168.52.29/org/openbmc/sensors/temperature/ambient
