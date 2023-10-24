#CROSS_COMPILE=gcc
#ifeq ($(CROSS_COMPILE),aarch64-none-linux-gnu-)
#	CC=$(CROSS_COMPILE)gcc
#else
#	CC=gcc
#endif
#all:writer
#writer:writer.c
#	${CC} -o writer writer.c
#clean:
#	rm writer $(wildcard *.o)


CROSS_COMPILE=gcc
ifeq ($(CROSS_COMPILE),aarch64-none-linux-gnu-)
cc=$(CROSS_COMPILE)gcc

else
cc=gcc


endif
all: 
	${cc} -o writer.o writer.c
	
	
		

clean:
	rm -f writer *.o *.elf *.map




