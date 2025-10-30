CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: net_salary sorting_names memory_management

net_salary: net_salary_calculator.c
	$(CC) $(CFLAGS) -o net_salary net_salary_calculator.c

sorting_names: sorting_names.c
	$(CC) $(CFLAGS) -o sorting_names sorting_names.c

memory_management: memory_management.c
	$(CC) $(CFLAGS) -o memory_management memory_management.c

clean:
	rm -f net_salary sorting_names memory_management

test: all
	@echo "Testing Net Salary Calculator:"
	@echo "250" | ./net_salary
	@echo "\nTesting Sorting Names:"
	@echo "asc" | ./sorting_names
	@echo "\nTesting Memory Management:"
	@./memory_management

.PHONY: all clean test