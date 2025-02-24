all: build



CXXFLAGS = 	-ffreestanding -fno-rtti -Wall -Wpedantic -Wextra -fno-exceptions -std=c++17 -O3 -mcmodel=small -nostdlib -march=i8086 -mtune=i8086 -Os
LDFLAGS = 	-b msdos

SRCS = $(wildcard lib/**/*.cc)
ASMS = $(SRCS:.cc=.s)
OBJS = $(SRCS:.cc=.o)

bld:
	mkdir $@

%.s: %.cc
	ia16-elf-g++ -S $< $(CXXFLAGS) -o $@ --verbose 

%.o: %.s
	ia16-elf-as $< -o $@ --verbose

build: bld $(ASMS) $(OBJS)
	ia16-elf-strip $(OBJS)
	ia16-elf-ld -r $(OBJS) $(LDFLAGS) -o bld/rm-cxx.o --verbose


clean:
	rm **/**/*.s **/**/*.o -v
	rm -rfv bld