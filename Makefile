CC = gcc
CFLAGS = -Wall -Wextra -O2

TARGET = run

SRCS = main.c optionsGive.c logForMem.c rerun.c memoryChange.c
OBJS = $(SRCS:.c=.o)

# Default target
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
