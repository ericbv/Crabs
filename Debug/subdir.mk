################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../ConcreteEventHandler.cpp \
../Dice.cpp \
../Event.cpp \
../EventHandler.cpp \
../Game.cpp \
../main.cpp 

OBJS += \
./ConcreteEventHandler.o \
./Dice.o \
./Event.o \
./EventHandler.o \
./Game.o \
./main.o 

CPP_DEPS += \
./ConcreteEventHandler.d \
./Dice.d \
./Event.d \
./EventHandler.d \
./Game.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


