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
append=$(CROSS_COMPILE)gcc
else
echo "0"
echo "0"
echo "0"
echo "0"
append=gcc

endif
all: 
	$(append) -g -Wall -c -o writer.o writer.c
	$(append) -g -Wall -I/ writer.o -o writer
	
		

clean:
	rm -f writer *.o *.elf *.map




