#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
#include<stdlib.h>
#include<linux/ioctl.h>

#include"ioctl.h"

int main()
{
	int fd;
	char d;
	int res;
	struct stats udata;
	fd=open("/dev/MyCharDevice",O_RDWR,0777);
	if(fd<0)
	{
		printf("\n Error opening device");
		exit(1);
	}
	printf("\nTo generate STATUS enter y:");
	scanf("%c",&d);
	if(d=='y')
	{
		res=ioctl(fd,GETSTATS,&udata);
		/* printf("%d",udata.size); */
		printf("\nuse sudo dmesg to see status\n");
		return 0;
	}
	else
	{
		printf("\n Application closed");
	}
	close(fd);
	return 0;
}
