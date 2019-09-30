#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Nisha Mathew");
MODULE_DESCRIPTION("A simple Hello world LKM!!!!!!!!");
MODULE_VERSION("0.1");

static int __init hello_start(void)
{
	printk(KERN_INFO "Loading the hello world module Nisha.....\n");
	printk(KERN_INFO "Hello World\n");
	return 0;
}
static void __exit hello_end(void)
{
	printk(KERN_INFO "GoodBye Nisha Mathew\n");
}

module_init(hello_start);
module_exit(hello_end);
