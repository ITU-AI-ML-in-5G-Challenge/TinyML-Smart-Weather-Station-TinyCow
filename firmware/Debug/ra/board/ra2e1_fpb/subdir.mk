################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ra/board/ra2e1_fpb/board_init.c \
../ra/board/ra2e1_fpb/board_leds.c 

C_DEPS += \
./ra/board/ra2e1_fpb/board_init.d \
./ra/board/ra2e1_fpb/board_leds.d 

OBJS += \
./ra/board/ra2e1_fpb/board_init.o \
./ra/board/ra2e1_fpb/board_leds.o 

SREC += \
ra_one.srec 

MAP += \
ra_one.map 


# Each subdirectory must supply rules for building sources it contributes
ra/board/ra2e1_fpb/%.o: ../ra/board/ra2e1_fpb/%.c
	$(file > $@.in,-mcpu=cortex-m23 -mthumb -O2 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal  -g -gdwarf-4 -D_RA_CORE=CM23 -D_RENESAS_RA_ -I"C:/Users/thibault/e2_studio/workspace/ra_one/src" -I"C:/Users/thibault/e2_studio/workspace/ra_one/ra/fsp/inc" -I"C:/Users/thibault/e2_studio/workspace/ra_one/ra/fsp/inc/api" -I"C:/Users/thibault/e2_studio/workspace/ra_one/ra/fsp/inc/instances" -I"C:/Users/thibault/e2_studio/workspace/ra_one/ra/arm/CMSIS_5/CMSIS/Core/Include" -I"C:/Users/thibault/e2_studio/workspace/ra_one/ra_gen" -I"C:/Users/thibault/e2_studio/workspace/ra_one/ra_cfg/fsp_cfg/bsp" -I"C:/Users/thibault/e2_studio/workspace/ra_one/ra_cfg/fsp_cfg" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" -x c "$<")
	@echo Building file: $< && arm-none-eabi-gcc @"$@.in"

