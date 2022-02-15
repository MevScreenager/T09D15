.PHONY: all clean

CC = gcc
CFLAGS = -c -Wall -Werror -Wextra -std=c11

rebuild: clean all

all: ../build/Quest_3 ../build/Quest_5 ../build/Quest_6

../build/Quest_3: main_executable_module.o
	$(CC) main_executable_module.o -o ../build/Quest_3

main_executable_module.o: main_executable_module/main_executable_module.c data_libs/data_io.h main_executable_module/data_executable.h yet_another_decision_module/decision.h data_module/data_process.h
	$(CC) $(CFLAGS) -c main_executable_module/main_executable_module.c

../build/Quest_5:  build_with_static.o
	$(CC) build_with_static.o -o ../build/Quest_5

build_with_static.o: main_executable_module/main_executable_module.c data_stat.a
	$(CC) $(CFLAGS) -c main_executable_module/main_executable_module.c -o build_with_static.o

data_stat.a: data_libs/data_stat.c data_libs/data_stat.h
	$(CC) $(CFLAGS) -c data_libs/data_stat.c

../build/Quest_6: build_with_dynamic.o
	$(CC) -Wall -Werror -Wextra -std=c11 -Wl,-rpath,. build_with_dynamic.o -o ../build/Quest_6

build_with_dynamic.o: main_executable_module/main_executable_module.c data_process.so
	$(CC) $(CFLAGS) -c main_executable_module/main_executable_module.c -o build_with_dynamic.o

data_process.so: data_module/data_process.c data_module/data_process.h
	$(CC) $(CFLAGS) -c data_module/data_process.c

clean:
	rm -rf *.o main
