################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Program.cpp \
../src/Stoper.cpp \
../src/Tablica.cpp \
../src/main.cpp 

OBJS += \
./src/Program.o \
./src/Stoper.o \
./src/Tablica.o \
./src/main.o 

CPP_DEPS += \
./src/Program.d \
./src/Stoper.d \
./src/Tablica.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


