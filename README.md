# A repo to display my device driver and linux kernel programming progress

## Current Progress
* Linux Kernel Module Guide Chapter 4: 4.1.5. chardev.c 
* Linux Kernel Development Chapter 8

## Loading Kernel Modules
use `insmod` and `rmmod` functions to load kernel modules into kernel

```
sudo insmod hello-1.ko
sudo rmmod hello-1.ko
```

Use `dmesg -w` to view printk() function calls

## Current Readings
[The Linux Kernel Module Programming Guide](https://www.tldp.org/LDP/lkmpg/2.6/html/lkmpg.html#FTN.AEN520)

## Todo
* Implement Linked List using Kernel Library 
* Start writing device drivers in Rust
