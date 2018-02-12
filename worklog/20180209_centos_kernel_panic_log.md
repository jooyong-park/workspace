```
EFI stub: Booting Linux Kernel...
EFI stub: Using DTB from configuration table
EFI stub: Exiting boot services and installing virtual address map...
L3C: 8MB
[    0.000000] Booting Linux on physical CPU 0x0
[    0.000000] Linux version 4.11.0-22.el7.centos.2+falinux.1.aarch64 (root@localhost.localdomain) (gcc version 4.8.5 20150623 (Red Hat 4.8.5-16) (GCC) ) #1 SMP Tue Jan 30 12:16:13 KST 2018
[    0.000000] Boot CPU: AArch64 Processor [501f0000]
[    0.000000] efi: Getting EFI parameters from FDT:
[    0.000000] efi: EFI v2.40 by X-Gene Falinux Board EFI Nov 15 2017 14:40:08
[    0.000000] efi:  ACPI=0x43fa6e0000  ACPI 2.0=0x43fa6e0014  SMBIOS 3.0=0x43fa9cb000  ESRT=0x43ff011918
[    0.000000] esrt: Reserving ESRT space from 0x00000043ff011918 to 0x00000043ff011978.
[    0.000000] crashkernel reserved: 0x00000040dfe00000 - 0x00000040ffe00000 (512 MB)
[    0.000000] ACPI: Early table checksum verification disabled
[    0.000000] ACPI: RSDP 0x00000043FA6E0014 000024 (v02 APM   )
[    0.000000] ACPI: XSDT 0x00000043FA6D00E8 00008C (v01 APM    XGENE    00000003      01000013)
[    0.000000] ACPI: FACP 0x00000043FA6A0000 000114 (v06 APM    XGENE    00000003 INTL 20160527)
[    0.000000] ACPI: DSDT 0x00000043FA6B0000 004507 (v05 APM    XGENE    00000003 INTL 20160527)
[    0.000000] ACPI: DBG2 0x00000043FA6C0000 0000AA (v00 APMC0D XGENEDBG 00000003 INTL 20160527)
[    0.000000] ACPI: GTDT 0x00000043FA680000 000130 (v02 APM    XGENE    00000003 INTL 20160527)
[    0.000000] ACPI: IORT 0x00000043FA670000 0001BC (v00 APM    XGENE    00000000 INTL 20160527)
[    0.000000] ACPI: MCFG 0x00000043FA660000 00004C (v01 APM    XGENE    00000003 INTL 20160527)
[    0.000000] ACPI: SPCR 0x00000043FA650000 000050 (v02 APMC0D XGENESPC 00000000 INTL 20160527)
[    0.000000] ACPI: SSDT 0x00000043FA640000 00002D (v02 APM    XGENE    00000003 INTL 20160527)
[    0.000000] ACPI: BERT 0x00000043FA630000 000030 (v01 APM    XGENE    00000003 INTL 20160527)
[    0.000000] ACPI: HEST 0x00000043FA620000 0002A8 (v01 APM    XGENE    00000003 INTL 20160527)
[    0.000000] ACPI: APIC 0x00000043FA610000 000444 (v03 APM    XGENE    00000004      01000013)
[    0.000000] ACPI: SSDT 0x00000043FA600000 000063 (v02 REDHAT MACADDRS 00000001      01000013)
[    0.000000] ACPI: SSDT 0x00000043FA5F0000 000032 (v02 REDHAT UARTCLKS 00000001      01000013)
[    0.000000] ACPI: PCCT 0x00000043FA5E0000 000300 (v01 APM    XGENE    00000003      01000013)
[    0.000000] ACPI: SPCR: console: uart,mmio32,0x10600000
[    0.000000] psci: is not implemented in ACPI.
[    0.000000] percpu: Embedded 3 pages/cpu @ffff8003ffdd0000 s124440 r8192 d63976 u196608
[    0.000000] Detected PIPT I-cache on CPU0
[    0.000000] Built 1 zonelists in Zone order, mobility grouping on.  Total pages: 261888
[    0.000000] Kernel command line: BOOT_IMAGE=/vmlinuz-4.11.0-22.el7.centos.2+falinux.1.aarch64 root=UUID=a7354648-6797-49f5-897a-ccc9777d7c72 ro crashkernel=auto LANG=en_US.UTF-8
[    0.000000] PID hash table entries: 4096 (order: -1, 32768 bytes)
[    0.000000] Dentry cache hash table entries: 2097152 (order: 8, 16777216 bytes)
[    0.000000] Inode-cache hash table entries: 1048576 (order: 7, 8388608 bytes)
[    0.000000] software IO TLB [mem 0x40dbe00000-0x40dfe00000] (64MB) mapped at [ffff8000dbe00000-ffff8000dfdfffff]
[    0.000000] Memory: 16098816K/16777216K available (7484K kernel code, 1288K rwdata, 3200K rodata, 1152K init, 7605K bss, 678400K reserved, 0K cma-reserved)
[    0.000000] Virtual kernel memory layout:
[    0.000000]     modules : 0xffff000000000000 - 0xffff000008000000   (   128 MB)
[    0.000000]     vmalloc : 0xffff000008000000 - 0xffff7bdfffff0000   (126847 GB)
[    0.000000]       .text : 0xffff000008080000 - 0xffff0000087d0000   (  7488 KB)
[    0.000000]     .rodata : 0xffff0000087d0000 - 0xffff000008b00000   (  3264 KB)
[    0.000000]       .init : 0xffff000008b00000 - 0xffff000008c20000   (  1152 KB)
[    0.000000]       .data : 0xffff000008c20000 - 0xffff000008d62200   (  1289 KB)
[    0.000000]        .bss : 0xffff000008d62200 - 0xffff0000094cf654   (  7606 KB)
[    0.000000]     fixed   : 0xffff7fdffe7d0000 - 0xffff7fdffec00000   (  4288 KB)
[    0.000000]     PCI I/O : 0xffff7fdffee00000 - 0xffff7fdfffe00000   (    16 MB)
[    0.000000]     vmemmap : 0xffff7fe000000000 - 0xffff800000000000   (   128 GB maximum)
[    0.000000]               0xffff7fe000000000 - 0xffff7fe001000000   (    16 MB actual)
[    0.000000]     memory  : 0xffff800000000000 - 0xffff800400000000   ( 16384 MB)
[    0.000000] SLUB: HWalign=64, Order=0-3, MinObjects=0, CPUs=8, Nodes=1
[    0.000000] Hierarchical RCU implementation.
[    0.000000]  Build-time adjustment of leaf fanout to 64.
[    0.000000]  RCU restricting CPUs from NR_CPUS=4096 to nr_cpu_ids=8.
[    0.000000] RCU: Adjusting geometry for rcu_fanout_leaf=64, nr_cpu_ids=8
[    0.000000] NR_IRQS:64 nr_irqs:64 0
[    0.000000] GIC: Using split EOI/Deactivate mode
[    0.000000] GICv2m: range[mem 0x79000000-0x79000fff], SPI[224:224]
[    0.000000] GICv2m: range[mem 0x79010000-0x79010fff], SPI[225:225]
[    0.000000] GICv2m: range[mem 0x79020000-0x79020fff], SPI[226:226]
[    0.000000] GICv2m: range[mem 0x79030000-0x79030fff], SPI[227:227]
[    0.000000] GICv2m: range[mem 0x79040000-0x79040fff], SPI[228:228]
[    0.000000] GICv2m: range[mem 0x79050000-0x79050fff], SPI[229:229]
[    0.000000] GICv2m: range[mem 0x79060000-0x79060fff], SPI[230:230]
[    0.000000] GICv2m: range[mem 0x79070000-0x79070fff], SPI[231:231]
[    0.000000] GICv2m: range[mem 0x79080000-0x79080fff], SPI[232:232]
[    0.000000] GICv2m: range[mem 0x79090000-0x79090fff], SPI[233:233]
[    0.000000] GICv2m: range[mem 0x790a0000-0x790a0fff], SPI[234:234]
[    0.000000] GICv2m: range[mem 0x790b0000-0x790b0fff], SPI[235:235]
[    0.000000] GICv2m: range[mem 0x790c0000-0x790c0fff], SPI[236:236]
[    0.000000] GICv2m: range[mem 0x790d0000-0x790d0fff], SPI[237:237]
[    0.000000] GICv2m: range[mem 0x790e0000-0x790e0fff], SPI[238:238]
[    0.000000] GICv2m: range[mem 0x790f0000-0x790f0fff], SPI[239:239]
[    0.000000] ACPI GTDT: found 1 memory-mapped timer block(s).
[    0.000000] arch_timer: [Firmware Bug]: CNTFRQ mismatch: frame @ 0x0000000010690000: (0x00000000), CPU: (0x02faf080)
[    0.000000] arch_timer: Disabling MMIO timers due to CNTFRQ mismatch
[    0.000000] arch_timer: Failed to initialize memory-mapped timer.
[    0.000000] arch_timer: cp15 timer(s) running at 50.00MHz (phys).
[    0.000000] clocksource: arch_sys_counter: mask: 0xffffffffffffff max_cycles: 0xb8812736b, max_idle_ns: 440795202655 ns
[    0.000001] sched_clock: 56 bits at 50MHz, resolution 20ns, wraps every 4398046511100ns
[    0.000046] Console: colour dummy device 80x25
[    0.000058] Calibrating delay loop (skipped), value calculated using timer frequency.. 100.00 BogoMIPS (lpj=500000)
[    0.000063] pid_max: default: 32768 minimum: 301
[    0.000081] ACPI: Core revision 20170119
[    0.002896] ACPI: 4 ACPI AML tables successfully acquired and loaded
[    0.002930] Security Framework initialized
[    0.002936] SELinux:  Initializing.
[    0.003000] Mount-cache hash table entries: 32768 (order: 2, 262144 bytes)
[    0.003004] Mountpoint-cache hash table entries: 32768 (order: 2, 262144 bytes)
[    0.003364] ftrace: allocating 26864 entries in 7 pages
[    0.062003] ASID allocator initialised with 65536 entries
[    0.062536] Remapping and enabling EFI services.
[    0.062557]   EFI remap 0x0000000010540000 => 0000000020000000
[    0.062564]   EFI remap 0x0000000010548000 => 0000000020018000
[    0.062571]   EFI remap 0x0000000010610000 => 0000000020020000
[    0.062577]   EFI remap 0x0000000017000000 => 0000000020030000
[    0.062583]   EFI remap 0x00000043fa580000 => 0000000020040000
[    0.062589]   EFI remap 0x00000043fa6f0000 => 0000000020060000
[    0.062595]   EFI remap 0x00000043fa700000 => 0000000020070000
[    0.062601]   EFI remap 0x00000043fa720000 => 0000000020090000
[    0.062607]   EFI remap 0x00000043fa780000 => 00000000200f0000
[    0.062615]   EFI remap 0x00000043fa790000 => 0000000020100000
[    0.062620]   EFI remap 0x00000043fa990000 => 0000000020300000
[    0.062626]   EFI remap 0x00000043fa9a0000 => 0000000020310000
[    0.062632]   EFI remap 0x00000043ff990000 => 0000000020330000
[    0.062638]   EFI remap 0x00000043ff9b0000 => 0000000020340000
[    0.062780] smp: Bringing up secondary CPUs ...
[    0.062939] Detected PIPT I-cache on CPU1
[    0.062963] CPU1: Booted secondary processor [501f0000]
[    0.063159] Detected PIPT I-cache on CPU2
[    0.063177] CPU2: Booted secondary processor [501f0000]
[    0.063373] Detected PIPT I-cache on CPU3
[    0.063386] CPU3: Booted secondary processor [501f0000]
[    0.063566] Detected PIPT I-cache on CPU4
[    0.063584] CPU4: Booted secondary processor [501f0000]
[    0.063768] Detected PIPT I-cache on CPU5
[    0.063781] CPU5: Booted secondary processor [501f0000]
[    0.063961] Detected PIPT I-cache on CPU6
[    0.063979] CPU6: Booted secondary processor [501f0000]
[    0.064163] Detected PIPT I-cache on CPU7
[    0.064176] CPU7: Booted secondary processor [501f0000]
[    0.064215] smp: Brought up 1 node, 8 CPUs
[    0.064230] SMP: Total of 8 processors activated.
[    0.064234] CPU features: detected feature: 32-bit EL0 Support
[    0.064238] CPU: All CPU(s) started at EL2
[    0.064993] devtmpfs: initialized
[    0.065241] SMBIOS 3.0.0 present.
[    0.065250] DMI: AppliedMicro X-Gene Falinux Board/X-Gene Falinux Board, BIOS 2.00.01 Nov 15 2017
[    0.065319] clocksource: jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 19112604462750000 ns
[    0.065326] futex hash table entries: 2048 (order: 2, 262144 bytes)
[    0.065438] pinctrl core: initialized pinctrl subsystem
[    0.065639] NET: Registered protocol family 16
[    0.065943] cpuidle: using governor menu
[    0.066055] Detected 8 PCC Subspaces
[    0.066102] Registering PCC driver as Mailbox controller
[    0.066134] vdso: 2 pages (1 code @ ffff0000087f0000, 1 data @ ffff000008c40000)
[    0.066138] hw-breakpoint: found 6 breakpoint and 4 watchpoint registers.
[    0.066250] DMA: preallocated 256 KiB pool for atomic allocations
[    0.066267] ACPI: bus type PCI registered
[    0.066270] acpiphp: ACPI Hot Plug PCI Controller Driver version: 0.5
[    0.066303] Serial: AMBA PL011 UART driver
[    0.068141] HugeTLB registered 512 MB page size, pre-allocated 0 pages
[    0.068826] ACPI: Added _OSI(Module Device)
[    0.068830] ACPI: Added _OSI(Processor Device)
[    0.068833] ACPI: Added _OSI(3.0 _SCP Extensions)
[    0.068835] ACPI: Added _OSI(Processor Aggregator Device)
[    0.068884] ACPI: Executed 1 blocks of module-level executable AML code
[    0.076023] ACPI: Interpreter enabled
[    0.076026] ACPI: Using GIC for interrupt routing
[    0.076045] ACPI: MCFG table detected, 2 entries
[    0.076472] HEST: Table parsing has been initialized.
[    0.078493] ACPI: Power Resource [SCVR] (on)
[    0.108205] ACPI: PCI Root Bridge [PCI0] (domain 0000 [bus 00-ff])
[    0.108223] acpi PNP0A08:00: _OSC: OS supports [ExtendedConfig ASPM ClockPM Segments MSI]
[    0.108475] acpi PNP0A08:00: _OSC: OS now controls [PCIeHotplug PME AER PCIeCapability]
[    0.108492] acpi PNP0A08:00: MCFG quirk: ECAM at [mem 0xc0d0000000-0xc0dfffffff] for [bus 00-ff] with xgene_v2_pcie_ecam_ops
[    0.109416] acpi PNP0A08:00: [Firmware Bug]: ECAM area [mem 0xc0d0000000-0xc0dfffffff] not reserved in ACPI namespace
[    0.109461] acpi PNP0A08:00: ECAM at [mem 0xc0d0000000-0xc0dfffffff] for [bus 00-ff]
[    0.109487] Remapped I/O 0x000000c010000000 to [io  0x0000-0xffff window]
[    0.109594] PCI host bridge to bus 0000:00
[    0.109600] pci_bus 0000:00: root bus resource [io  0x0000-0xffff window] (bus address [0x10000000-0x1000ffff])
[    0.109604] pci_bus 0000:00: root bus resource [mem 0xc040000000-0xc07fffffff window] (bus address [0x40000000-0x7fffffff])
[    0.109607] pci_bus 0000:00: root bus resource [mem 0xe000000000-0xffffffffff window]
[    0.109610] pci_bus 0000:00: root bus resource [bus 00-ff]
[    0.109840] pci 0000:00:00.0: PCI bridge to [bus 01]
[    0.109905] ACPI: PCI Root Bridge [PCI1] (domain 0001 [bus 00-ff])
[    0.109920] acpi PNP0A08:01: _OSC: OS supports [ExtendedConfig ASPM ClockPM Segments MSI]
[    0.110163] acpi PNP0A08:01: _OSC: OS now controls [PCIeHotplug PME AER PCIeCapability]
[    0.110174] acpi PNP0A08:01: MCFG quirk: ECAM at [mem 0xa0d0000000-0xa0dfffffff] for [bus 00-ff] with xgene_v2_pcie_ecam_ops
[    0.110838] acpi PNP0A08:01: [Firmware Bug]: ECAM area [mem 0xa0d0000000-0xa0dfffffff] not reserved in ACPI namespace
[    0.110878] acpi PNP0A08:01: ECAM at [mem 0xa0d0000000-0xa0dfffffff] for [bus 00-ff]
[    0.110902] Remapped I/O 0x000000a010000000 to [io  0x10000-0x1ffff window]
[    0.111005] PCI host bridge to bus 0001:00
[    0.111010] pci_bus 0001:00: root bus resource [io  0x10000-0x1ffff window] (bus address [0x10000000-0x1000ffff])
[    0.111014] pci_bus 0001:00: root bus resource [mem 0xa040000000-0xa07fffffff window] (bus address [0x40000000-0x7fffffff])
[    0.111017] pci_bus 0001:00: root bus resource [mem 0xb000000000-0xbfffffffff window]
[    0.111020] pci_bus 0001:00: root bus resource [bus 00-ff]
[    0.111247] pci 0001:00:00.0: PCI bridge to [bus 01]
[    0.112213] vgaarb: loaded
[    0.112321] SCSI subsystem initialized
[    0.112426] ACPI: bus type USB registered
[    0.112455] usbcore: registered new interface driver usbfs
[    0.112468] usbcore: registered new interface driver hub
[    0.112500] usbcore: registered new device driver usb
[    0.112595] Registered efivars operations
[    0.112905] NetLabel: Initializing
[    0.112908] NetLabel:  domain hash size = 128
[    0.112910] NetLabel:  protocols = UNLABELED CIPSOv4 CALIPSO
[    0.112935] NetLabel:  unlabeled traffic allowed by default
[    0.113037] clocksource: Switched to clocksource arch_sys_counter
[    0.130930] VFS: Disk quotas dquot_6.6.0
[    0.130978] VFS: Dquot-cache hash table entries: 8192 (order 0, 65536 bytes)
[    0.131165] pnp: PnP ACPI init
[    0.131674] pnp: PnP ACPI: found 0 devices
[    0.134048] NET: Registered protocol family 2
[    0.134249] TCP established hash table entries: 131072 (order: 4, 1048576 bytes)
[    0.134434] TCP bind hash table entries: 65536 (order: 4, 1048576 bytes)
[    0.134621] TCP: Hash tables configured (established 131072 bind 65536)
[    0.134678] UDP hash table entries: 8192 (order: 2, 262144 bytes)
[    0.134723] UDP-Lite hash table entries: 8192 (order: 2, 262144 bytes)
[    0.134841] NET: Registered protocol family 1
[    0.134989] Unpacking initramfs...
[    0.468522] Freeing initrd memory: 16768K
[    0.468885] hw perfevents: enabled with armv8_pmuv3_0 PMU driver, 7 counters available
[    0.468908] kvm [1]: 8-bit VMID
[    0.468911] kvm [1]: IDMAP page: 40009b8000
[    0.468913] kvm [1]: HYP VA range: 800000000000:ffffffffffff
[    0.468999] kvm [1]: Hyp mode initialized successfully
[    0.469016] kvm [1]: GICV region size/alignment is unsafe, using trapping (reduced performance)
[    0.469035] kvm [1]: vgic-v2@780cf000
[    0.469117] kvm [1]: vgic interrupt IRQ1
[    0.469124] kvm [1]: virtual timer IRQ3
[    0.494825] audit: initializing netlink subsys (disabled)
[    0.494901] audit: type=2000 audit(0.440:1): state=initialized audit_enabled=0 res=1
[    0.495069] Initialise system trusted keyrings
[    0.495133] workingset: timestamp_bits=46 max_order=18 bucket_order=0
[    0.496999] zbud: loaded
[    0.570176] NET: Registered protocol family 38
[    0.570183] Key type asymmetric registered
[    0.570187] Asymmetric key parser 'x509' registered
[    0.570212] Block layer SCSI generic (bsg) driver version 0.4 loaded (major 251)
[    0.570265] io scheduler noop registered
[    0.570268] io scheduler deadline registered (default)
[    0.570322] io scheduler cfq registered
[    0.570325] io scheduler mq-deadline registered
[    0.570468] atomic64_test: passed
[    0.570880] pcieport 0001:00:00.0: AER enabled with IRQ 92
[    0.570905] pcieport 0001:00:00.0: Signaling PME with IRQ 92
[    0.571135] input: Power Button as /devices/LNXSYSTM:00/PNP0C0C:00/input/input0
[    0.571141] ACPI: Power Button [PWRB]
[    0.571695] GHES: Failed to enable APEI firmware first mode.
[    0.571749] ACPI GTDT: found 1 SBSA generic Watchdog(s).
[    0.571894] Serial: 8250/16550 driver, 4 ports, IRQ sharing enabled
[    0.592500] APMC0D08:00: ttyS0 at MMIO 0x10600000 (irq = 57, base_baud = 3125000) is a U6_16550A
[    2.028729] console [ttyS0] enabled
[    2.052515] APMC0D08:01: ttyS1 at MMIO 0x10601000 (irq = 58, base_baud = 3125000) is a U6_16550A
[    2.061591] arm-smmu arm-smmu.0.auto: probing hardware configuration...
[    2.068181] arm-smmu arm-smmu.0.auto: SMMUv2 with:
[    2.072947] arm-smmu arm-smmu.0.auto:        stage 2 translation
[    2.078413] arm-smmu arm-smmu.0.auto:        coherent table walk
[    2.083873] arm-smmu arm-smmu.0.auto:        stream matching with 128 register groups
[    2.091145] arm-smmu arm-smmu.0.auto:        32 context banks (0 stage-2 only)
[    2.097817] arm-smmu arm-smmu.0.auto:        Supported page sizes: 0x60211000
[    2.104400] arm-smmu arm-smmu.0.auto:        Stage-2: 48-bit IPA -> 48-bit PA
[    2.111684] rdac: device handler registered
[    2.115895] hp_sw: device handler registered
[    2.120141] emc: device handler registered
[    2.124295] alua: device handler registered
[    2.128616] libphy: Fixed MDIO Bus: probed
[    2.132784] ehci_hcd: USB 2.0 'Enhanced' Host Controller (EHCI) Driver
[    2.139289] ehci-pci: EHCI PCI platform driver
[    2.143730] ohci_hcd: USB 1.1 'Open' Host Controller (OHCI) Driver
[    2.149881] ohci-pci: OHCI PCI platform driver
[    2.154314] uhci_hcd: USB Universal Host Controller Interface driver
[    2.160726] xhci-hcd 808622B7:00: xHCI Host Controller
[    2.165909] xhci-hcd 808622B7:00: new USB bus registered, assigned bus number 1
[    2.173275] xhci-hcd 808622B7:00: hcc params 0x0220f66d hci version 0x100 quirks 0x00010010
[    2.181595] xhci-hcd 808622B7:00: irq 61, io mem 0x19000000
[    2.187245] usb usb1: New USB device found, idVendor=1d6b, idProduct=0002
[    2.194009] usb usb1: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    2.201194] usb usb1: Product: xHCI Host Controller
[    2.206052] usb usb1: Manufacturer: Linux 4.11.0-22.el7.centos.2+falinux.1.aarch64 xhci-hcd
[    2.214364] usb usb1: SerialNumber: 808622B7:00
[    2.219036] hub 1-0:1.0: USB hub found
[    2.222782] hub 1-0:1.0: 1 port detected
[    2.226795] xhci-hcd 808622B7:00: xHCI Host Controller
[    2.231957] xhci-hcd 808622B7:00: new USB bus registered, assigned bus number 2
[    2.239281] usb usb2: We don't know the algorithms for LPM for this host, disabling LPM.
[    2.247397] usb usb2: New USB device found, idVendor=1d6b, idProduct=0003
[    2.254156] usb usb2: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    2.261341] usb usb2: Product: xHCI Host Controller
[    2.266197] usb usb2: Manufacturer: Linux 4.11.0-22.el7.centos.2+falinux.1.aarch64 xhci-hcd
[    2.274508] usb usb2: SerialNumber: 808622B7:00
[    2.279178] hub 2-0:1.0: USB hub found
[    2.282928] hub 2-0:1.0: 1 port detected
[    2.286992] usbcore: registered new interface driver usbserial
[    2.292803] usbcore: registered new interface driver usbserial_generic
[    2.299319] usbserial: USB Serial support registered for generic
[    2.305373] mousedev: PS/2 mouse device common for all mice
[    2.311072] rtc-efi rtc-efi: rtc core: registered rtc-efi as rtc0
[    2.317383] EFI Variables Facility v0.08 2004-May-17
[    2.322488] hidraw: raw HID events driver (C) Jiri Kosina
[    2.327946] usbcore: registered new interface driver usbhid
[    2.333495] usbhid: USB HID core driver
[    2.337346] xgene-pmu APMC0D5C:00: X-Gene PMU version 2
[    2.342631] xgene-pmu APMC0D5C:00: l3c0 PMU registered
[    2.347800] xgene-pmu APMC0D5C:00: iob0 PMU registered
[    2.352951] xgene-pmu APMC0D5C:00: mcb0 PMU registered
[    2.358138] xgene-pmu APMC0D5C:00: mc0 PMU registered
[    2.363266] drop_monitor: Initializing network drop monitor service
[    2.369574] Initializing XFRM netlink socket
[    2.373968] NET: Registered protocol family 10
[    2.378686] Segment Routing with IPv6
[    2.382347] NET: Registered protocol family 17
[    2.386992] registered taskstats version 1
[    2.391071] Loading compiled-in X.509 certificates
[    2.398615] alg: No test for pkcs1pad(rsa,sha1) (pkcs1pad(rsa-generic,sha1))
[    2.406462] Loaded X.509 cert 'CentOS Linux kernel signing key: 92156362bb24d1b3ac6de39c5e17d8bd905dfc81'
[    2.416024] zswap: loaded using pool lzo/zbud
[    2.441725] Key type big_key registered
[    2.445601] BERT: [Firmware Bug]: table invalid.
[    2.450273] iommu: Adding device 0000:00:00.0 to group 0, default domain type 4
[    2.457658] pcieport 0000:00:00.0: Signaling PME with IRQ 17
[    2.463349] pcieport 0000:00:00.0: AER enabled with IRQ 17
[    2.468885] rtc-efi rtc-efi: setting system clock to 2015-06-23 17:09:30 UTC (1435079370)
[    2.583042] usb 1-1: new full-speed USB device number 2 using xhci-hcd
[    2.753567] usb 1-1: New USB device found, idVendor=0451, idProduct=2036
[    2.760234] usb 1-1: New USB device strings: Mfr=0, Product=1, SerialNumber=0
[    2.767338] usb 1-1: Product: General Purpose USB Hub
[    2.879725] hub 1-1:1.0: USB hub found
[    2.883558] hub 1-1:1.0: 3 ports detected
[   12.149017] Freeing unused kernel memory: 1152K
[   12.158677] random: systemd: uninitialized urandom read (16 bytes read)
[   12.165857] random: systemd: uninitialized urandom read (16 bytes read)
[   12.172462] random: systemd: uninitialized urandom read (16 bytes read)
[   12.181102] systemd[1]: systemd 219 running in system mode. (+PAM +AUDIT +SELINUX +IMA -APPARMOR +SMACK +SYSVINIT +UTMP +LIBCRYPTSETUP +GCRYPT +GNUTLS +ACL +XZ -LZ4 -SECCOMP +BLKID +ELFUTILS +KMOD +IDN)
[   12.199336] systemd[1]: Detected architecture arm64.
[   12.204291] systemd[1]: Running in initial RAM disk.

Welcome to CentOS Linux 7 (AltArch) dracut-033-463.el7 (Initramfs)!

[   12.243131] systemd[1]: Set hostname to <localhost.localdomain>.
[   12.383484] random: systemd: uninitialized urandom read (16 bytes read)
[   12.390104] random: systemd: uninitialized urandom read (16 bytes read)
[   12.396749] random: systemd: uninitialized urandom read (16 bytes read)
[   12.403431] random: systemd: uninitialized urandom read (16 bytes read)
[   12.411083] random: systemd: uninitialized urandom read (16 bytes read)
[   12.417927] random: systemd: uninitialized urandom read (16 bytes read)
[   12.424882] random: systemd: uninitialized urandom read (16 bytes read)
[  OK  ] Reached target Timers.
[   12.463082] systemd[1]: Reached target Timers.
[   12.467520] systemd[1]: Starting Timers.
[  OK  ] Created slice Root Slice.
[   12.513068] systemd[1]: Created slice Root Slice.
[   12.517766] systemd[1]: Starting Root Slice.
[  OK  ] Reached target Local File Systems.
[   12.553066] systemd[1]: Reached target Local File Systems.
[   12.558538] systemd[1]: Starting Local File Systems.
[  OK  ] Listening on udev Kernel Socket.
[  OK  ] Reached target Swap.
[  OK  ] Listening on udev Control Socket.
[  OK  ] Created slice System Slice.
[  OK  ] Reached target Slices.
[  OK  ] Listening on Journal Socket.
[  OK  ] Reached target Sockets.
         Starting Create list of required st... nodes for the current kernel...
         Starting Journal Service...
         Starting dracut cmdline hook...
         Starting Apply Kernel Variables...
         Starting Setup Virtual Console...
[  OK  ] Started Create list of required sta...ce nodes for the current kernel.
[  OK  ] Started Apply Kernel Variables.
[  OK  ] Started Setup Virtual Console.
[  OK  ] Started dracut cmdline hook.
[  OK  ] Started Journal Service.
         Starting dracut pre-udev hook...
         Starting Create Static Device Nodes in /dev...
[  OK  ] Started dracut pre-udev hook.
[  OK  ] Started Create Static Device Nodes in /dev.
         Starting udev Kernel Device Manager...
[  OK  ] Started udev Kernel Device Manager.
         Starting udev Coldplug all Devices...
         Mounting Configuration File System...
[   13.392635] alg: No test for pkcs1pad(rsa,sha256) (pkcs1pad(rsa-generic,sha256))
[  OK  ] Mounted Configuration File System.
[   13.403273] xgene-ahci APMC0D32:00: skip clock and PHY initialization
[   13.405285] sdhci: Secure Digital Host Controller Interface driver
[   13.405286] sdhci: Copyright(c) Pierre Ossman
[   13.422400] xgene-ahci APMC0D32:00: AHCI 0001.0300 32 slots 2 ports 6 Gbps 0x3 impl platform mode
[   13.431239] xgene-ahci APMC0D32:00: flags: 64bit ncq sntf pm clo only pmp fbs pio slum part ccc apst
[   13.435412] mmc0: SDHCI controller on ACPI [APMC0D0C:00] using PIO
[   13.446577] xgene-ahci APMC0D32:00: port 0 can do FBS, forcing FBSCP
[  OK  ] [   13.452930] xgene-ahci APMC0D32:00: port 1 can do FBS, forcing FBSCP
Started udev Coldplug all Devices.[   13.461371] scsi host0: xgene-ahci

[   13.467347] scsi host1: xgene-ahci
[   13.470798] ata1: SATA max UDMA/133 mmio [mem 0x1a000000-0x1a000fff] port 0x100 irq 60
[   13.478688] ata2: SATA max UDMA/133 mmio [mem 0x1a000000-0x1a000fff] port 0x180 irq 60
[   13.486659] xgene-enet APMC0D26:00: clocks have been setup already
[   13.494139] xgene_enet_probe INIT_DELAYED_WORK link_state
         Starting Show Plymouth Boot Screen...[   13.500081] xgene-enet APMC0D25:00: clocks have been setup already

[   13.511754] xgene_enet_probe INIT_DELAYED_WORK link_state
G         Starting dracut initqueue hook...
[  OK  ] Reached target System Initialization.
[  OK  ] Started Show Plymouth Boot Screen.
[  OK  ] Reached target Paths.
[  OK  ] Reached target Basic System.
[   13.814257] ata2: SATA link down (SStatus 0 SControl 300)
[   13.983054] ata1: SATA link up 3.0 Gbps (SStatus 123 SControl 300)
[   13.990299] ata1.00: ATA-8: WDC WD5000LUCT-63Y8HY0, 01.01A01, max UDMA/133
[   13.997148] ata1.00: 976773168 sectors, multi 0: LBA48 NCQ (depth 31/32)
[   14.004935] ata1.00: configured for UDMA/133
[   14.009449] scsi 0:0:0:0: Direct-Access     ATA      WDC WD5000LUCT-6 1A01 PQ: 0 ANSI: 5
[   14.093344] sd 0:0:0:0: [sda] 976773168 512-byte logical blocks: (500 GB/466 GiB)
[   14.100793] sd 0:0:0:0: [sda] 4096-byte physical blocks
[   14.106045] sd 0:0:0:0: [sda] Write Protect is off
[   14.110857] sd 0:0:0:0: [sda] Write cache: enabled, read cache: enabled, doesn't support DPO or FUA
[   14.265876]  sda: sda1 sda2 sda3 sda4 sda5
[   14.270535] sd 0:0:0:0: [sda] Attached SCSI disk
[   14.617871] random: fast init done
[  OK  ] Found device WDC_WD5000LUCT-63Y8HY0 4.
         Starting File System Check on /dev/...8-6797-49f5-897a-ccc9777d7c72...
[  OK  ] Started dracut initqueue hook.
[  OK  ] Reached target Remote File Systems (Pre).
[  OK  ] Reached target Remote File Systems.
[  OK  ] Started File System Check on /dev/d...648-6797-49f5-897a-ccc9777d7c72.
         Mounting /sysroot...
[   14.884761] SGI XFS with ACLs, security attributes, no debug enabled
[   14.914700] XFS (sda4): Mounting V5 Filesystem
[   15.053325] XFS (sda4): Starting recovery (logdev: internal)
[   15.418575] XFS (sda4): Ending recovery (logdev: internal)
[  OK  ] Mounted /sysroot.
[  OK  ] Reached target Initrd Root File System.
         Starting Reload Configuration from the Real Root...
[  OK  ] Started Reload Configuration from the Real Root.
[  OK  ] Reached target Initrd File Systems.
[  OK  ] Reached target Initrd Default Target.
         Starting dracut pre-pivot and cleanup hook...
[  OK  ] Started dracut pre-pivot and cleanup hook.
         Starting Cleaning Up and Shutting Down Daemons...
[  OK  ] Stopped target Timers.
         Starting Plymouth switch root service...
[  OK  ] Stopped Cleaning Up and Shutting Down Daemons.
[  OK  ] Stopped dracut pre-pivot and cleanup hook.
         Stopping dracut pre-pivot and cleanup hook...
[  OK  ] Stopped target Remote File Systems.
[  OK  ] Stopped target Remote File Systems (Pre).
[  OK  ] Stopped dracut initqueue hook.
         Stopping dracut initqueue hook...
[  OK  ] Stopped target Initrd Default Target.
[  OK  ] Stopped target Basic System.
[  OK  ] Stopped target Slices.
[  OK  ] Stopped target Paths.
[  OK  ] Stopped target System Initialization.
[  OK  ] Stopped udev Coldplug all Devices.
         Stopping udev Coldplug all Devices...
[  OK  ] Stopped Apply Kernel Variables.
         Stopping Apply Kernel Variables...
         Stopping udev Kernel Device Manager...
[  OK  ] Stopped target Swap.
[  OK  ] Stopped target Local File Systems.
[  OK  ] Stopped target Sockets.
[  OK  ] Started Plymouth switch root service.
[  OK  ] Stopped udev Kernel Device Manager.
[  OK  ] Stopped Create Static Device Nodes in /dev.
         Stopping Create Static Device Nodes in /dev...
[  OK  ] Stopped Create list of required sta...ce nodes for the current kernel.
         Stopping Create list of required st... nodes for the current kernel...
[  OK  ] Stopped dracut pre-udev hook.
         Stopping dracut pre-udev hook...
[  OK  ] Stopped dracut cmdline hook.
         Stopping dracut cmdline hook...
[  OK  ] Closed udev Kernel Socket.
[  OK  ] Closed udev Control Socket.
         Starting Cleanup udevd DB...
[  OK  ] Started Cleanup udevd DB.
[  OK  ] Reached target Switch Root.
         Starting Switch Root...
[   18.466985] systemd-journald[224]: Received SIGTERM from PID 1 (systemd).
[   18.672385] systemd: 24 output lines suppressed due to ratelimiting
[   19.295053] audit: type=1404 audit(1435079387.320:2): enforcing=1 old_enforcing=0 auid=4294967295 ses=4294967295
[   20.086674] SELinux:  Permission validate_trans in class security not defined in policy.
[   20.094842] SELinux:  Permission module_load in class system not defined in policy.
[   20.103321] SELinux:  Class binder not defined in policy.
[   20.108711] SELinux:  Class cap_userns not defined in policy.
[   20.114470] SELinux:  Class cap2_userns not defined in policy.
[   20.120288] SELinux:  Class sctp_socket not defined in policy.
[   20.126129] SELinux:  Class icmp_socket not defined in policy.
[   20.131945] SELinux:  Class ax25_socket not defined in policy.
[   20.137786] SELinux:  Class ipx_socket not defined in policy.
[   20.143542] SELinux:  Class netrom_socket not defined in policy.
[   20.149532] SELinux:  Class atmpvc_socket not defined in policy.
[   20.155545] SELinux:  Class x25_socket not defined in policy.
[   20.161277] SELinux:  Class rose_socket not defined in policy.
[   20.167116] SELinux:  Class decnet_socket not defined in policy.
[   20.173130] SELinux:  Class atmsvc_socket not defined in policy.
[   20.179119] SELinux:  Class rds_socket not defined in policy.
[   20.184873] SELinux:  Class irda_socket not defined in policy.
[   20.190690] SELinux:  Class pppox_socket not defined in policy.
[   20.196616] SELinux:  Class llc_socket not defined in policy.
[   20.202345] SELinux:  Class can_socket not defined in policy.
[   20.208117] SELinux:  Class tipc_socket not defined in policy.
[   20.213963] SELinux:  Class bluetooth_socket not defined in policy.
[   20.220213] SELinux:  Class iucv_socket not defined in policy.
[   20.226054] SELinux:  Class rxrpc_socket not defined in policy.
[   20.231958] SELinux:  Class isdn_socket not defined in policy.
[   20.237796] SELinux:  Class phonet_socket not defined in policy.
[   20.243809] SELinux:  Class ieee802154_socket not defined in policy.
[   20.250145] SELinux:  Class caif_socket not defined in policy.
[   20.255984] SELinux:  Class alg_socket not defined in policy.
[   20.261715] SELinux:  Class nfc_socket not defined in policy.
[   20.267468] SELinux:  Class vsock_socket not defined in policy.
[   20.273395] SELinux:  Class kcm_socket not defined in policy.
[   20.279127] SELinux:  Class qipcrtr_socket not defined in policy.
[   20.285226] SELinux:  Class smc_socket not defined in policy.
[   20.290958] SELinux: the above unknown classes and permissions will be allowed
[   20.404685] audit: type=1403 audit(1435079388.430:3): policy loaded auid=4294967295 ses=4294967295
[   20.418423] systemd[1]: Successfully loaded SELinux policy in 1.128620s.
[   20.884964] ip_tables: (C) 2000-2006 Netfilter Core Team
[   20.890373] systemd[1]: Inserted module 'ip_tables'
[   21.081407] systemd[1]: Relabelled /dev and /run in 177.297ms.

Welcome to CentOS Linux 7 (AltArch)!

[  OK  ] Stopped Switch Root.
         Mounting Debug File System...
[  OK  ] Listening on LVM2 poll daemon socket.
[  OK  ] Stopped Journal Service.
         Starting Journal Service...
[  OK  ] Set up automount Arbitrary Executab...ats File System Automount Point.
[  OK  ] Listening on Delayed Shutdown Socket.
[  OK  ] Listening on Device-mapper event daemon FIFOs.
[  OK  ] Listening on LVM2 metadata daemon socket.
         Mounting POSIX Message Queue File System...
[  OK  ] Reached target Remote File Systems.
[  OK  ] Stopped File System Check on Root Device.
         Stopping File System Check on Root Device...
         Starting Collect Read-Ahead Data...
[  OK  ] Created slice User and Session Slice.
[  OK  ] Created slice system-getty.slice.
[  OK  ] Created slice system-serial\x2dgetty.slice.
         Starting Replay Read-Ahead Data...
         Starting Monitoring of LVM2 mirrors... dmeventd or progress polling...
[  OK  ] Listening on udev Kernel Socket.
[  OK  ] Reached target Slices.
[  OK  ] Listening on udev Control Socket.
[  OK  ] Listening on /dev/initctl Compatibility Named Pipe.
[  OK  ] Stopped target Switch Root.
[  OK  ] Stopped target Initrd Root File System.
[  OK  ] Stopped target Initrd File Systems.
         Mounting Huge Pages File System...
         Starting Create list of required st... nodes for the current kernel...
[  OK  ] Started Collect Read-Ahead Data.
[  OK  ] Started Replay Read-Ahead Data.
         Starting Remount Root and Kernel File Systems...
         Starting Apply Kernel Variables...
[  OK  ] Started Journal Service.
[  OK  ] Started Create list of required sta...ce nodes for the current kernel.
         Starting Create Static Device Nodes in /dev...
[  OK  ] Mounted POSIX Message Queue File System.
[  OK  ] Mounted Debug File System.
[  OK  ] Mounted Huge Pages File System.
[  OK  ] Started Remount Root and Kernel File Systems.
[  OK  ] Started LVM2 metadata daemon.
         Starting LVM2 metadata daemon...
         Starting udev Coldplug all Devices...
         Starting Load/Save Random Seed...
         Starting Configure read-only root support...
         Starting Flush Jou[   24.247186] systemd-journald[497]: Received request to flush runtime journal from PID 1
rnal to Persistent Storage...
[  OK  ] Started Load/Save Random Seed.
[  OK  ] Started Flush Journal to Persistent Storage.
[  OK  ] Started Apply Kernel Variables.
[  OK  ] Started udev Coldplug all Devices.
         Starting udev Wait for Complete Device Initialization...
[  OK  ] Started Create Static Device Nodes in /dev.
         Starting udev Kernel Device Manager...
[  OK  ] Started Configure read-only root support.
[  OK  ] Started udev Kernel Device Manager.
[   25.935657] xgene-slimpro-hwmon APMC0D29:00: APM X-Gene SoC HW monitor driver registered
[   25.947343] xgene-rng APMC0D18:00: Couldn't get the clock for RNG
[   25.961433] xgene-gpio-sb APMC0D15:00: Support 22 gpios, 8 irqs start from pin 8
[   25.970596] xgene-gpio-sb APMC0D15:00: X-Gene GPIO Standby driver registered
[   25.978285] xgene-slimpro-mbox APMC0D01:00: APM X-Gene SLIMpro MailBox registered
[  OK  ] Found device /dev/ttyS0.
[   25.992697] sbsa-gwdt sbsa-gwdt.0: Initialized with 10s timeout @ 50000000 Hz, action=0.
[   26.158486] sd 0:0:0:0: Attached scsi generic sg0 type 0
G[   27.529328] Unable to handle kernel NULL pointer dereference at virtual address 00000006
[   27.533471] xgene-slimpro-i2c APMC0D40:00: Mailbox I2C Adapter registered
[   27.544177] pgd = ffff8003c0f9b200
[   27.547581] [00000006] *pgd=0000000000000000, *pud=0000000000000000
[   27.553858] Internal error: Oops: 96000005 [#1] SMP
[   27.558727] Modules linked in: sha2_ce i2c_xgene_slimpro sha1_ce i2c_core sg sbsa_gwdt mailbox_xgene_slimpro gpio_xgene_sb gpio_generic xgene_rng xgene_hwmon ip_tables xfs libcrc32c sdhci_acpi sdhci xgene_enetm
[   27.581545] CPU: 0 PID: 539 Comm: systemd-udevd Not tainted 4.11.0-22.el7.centos.2+falinux.1.aarch64 #1
[   27.590908] Hardware name: AppliedMicro X-Gene Falinux Board/X-Gene Falinux Board, BIOS 2.00.01 Nov 15 2017
[   27.600617] task: ffff8003cacd3b00 task.stack: ffff8003c4ab8000
[   27.606546] PC is at slimpro_i2c_pcc_rx_cb+0x1c/0x6c [i2c_xgene_slimpro]
[   27.613244] LR is at mbox_chan_received_data+0x30/0x3c
[   27.618374] pc : [<ffff000001ae00a4>] lr : [<ffff000008660cd4>] pstate: 600001c5
[   27.625747] sp : ffff8003ffdd3e40
[   27.629058] x29: ffff8003ffdd3e40 x28: ffff8003cacd3b00
[   27.634374] x27: ffff000008c53bc8 x26: ffff000008c00000
[   27.639686] x25: ffff8003c0c80000 x24: ffff000008d4b000
[   27.644998] x23: ffff000008d4b000 x22: ffff8003ffdd3f84
[   27.650308] x21: ffff000009930030 x20: ffff000008c53000
[   27.655617] x19: ffff8003ca273c20 x18: 000000008804cbbc
[   27.660927] x17: 00000000ef2ee578 x16: 00000000af0d6b97
[   27.666235] x15: 000000006c5a7960 x14: 00000000eb648be6
[   27.671546] x13: 0000000035724646 x12: 000000000563d2fa
[   27.676856] x11: 00000000e022c52f x10: 00000000a427f3a5
[   27.682166] x9 : ffff8003c4abb9f0 x8 : 0000000000000000
[   27.687478] x7 : 00000000d245aa8c x6 : 0000000000000000
[   27.692788] x5 : ffff8003c0c80000 x4 : ffff8003c0c80000
[   27.698098] x3 : 0000000000000001 x2 : ffff000001ae0088
[   27.703408] x1 : 0000000000000000 x0 : ffff000008660cd4
[   27.708717]
[   27.710219] Process systemd-udevd (pid: 539, stack limit = 0xffff8003c4ab8000)
[   27.717422] Stack: (0xffff8003ffdd3e40 to 0xffff8003c4abc000)
[   27.723152] Call trace:
[   27.725602] Exception stack(0xffff8003ffdd3c50 to 0xffff8003ffdd3d80)
[   27.732029] 3c40:                                   ffff8003ca273c20 0001000000000000
[   27.739841] 3c60: ffff8003ffdd3e40 ffff000001ae00a4 00000000600001c5 000000000000000d
[   27.747652] 3c80: ffff00000bbc0134 ffff000008097144 ffff8003ffdd3cb0 ffff00000854f13c
[   27.755463] 3ca0: ffff8003c0a64d00 0000000000000001 ffff8003ffdd3cd0 ffff000008572d78
[   27.763274] 3cc0: ffff8003c0a64d00 ffff00000854f108 ffff8003ffdd3d30 ffff00000856aa78
[   27.771084] 3ce0: ffff8003c0a64d00 ffff8003c0a64000 ffff8003c0a65e80 ffff8003c0a66300
[   27.778895] 3d00: ffff8003c0a65e80 0000000000040b00 ffff000008660cd4 0000000000000000
[   27.786706] 3d20: ffff000001ae0088 0000000000000001 ffff8003c0c80000 ffff8003c0c80000
[   27.794516] 3d40: 0000000000000000 00000000d245aa8c 0000000000000000 ffff8003c4abb9f0
[   27.802326] 3d60: 00000000a427f3a5 00000000e022c52f 000000000563d2fa 0000000035724646
[   27.810151] [<ffff000001ae00a4>] slimpro_i2c_pcc_rx_cb+0x1c/0x6c [i2c_xgene_slimpro]
[   27.817881] [<ffff000008660cd4>] mbox_chan_received_data+0x30/0x3c
[   27.824053] [<ffff000008661c18>] pcc_mbox_irq+0x3c/0xf0
[   27.829275] [<ffff00000812eec8>] __handle_irq_event_percpu+0x7c/0x214
[   27.835702] [<ffff00000812f098>] handle_irq_event_percpu+0x38/0x88
[   27.841869] [<ffff00000812f138>] handle_irq_event+0x50/0x80
[   27.847435] [<ffff000008133010>] handle_fasteoi_irq+0xb4/0x174
[   27.853259] [<ffff00000812df08>] generic_handle_irq+0x34/0x4c
[   27.858995] [<ffff00000812e5c0>] __handle_domain_irq+0x6c/0xc4
[   27.864818] [<ffff00000808151c>] gic_handle_irq+0x64/0xbc
[   27.870204] Exception stack(0xffff8003c4abb760 to 0xffff8003c4abb890)
[   27.876633] b760: ffff8003c4abb8f8 ffff8003c4abb94c 0000000000000000 00000000d26b52f8
[   27.884444] b780: 0000000000000000 0000000000000000 0000000000000000 00000000d245aa8c
[   27.892255] b7a0: 0000000000000000 ffff8003c4abb9f0 00000000a427f3a5 00000000e022c52f
[   27.900064] b7c0: 000000000563d2fa 0000000035724646 00000000eb648be6 000000006c5a7960
[   27.907874] b7e0: 00000000af0d6b97 00000000ef2ee578 000000008804cbbc ffff000008c53000
[   27.915685] b800: ffff8003cab6d480 ffff00000ec22800 0000000000000000 ffff8003d4855000
[   27.923495] b820: ffff00000ec20000 0000000000002800 ffff8003d48557a0 ffff8003d48557b0
[   27.931305] b840: ffff8003cacd3b00 ffff8003c4abb890 ffff00000836affc ffff8003c4abb890
[   27.939115] b860: ffff000008369410 0000000080000145 ffff8003c4abb890 ffff00000836af90
[   27.946922] b880: 0001000000000000 ffff00000834b538
[   27.951795] [<ffff000008082eb4>] el1_irq+0xb4/0x140
[   27.956670] [<ffff000008369410>] sha256_transform+0x94/0x1c40
[   27.962405] [<ffff00000836affc>] sha256_generic_block_fn+0x40/0x5c
[   27.968574] [<ffff00000836b2e4>] crypto_sha256_finup+0xb8/0x100
[   27.974486] [<ffff00000835fa74>] crypto_shash_finup+0x54/0x74
[   27.980227] [<ffff00000837cb00>] pkcs7_digest.isra.0+0xe0/0x254
[   27.986138] [<ffff00000837cd34>] pkcs7_verify+0xc0/0x5a8
[   27.991450] [<ffff0000081eaa6c>] verify_pkcs7_signature+0x88/0x168
[   27.997621] [<ffff000008163f10>] mod_verify_sig+0xa0/0xf0
[   28.003011] [<ffff000008162334>] load_module+0x1cc/0x133c
[   28.008402] [<ffff000008163714>] SyS_finit_module+0xd0/0xfc
[   28.013965] [<ffff000008083444>] el0_svc_naked+0x38/0x3c
[   28.019274] Code: aa0003f3 aa1e03e0 d503201f f9404e61 (79400c22)
[   28.025470] ---[ end trace d107bd3aed9d520a ]---
[   28.025557] random: crng init done
[   28.033537] Kernel panic - not syncing: Fatal exception in interrupt
[   28.039893] SMP: stopping secondary CPUs
[   28.043872] Kernel Offset: disabled
[   28.047357] Memory Limit: none
[   28.050427] ---[ end Kernel panic - not syncing: Fatal exception in interrupt
```
