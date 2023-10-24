
ifdef CROSS_COMPILE
cc=$(CROSS_COMPILE)gcc
else
cc=gcc

endif



all:
	${CC} -g -Wall -c -o writer.o writer.c
	${cc} -g -Wall -o writer writer.o 


clean:
	rm -f writer *.o *.elf *.map





