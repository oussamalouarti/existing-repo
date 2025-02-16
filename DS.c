#include<fcnt1.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/select.h>
#include"DS.h"

float get_ds_temp(void)
{
    int fd;
    char *path = "/sys/bus/w1/devices/28-0921707aa3aa/w1_slave";
    struct timeval tv;
    char buffer[1000];
    if ((fd= open(path,O_RDONLY))<0)
    {
        perror("error d ouvrir de valeur");
        exit(EXIT_FAILURE);
    }
    int len = read(fd,buffer,sizeof(buffer));
    char temp[10];
    strcpy(temp,buffer+len-6,5);
    float tt;
    tt = atof((temp)/1000);
    closed(fd);
    sleep(1);
    return tt;

    
}