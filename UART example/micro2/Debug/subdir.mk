################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DC_motor.c \
../LCD.c \
../Ledsc.c \
../My_GPIO.c \
../PWM.c \
../uart.c 

OBJS += \
./DC_motor.o \
./LCD.o \
./Ledsc.o \
./My_GPIO.o \
./PWM.o \
./uart.o 

C_DEPS += \
./DC_motor.d \
./LCD.d \
./Ledsc.d \
./My_GPIO.d \
./PWM.d \
./uart.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


