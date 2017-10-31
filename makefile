all: stat_hw.c
	gcc stat_hw.c
run: all
	./a.out