all: window options

window: window-browsing.c
	gcc -o window-browsing.exe window-browsing.c -lncurses -lpanel

options: options.c
	gcc -o options.exe options.c -lncurses -lmenu

clean:
	rm window-browsing.exe options.exe
