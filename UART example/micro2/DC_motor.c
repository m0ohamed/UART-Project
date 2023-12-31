#include "DC_motor.h"
#include "PWM.h"
void DcMotor_Init(void)
{
	SetupPinDirection(DC_MOTOR_FIRST_PORT_ID,DC_MOTOR_FIRST_PIN_ID,OUTPUT_PIN);
	SetupPinDirection(DC_MOTOR_SECOND_PORT_ID,DC_MOTOR_SECOND_PIN_ID,OUTPUT_PIN);


	Write_Pin(DC_MOTOR_FIRST_PORT_ID,DC_MOTOR_FIRST_PIN_ID,LOGIC_LOW);
	Write_Pin(DC_MOTOR_SECOND_PORT_ID,DC_MOTOR_SECOND_PIN_ID,LOGIC_LOW);


}


void DcMotor_Rotate(DcMotor_State state,uint8 speed)
{
switch(state)
{
case OFF:
	Write_Pin(DC_MOTOR_FIRST_PORT_ID,DC_MOTOR_FIRST_PIN_ID,LOGIC_LOW);
		Write_Pin(DC_MOTOR_SECOND_PORT_ID,DC_MOTOR_SECOND_PIN_ID,LOGIC_LOW);
		PWM_Timer0_START(speed);
		break;
case CW:
	Write_Pin(DC_MOTOR_FIRST_PORT_ID,DC_MOTOR_FIRST_PIN_ID,LOGIC_LOW);
		Write_Pin(DC_MOTOR_SECOND_PORT_ID,DC_MOTOR_SECOND_PIN_ID,LOGIC_HIGH);
		PWM_Timer0_START(speed);
		break;
case A_CW:
	Write_Pin(DC_MOTOR_FIRST_PORT_ID,DC_MOTOR_FIRST_PIN_ID,LOGIC_HIGH);
		Write_Pin(DC_MOTOR_SECOND_PORT_ID,DC_MOTOR_SECOND_PIN_ID,LOGIC_LOW);
		PWM_Timer0_START(speed);
		break;
}
}

