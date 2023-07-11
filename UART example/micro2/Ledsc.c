#include "uart.h"
#include "MY_GPIO.h"
#include "std_types.h"
#include "DC_motor.h"
#include "LCD.h"
#include "PWM.h"
#include "util/delay.h"
int main()
{
	uint8 num;
	UART_INIT INIT_OBJ={async,Disabled,_1_Stop_Bit,_8_Bit_Mode,Double_speed,9600};
	LCD_init();
	DcMotor_Init();
	UART_init(&INIT_OBJ);
	LCD_displayStringRowColumn(0,0,"Motor is    ");
	LCD_displayStringRowColumn(1,0,"Speed is    ");
	while(1)
	{

		num=UART_recieveByte();

		if(num==13)
		{


			DcMotor_Rotate(OFF,0);
			LCD_displayStringRowColumn(0,9,"OFF        ");
			LCD_displayStringRowColumn(1,9,"0          ");
		}
		else if(num==1)
		{
			DcMotor_Rotate(CW,64);
			LCD_displayStringRowColumn(0,9,"ON/CW   ");
			LCD_displayStringRowColumn(1,9,"25%   ");

		}

		else if(num==2)
		{
			DcMotor_Rotate(CW,128);
			LCD_displayStringRowColumn(0,9,"ON/CW   ");
			LCD_displayStringRowColumn(1,9,"50%   ");
		}
		else if(num==3)
		{
			DcMotor_Rotate(CW,192);
			LCD_displayStringRowColumn(0,9,"ON/CW   ");
			LCD_displayStringRowColumn(1,9,"75%   ");
		}
		else if(num==4)
		{
			DcMotor_Rotate(CW,255);
			LCD_displayStringRowColumn(0,9,"ON/CW    ");
			LCD_displayStringRowColumn(1,9,"100%   ");

		}

		else if(num==5)
		{
			DcMotor_Rotate(A_CW,64);
			LCD_displayStringRowColumn(0,9,"ON/ACW");
			LCD_displayStringRowColumn(1,9,"25%   ");
		}
		else if(num==6)
		{
			DcMotor_Rotate(A_CW,128);
			LCD_displayStringRowColumn(0,9,"ON/ACW");
			LCD_displayStringRowColumn(1,9,"50%   ");
		}
		else if(num==7)
		{
			DcMotor_Rotate(A_CW,192);
			LCD_displayStringRowColumn(0,9,"ON/ACW");
			LCD_displayStringRowColumn(1,9,"75%   ");
		}
		else if(num==8)
		{
			DcMotor_Rotate(A_CW,255);
			LCD_displayStringRowColumn(0,9,"ON/ACW");
			LCD_displayStringRowColumn(1,9,"100%   ");
		}
				else
				{

				}

	}

}