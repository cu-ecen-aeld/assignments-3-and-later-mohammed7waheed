
ifdef CROSS_COMPILE
cc=$(CROSS_COMPILE)gcc
else
cc=gcc

endif


all:writer

writer.o:writer.c
	${CC} -g -Wall -c -o writer.o writer.c
	
writer:writer.o
	${CC} -g -Wall -o writer writer.c
	


clean:
	rm -f writer *.o *.elf *.map





