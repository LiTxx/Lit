#Makefile 2.6  
      
obj-m :=buildchain.o regchain.o notify.o  
KERNEL :=/usr/src/linux-headers-4.4.0-31-generic/  
PWD :=$(shell pwd)  
modules :  
	$(MAKE) -C $(KERNEL) M=$(PWD) modules  
.PHONEY:clean  
clean :  
	rm -f *.o *.ko  
