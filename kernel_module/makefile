obj-m = printk.o
PWD := $(shell pwd)
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	rm *.o *.ko  *.mod.c *.order *.symvers
