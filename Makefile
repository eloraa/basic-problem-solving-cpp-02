CC := g++
CFLAGS := -Wall -std=c++11
SRC := solution.cpp

build_and_run:
	@if [ -n "$(folder)" ]; then \
		cd "$(folder)" && $(MAKE) -s && ./exc && $(MAKE) clean -s || echo "Error: No 'exc' executable found in $(folder)"; \
	else \
		echo "Error: Please provide a valid folder name using 'make build_and_run folder=folder_name'"; \
	fi

clean:
	@if [ -n "$(folder)" ]; then \
		cd "$(folder)" && $(MAKE) clean -s; \
	else \
		echo "Error: Please provide a valid folder name using 'make clean folder=folder_name'"; \
	fi

all: build_and_run

.PHONY: all build_and_run clean
