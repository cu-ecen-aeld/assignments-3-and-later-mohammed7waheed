ifdef CROSS_COMPILE
append=$(CROSS_COMPILE)gcc
else
append=gcc

endif
all: 
	$(append) -g -Wall -c -o writer.o writer.c
	$(append) -g -Wall -I/ writer.o -o writer
	
		

clean:
	rm -f writer *.o *.elf *.map
