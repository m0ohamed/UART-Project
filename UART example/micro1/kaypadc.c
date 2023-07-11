#include "Keypad.h"
#include "uart.h"
#include "gpio.h"
#include "std_types.h"

int main ()
{
	uint8 key;
	UART_INIT INIT_OBJ={async,Disabled,_1_Stop_Bit,_8_Bit_Mode,Double_speed,9600};
	UART_init(&INIT_OBJ);
	while(1)
	{
		key=KEYPAD_getPressedKey();
		UART_sendByte(key);
	}
}
