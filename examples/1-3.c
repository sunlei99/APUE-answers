#include "/home/sunlei/apue.2e/include/apue2.h"

int
main(void){
	int c;
	while((c = getc(stdin)) != EOF)
		if (putc(c, stdout) == EOF)
			err_sys("write error");
	if(ferror(stdin))
		err_sys("read error");

	exit(0);
}
		

