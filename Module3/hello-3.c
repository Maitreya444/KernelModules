#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */
#include <linux/init.h>		/* Needed for the macros */

static int hello3_data __initdata = 21;

static int __init hello_3_init(void)
{
	printk(KERN_INFO "Maitreya : module inserted with data %d\n", hello3_data);
	return 0;
}

static void __exit hello_3_exit(void)
{
	printk(KERN_INFO "Maitreya : module removed\n");
}

module_init(hello_3_init);
module_exit(hello_3_exit);
