#@copyright : abdullah rajeh
CC=arm-none-eabi-
CFLAGS= -mcpu=cortex-m3	
INCS=-I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
As= $(wildcard *.s)
AsOBJ= $(As:.s=.o)
Project_name=Learn_in_depth_cortex_m3

all:$(Project_name).bin
	@echo "||============ Build is Done ============||"

startup.o:startup.s
	$(CC)as.exe -c $(CFLAGS)  $< -o $@

%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@


$(Project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_file

$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O  binary $< $@

clean_all:
	rm *.o *.bin *.elf
clean:
	rm *.elf *.bin	




