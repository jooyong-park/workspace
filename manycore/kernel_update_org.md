### Downloading and Installing the Debian Packages for 4.10.1 Linux-Kernel:

#### For 32bit ONLY.

In Terminal:

```
cd Desktop
mkdir linux_14.10.1
cd linux_14.10.1
wget kernel.ubuntu.com/~kernel-ppa/mainline/v4.10.1/linux-headers-4.10.1-041001-generic_4.10.1-041001.201702260735_i386.deb
wget kernel.ubuntu.com/~kernel-ppa/mainline/v4.10.1/linux-image-4.10.1-041001-generic_4.10.1-041001.201702260735_i386.deb
```

Install the 4.10.1 Linux-Kernel:

```
sudo dpkg -i *.deb
```

Update GRUB:

```
sudo update-grub
```

Don't forget to install (to avoid any software error in the future) the "gcc" from synaptics according to the Linux-kernel x.xx version.

```
Sudo reboot
```

Now choose to boot your 4.10.1 Linux-kernel from GRUB menu.

#### REMOVING THE 4.10.1 LINUX-KERNEL:

Reboot to GRUB.

Choose to boot from your previous Linux-Kernel.

Execute and choose to remove:

linux-headers-4.10.1-041001-generic_4.10.1-041001.201702260735_i386.deb

linux-image-4.10.1-041001-generic_4.10.1-041001.201702260735_i386.deb

#### For 64bit ONLY.

In Terminal:

```
cd Desktop
mkdir linux_14.10.1
cd linux_14.10.1
wget kernel.ubuntu.com/~kernel-ppa/mainline/v4.10.1/linux-headers-4.10.1-041001-generic_4.10.1-041001.201702260735_amd64.deb
wget kernel.ubuntu.com/~kernel-ppa/mainline/v4.10.1/linux-image-4.10.1-041001-generic_4.10.1-041001.201702260735_amd64.deb
```

Install the 4.10.1 Linux-Kernel:

```
sudo dpkg -i *.deb
```

Update GRUB:

```
sudo update-grub
```

Don't forget to install (to avoid any software error in the future) the "gcc" from synaptics according to the Linux-kernel x.xx version

Sudo reboot Now choose to boot your 4.10.1 Linux-kernel from GRUB menu.

#### REMOVING THE 4.10.1 LINUX-KERNEL:

Reboot to GRUB.

Choose to boot from your previous Linux-Kernel.

Execute and choose to remove:

linux-headers-4.10.1-041001-generic_4.10.1-041001.201702260735_amd64.deb

linux-image-4.10.1-041001-generic_4.10.1-041001.201702260735_amd64.deb

Open a Terminal:

```
sudo update-grub
```

### Compiling the newest Linux-Kernel for X86 architecture:

##### 0.Downloading the Free-Source-Code:

Go to from https://www.kernel.org/ and choose the version of Linux-Kernel you wish Move the downloaded ".tar.xz" Linux-Kernel to a optional named folder anywere you like.

Extract the ".tar.xz" Linux Kernel to the Desktop or anywhere you wish. Open a Terminal by pressing Ctrl+Alt+T:

```
cd Desktop/Linux-x.x.x
```

(Linux-x.x.xis an example of the name of the folder of the extracted Linux-Kernel)

##### 1.INSTALLING THE NEEDED LIBRARIES:

```
sudo add-apt-repository ppa:danielrichter2007/grub-customizer
sudo apt-get update
sudo apt-get install libssl-dev build-essential kernel-package libncurses5-dev bzip2 fakeroot gdebi grub-customizer
```

##### 2.KERNEL CONFIGURATION:

In terminal:

```
make menuconfig
```

(Choose the Options OR leave it as it is you can always go back to your previous Linux-kernel)

Controls: Use the arrows Up,Down for the options.

Use Enter OR Space to choose an option.

Use Left,Right to Exit, Save, Help etc.

Take your time to explore the options (or leave them as it is) and Save,Exit.

##### 3.COMPILING THE LINUX-KERNEL:

```
make-kpkg clean
fakeroot make-kpkg --initrd --append-to-version=-its-a-test kernel_image kernel_headers
```

(its-a-test is an example you can name it anything-you-like)

Now wait until the compiling finish, it will take some time according to your cpu for example a core2quad will take around to 45 minutes.

##### 4.INSTALLING THE NEW LINUX KERNEL:

Install the two DEB packages that has been created into the extracted kernel folder it should be named something like linux-headers-x.xx.deb and linux-image-x.xx.deb.

#####DO NOT DELETED THOSE TWO DEB'S FILES IF YOU WANT TO INSTALL THEM ON ANOTHER PC OR IF YOU WANT TO REMOVE YOUR TEST LINUX-KERNEL LATER.

```
ls (see the compiled *.deb files)

sudo dpkg -i *.deb
```

##### 5.UPDATING GRUB:

```
sudo update-grub
```

Don't forget to install (to avoid any software error in the future) the "gcc" from synaptics according to the kernel x.xx version.

```
Sudo reboot
```

Now choose to boot your test Linux-kernel from GRUB menu.

Open a Terminal:

```
uname -a (see the version and name of your test Linux-Kernel)
```

#### REMOVING YOUR TEST LINUX-KERNEL:

Reboot to GRUB.

Choose to boot from your previous Linux-Kernel

Execute linux-headers-x.xx.deb and then the linux-image-x.xx.deb and choose to remove.

Open a Terminal:

```
sudo update-grub
```
