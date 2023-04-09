CC = gcc

TARGET = quine

CFLAGS = -Wall -Werror -Wvla

.PHONY: c_quine clean

c_quine: $(TARGET).c
	$(CC) $(CFLAGS) $(TARGET).c -o $(TARGET)

clean:
	rm -f $(TARGET)
