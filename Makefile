CC = gcc
CFLAGS = -std=c99
TARGET = a.out

$(TARGET): main.c
	$(CC) $(CFLAGS) $^ -o $(@)
	
test: $(TARGET)
	@./a.out < ${input} > output.txt
#	@ls -lsa
#	@echo "$(<output.txt)"
	@if diff output.txt ${expect} > /dev/null; then echo "test: OK"; else echo "test: NG"; echo "output:"; cat output.txt; exit 1; fi

clean:
	rm -f output.txt $(TARGET)
