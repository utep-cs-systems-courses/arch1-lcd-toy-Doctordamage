# makfile configuration
CPU             	= msp430g2553
CFLAGS          	= -mmcu=${CPU} -Os -I../h
LDFLAGS		= -L../lib -L/opt/ti/msp430_gcc/include/

#switch the compiler (for the internal make rules)
CC              = msp430-elf-gcc
AS              = msp430-elf-gcc -mmcu=${CPU} -c

all:shapemotion.elf

#additional rules for files
shapemotion.elf: ${COMMON_OBJECTS} shapemotion.o wdt_handler.o buzzer.o led.o stateMachines.o stateAdvance.o smUpdateLCD.o
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^ -lTimer -lLcd -lShape -lp2sw

load: shapemotion.elf
	msp430loader.sh $^

clean:
	rm -f *.o *.elf
