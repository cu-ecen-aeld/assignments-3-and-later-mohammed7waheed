#ifdef CROSS_COMPILE
#append=$(CROSS_COMPILE)gcc
#else
#append=gcc

#endif

#compiler_output=writer.o
#linker_output=writer
#source=writer.c

#all:
#	$(append) -g -Wall -c -o ${compiler_output} ${source}
#	$(append) -g -Wall -I/ ${compiler_output} -o ${linker_output}
	
		

#clean:
#	rm -f writer *.o *.elf *.map
CROSS_COMPILE=gcc
ifeq ($(CROSS_COMPILE),aarch64-none-linux-gnu-)
	CC=$(CROSS_COMPILE)gcc
else
	CC=gcc
endif
all:writer
writer:writer.c
	${CC} -o writer writer.c
clean:
	rm writer $(wildcard *.o)





