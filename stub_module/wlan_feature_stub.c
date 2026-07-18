#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Stub for kerSysGetWlanFeature");

unsigned int kerSysGetWlanFeature(void)
{
    return 0;
}
EXPORT_SYMBOL(kerSysGetWlanFeature);

static int __init stub_init(void)
{
    printk(KERN_INFO "kerSysGetWlanFeature stub module loaded\n");
    return 0;
}

static void __exit stub_exit(void)
{
    printk(KERN_INFO "kerSysGetWlanFeature stub module unloaded\n");
}

module_init(stub_init);
module_exit(stub_exit);
