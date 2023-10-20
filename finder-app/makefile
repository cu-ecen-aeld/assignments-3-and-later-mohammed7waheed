ifdef CROSS_COMPILE
cc=$(CROSS_COMPILE)gcc
else
cc=gcc

endif

compiler_output=writer.o
linker_output=writer
source=writer.c

all:
	$(cc) -g -Wall -c -o ${compiler_output} ${source}
	$(cc) -g -Wall -I/ ${compiler_output} -o ${linker_output}
	
		

clean:
	rm -f writer *.o *.elf *.map






