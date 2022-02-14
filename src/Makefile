.PHONY: all clean

CC = gcc
CFLAGS = -c -Wall -Werror -Wextra -std=c11

all: Quest_3

Quest_3: main_executable_module.o
	$(CC) main_executable_module.o -o Quest_3

main_executable_module.o: main_executable_module/main_executable_module.c data_libs/data_io.h main_executable_module/data_executable.h yet_another_decision_module/decision.h data_module/data_process.h
	$(CC) $(CFLAGS) -c main_executable_module/main_executable_module.c

clean:
	rm -rf *.o main

# Quest_3: main_executable_module.o data_executable.o data_io.o data_process.o decision.o
# 	$(CC) main_executable_module.o data_executable.o data_io.o data_process.o decision.o -o Quest_3

# main_executable_module.o: main_executable_module/main_executable_module.c data_libs/data_io.h main_executable_module/data_executable.h yet_another_decision_module/decision.h data_module/data_process.h
# 	$(CC) $(CFLAGS) -c main_executable_module/main_executable_module.c

# data_executable.o: main_executable_module/data_executable.c main_executable_module/data_executable.h
# 	$(CC) $(CFLAGS) -c main_executable_module/data_executable.c

# data_io.o: data_libs/data_io.c data_libs/data_io.h
# 	$(CC) $(CFLAGS) -c data_libs/data_io.c

# data_process.o: data_module/data_process.c data_module/data_process.h data_libs/data_stat.h
# 	$(CC) $(CFLAGS) -c data_module/data_process.c

# decision.o: yet_another_decision_module/decision.c yet_another_decision_module/decision.h data_libs/data_stat.h
# 	$(CC) $(CFLAGS) -c yet_another_decision_module/decision.c