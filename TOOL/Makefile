ToolChain = arm-none-eabi-
CPU = -mcpu=cortex-m4 -mthumb

Source = $(wildcard *.c)
Object = $(Source:.c=.o)

all : Out.hex

%.o : %.c
	$(ToolChain)gcc -c $(CPU) $< -o $@

Out.elf : $(Object)
	$(ToolChain)ld -T LinkerScript.ld $(Object) -o $@

Out.hex : Out.elf
	$(ToolChain)objcopy -O  ihex $<  $@ 

clean :
	rm *.o *.elf *.hex                 
