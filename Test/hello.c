#include<linux/init.h>
#include<linux/module.h>



MODULE_LICENSE("Dual BSD/GPL");

static int hello_init(void)
{
	printk(KERN_EMERG "KERN_EMERG");
	printk(KERN_ALERT "KERN_ALERT");
	printk(KERN_CRIT "KERN_CRIT");
	printk(KERN_ERR "KERN_ERR");
	printk(KERN_WARNING "KERN_WARNING");
	printk(KERN_NOTICE "KERN_NOTICE");
	printk(KERN_INFO "KERN_INFO");
	printk(KERN_DEBUG "KERN_DEBUG");
	
}

static void hello_exit(void)
{
	printk(KERN_ALERT "goodbye\n");
}

module_init(hello_init);
module_exit(hello_exit);

