ifeq ($(OS), Windows_NT)
    # Windows-specific settings
    CC = gcc
    RM = del /f
    TARGET = practice-questions.exe
else
    # Linux/macOS settings
    CC = gcc
    RM = rm -f
    TARGET = practice-questions
endif

CFLAGS = -Wall -Wextra -std=c99
SOURCES = practice-questions.c mystd.c da104-examples.c da104-fy2024-examples.c da104-fy2025-examples.c da104-fy2024-npt01-examples.c da104-fy2024-pt01-examples.c da104-fy2024-npt02-examples.c da104-fy2024-pt02-examples.c
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS) $(TARGET)