CC=gcc
CFLAGS=`pkg-config --libs --cflags clutter-x11-1.0` -Itray

all:
	$(CC) $(CFLAGS) main.c -o clutter-tray

main:
	$(CC) $(CFLAGS) -c main.c 

systray:
	$(CC) $(CFLAGS) -c shell-tray-manager.c 
