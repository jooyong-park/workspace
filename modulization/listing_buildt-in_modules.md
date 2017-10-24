Have you ever wondered how to list the built-in kernel modules? Here you are, they are in the file modules.builtin. Now it is easy to check if a module is built-in or not, grep will suffice: $grep module_name /lib/modules/$(uname -r)/modules.builtin

wall-e-rubiks-cube3

Too short? OK keep reading for a longer modules’ tale. As you already know, the Linux kernel is the software that controls the computer’s hardware and it is composed by an essential core and optional modules. These optional modules, sort of “add-ons”, expand the kernel capabilities and give support to a big variety of hardware, for instance a webcam or a scanner. The modules can be statically built into the kernel or dynamically loadable.

The external loadable modules are usually located under /usr/lib/modules/ in a directory named after the kernel released, therefore in order to list it use 'uname -r': $ ls /usr/lib/modules/$(uname -r)

These kind of modules can be loaded (modprobe), unloaded (rmmod) and listed (lsmod). On the other hand, built-in modules do no accept any of those actions. They are always loaded, they cannot be unloaded and they cannot be listed. Being always loaded does not mean they are always active (in use), a module can be loaded but it will be active only when it is required. For example, suppose that your webcam’s module is built-in, then it will always be loaded but only active (being used) when a program (e.g. Skype) uses the webcam.

Part of the kernel building process is to configure it, that is, to select which features we will activate or deactivate, for that matter a configuration file is used defining for each feature if it will be enabled or not. There is no one-to-one correspondence between features and modules; a feature may have associated zero, one or more modules. For instance, the ext4 filesystem support requires the single module ext4 but the support for SGI Ultraviolet systems requires 5 modules (tlb_uv, bios_uv, uv_irq, uv_sysfs, uv_time). For each feature the configuration file define three possible values:

"y": the feature is enabled, all associated modules will be built-in. "m": the feature is enabled, all associated modules will be externally loadable. not enabled: the feature will not be supported, this state is indicated either by removing the entire line either by commenting it out with “#” It is quite common for the different Linux distros to distributed this configuration file along with the kernel, this is normally done either as a regular file either under the (runtime) /proc filesystem.

Regular file This is the approach followed by Debian and its derivatives (like Ubuntu). The kernel package includes the text file /boot/config-$(uname -r), for example to query if the kvm_intel feature is enabled: $ grep -i kvm_intel /boot/config-$(uname -r)

/proc filesystem Many other distributions, like Arch Linux, enable the option to include the running kernel configuration within the /proc filesystem. In this case the file is a compressed text file located at /proc/config.gz, you can use the zcat/zgrep utilities to inspect it; for instance: $ zgrep -i kvm_intel /proc/config.gz

The final piece of the puzzle is to establish the relationship between features and kernel modules. Bad news: this relationship is not stored anywhere. Good news everyone: you can obtain the info from the Linux source code. In the Linux sources, the MakefileS contain lines such as: obj-$(CONFIG_XXX) += module_1.o module_2.o

As you may have guessed, the above line means that the feature ‘XXX‘ requires the modules ‘module*1‘ and ‘module_2‘, therefore creating your local “database” is simply a grep command: $ cd /path/to/linux/sources $ grep -R --include=Makefile 'obj-$(CONFIG*.*\.o.*' . | sort -u > feature_modules.txt

Now you can easily look for modules and features: $ grep CONFIG_ZRAM feature_modules.txt ./drivers/staging/zram/Makefile:obj-$(CONFIG_ZRAM) += zram.o

As a side note I will add that modprobe will not fail when loading a built-in kernel hence another (empirical) way to assert if a module is built-in consist in loading the module using modprobe and if it does not fail then try to list it using lsmod, if the module is not listed then it is built in. In bash: $ module=XXX; $ modprobe ${module} &>/dev/null; if \[[ $? -ne 0 ]]; then echo module ${module} does not exist; elif \[[ $(lsmod | grep -cw ${module}) -eq 0 ]]; then echo ${module} is built-in; else echo ${module} is loadable module, NOT built-in;fi

That was a long mambo-jumbo but is there any practical application in all this? Why should you care if a module is built-in or not? That’s a good question and the answer is: let’s hope you don’t need it. This is another tool for troubleshooting so unless something is not working you should not care. A scenario could be when something in your computer (e.g. the Wi-Fi) does not work in distro-1 (e.g. Debian) but it works in another distro-2 (e.g. Knoppix), so you think it is a module issue and decide to compare between both distros the loaded modules to find out which is one you are missing. Such an attempt will fail if the Wi-Fi module is built-in as it will not be listed in lsmod and you will just get crazy wondering which spell distro-2 casts for the Wi-Fi to w
