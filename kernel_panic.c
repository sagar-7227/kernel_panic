#include <linux/module.h>
#include <linux/kernel.h>

void trigger_kernel_panic(void) {
    panic("Triggering kernel panic for research purposes");
}

static int __init kernel_panic_init(void) {
    printk(KERN_INFO "Kernel Panic Module loaded\n");
    trigger_kernel_panic();
    return 0;
}

static void __exit kernel_panic_exit(void) {
    printk(KERN_INFO "Kernel Panic Module unloaded\n");
}

module_init(kernel_panic_init);
module_exit(kernel_panic_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Kernel Panic Module");
MODULE_AUTHOR("Sagar");
