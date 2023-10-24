#CROSS_COMPILE=gcc
#ifeq ($(CROSS_COMPILE),aarch64-none-linux-gnu-)
#	CC=$(CROSS_COMPILE)gcc
#else
#	CC=gcc
#endif


all:writer
writer:writer.c
	${CC} -o writer writer.c
clean:
	rm writer $(wildcard *.o)







