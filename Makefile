# удаление фалов и сборка 
all: clean setpixel.exe demo.exe

# Удаление файлов
clean:
	rm -rf demo setpixel setpixel.exe demo.exe *.err  *.o

# сборка приложения ддя DOS setpixel.exe с помащью компилятора wcc и линковщика wlink
setpixel.exe:
	wcc -i=/opt/openwatcom/h setpixel.c
	wlink system dos name setpixel.exe file setpixel.o

# сборка приложения ддя DOS demo.exe с помащью компилятора wcc и линковщика wlink	
demo.exe:
	wcc -i=/opt/openwatcom/h demo.c
	wlink system dos name demo.exe file demo.o
