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



ifdef CROSS_COMPILE
echo "0"
echo "0"
echo "0"
echo "0"
cc=$(CROSS_COMPILE)gcc
else

cc=gcc

endif
all: 
	$(cc) -g -Wall -c -o writer.o writer.c
	$(cc) -g -Wall -I/ writer.o -o writer
	
		

clean:
	rm -f writer *.o *.elf *.map




