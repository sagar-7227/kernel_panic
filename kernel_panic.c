#include <linux/module.h>
#include <linux/kernel.h>


static int __init kernel_panic_init(void) {
    printk(KERN_ALERT "Simulating kernel panic (this is not a real panic)\n");
    panic("Triggering kernel panic for research purposes");
    return 0;
}

static void __exit kernel_panic_exit(void) {
    printk(KERN_INFO "Test panic module unloaded\n");
}

module_init(kernel_panic_init);
module_exit(kernel_panic_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Kernel Panic Module");
MODULE_AUTHOR("Sagar");
