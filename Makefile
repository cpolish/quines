CC = gcc

TARGET = quine
TARGET_CAPITALISED = $(shell echo "$(TARGET)" | \
					   awk '{print toupper(substr($$0, 1, 1)) substr($$0, 2)}')

CFLAGS = -Wall -Werror -Wvla

.PHONY: c_quine clean

c_quine: $(TARGET).c
	$(CC) $(CFLAGS) $(TARGET).c -o $(TARGET)

java_quine: $(TARGET_CAPITALISED).java
	javac $(TARGET_CAPITALISED).java

run_java_quine: $(TARGET_CAPITALISED).class
	java $(TARGET_CAPITALISED)

clean:
	rm -f $(TARGET) *.class
