################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/IKolejka.cpp \
../src/ILista.cpp \
../src/IProgram.cpp \
../src/IStos.cpp \
../src/Kolejka.cpp \
../src/Lista.cpp \
../src/Lista_Elem.cpp \
../src/Stoper.cpp \
../src/Stos.cpp \
../src/Tablica.cpp \
../src/main.cpp 

OBJS += \
./src/IKolejka.o \
./src/ILista.o \
./src/IProgram.o \
./src/IStos.o \
./src/Kolejka.o \
./src/Lista.o \
./src/Lista_Elem.o \
./src/Stoper.o \
./src/Stos.o \
./src/Tablica.o \
./src/main.o 

CPP_DEPS += \
./src/IKolejka.d \
./src/ILista.d \
./src/IProgram.d \
./src/IStos.d \
./src/Kolejka.d \
./src/Lista.d \
./src/Lista_Elem.d \
./src/Stoper.d \
./src/Stos.d \
./src/Tablica.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


