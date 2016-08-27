#include <stdio.h>
#include <fcntl.h>

enum {LED_OFF,LED_ON};
enum {LED0,LED1,LED2,LED3}
int main(void)
{
	int fd;
	in cmd,arg;
	fd = open("/dev/leddrv0",O_PDWR);
	if(fd < 0)
	{
		perror("open led fail\n");
		return 1;
	}
	while(1){
		
		ioctl(fd,LED_ON,LED0);
		sleep(1);
		
		ioctl(fd,LED_OFF,LED0);
		sleep(1);
	}
}
