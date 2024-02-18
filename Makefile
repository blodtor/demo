# удаление фалов и сборка 
all: clean demo.exe demo setpixel.exe

# Удаление файлов
clean:
	rm -rf demo setpixel setpixel.exe demo.exe *.err  *.o

# сборка приложения для DOS setpixel.exe с помащью компилятора wcc и линковщика wlink и запуск в dosbox-x 
setpixel.exe:
	wcc -i=/opt/openwatcom/h setpixel.c
	wlink system dos name setpixel.exe file setpixel.o
	dosbox-x -conf dosbox.conf

# сборка приложения для DOS demo.exe с помащью компилятора wcc и линковщика wlink	
demo.exe:
	wcc -i=/opt/openwatcom/h demo.c
	wlink system dos name demo.exe file demo.o

# сборка приложения demo для Linux с помащью компилятора gcc
demo:
	gcc -o demo demo.c


