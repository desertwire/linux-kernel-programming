/*  
 *  hello-1.c - The simplest kernel module.
 */
#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */
#include <linux/init.h>         /* Macros */ 

static int hello3_data __initdata = 3;

static int __init hello_3_init(void)
{
	printk(KERN_INFO "Hello world 3.\n");

	/* 
	 * A non 0 return means init_module failed; module can't be loaded. 
	 */
	return 0;
}

static void __exit hello_3_exit(void)
{
	printk(KERN_INFO "Goodbye world 3.\n");
}

module_init(hello_3_init);
module_exit(hello_3_exit);
