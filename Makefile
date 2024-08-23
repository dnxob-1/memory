# Define the compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -O2

# Define the target executable
TARGET = run

# Define the source files and object files
SRCS = main.c optionsGive.c logForMem.c rerun.c memoryChange.c
OBJS = $(SRCS:.c=.o)

# Default target
all: $(TARGET)

# Rule to link the object files into the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and executable
clean:
	rm -f $(OBJS) $(TARGET)
