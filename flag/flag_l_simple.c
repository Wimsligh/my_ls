/*
** EPITECH PROJECT, 2022
** flag_l_simple
** File description:
** flag_l_simple
*/

#include <dirent.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <pwd.h>
#include <grp.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "../include/my.h"

int permission(struct stat sb)
{
    my_putstr( (S_ISDIR(sb.st_mode)) ? "d" : "-");
    my_putstr( (sb.st_mode & S_IRUSR) ? "r" : "-");
    my_putstr( (sb.st_mode & S_IWUSR) ? "w" : "-");
    my_putstr( (sb.st_mode & S_IXUSR) ? "x" : "-");
    my_putstr( (sb.st_mode & S_IRGRP) ? "r" : "-");
    my_putstr( (sb.st_mode & S_IWGRP) ? "w" : "-");
    my_putstr( (sb.st_mode & S_IXGRP) ? "x" : "-");
    my_putstr( (sb.st_mode & S_IROTH) ? "r" : "-");
    my_putstr( (sb.st_mode & S_IWOTH) ? "w" : "-");
    my_putstr( (sb.st_mode & S_IXOTH) ? "x" : "-");
}

void time_format(char *time)
{
    time[16] = '\0';
    time = time + 4;
    my_printf("%s ", time);
}

int flag_l_simple_2(struct stat sb,struct dirent *heo,
DIR *dir,char *path)
{
    if (heo->d_name[0] != '.') {
        stat(heo->d_name, &sb);
        struct passwd *pwd = getpwuid(sb.st_uid);
        struct group *grp = getgrgid(sb.st_gid);
        permission(sb);
        my_putchar(' ');
        my_printf("%d",sb.st_nlink);
        my_putchar(' ');
        my_printf("%s",pwd->pw_name);
        my_putchar(' ');
        my_printf("%s",grp->gr_name);
        my_putchar(' ');
        my_printf("%d",sb.st_size);
        my_putchar(' ');
        time_format(ctime(&sb.st_mtime));
        my_putchar(' ');
        my_printf("%s",heo->d_name);
        my_putchar('\n');
    }
}

int display_block(char *path)
{
    struct stat sb;
    struct dirent *heo;
    int block = 0;
    DIR *dir = opendir(path);

    while ((heo = readdir(dir)) != NULL) {
        if ((stat(heo->d_name, &sb)) == 0 && heo->d_name[0] != '.') {
            block = block + sb.st_blocks;
        }
    }
    my_printf("total %d\n",block);
}

int flag_l_simple(char *path)
{
    struct stat sb;
    struct dirent *heo;
    DIR *dir = opendir(path);

    if (dir != NULL) {
        display_block(path);
        while ((heo = readdir(dir)) != NULL) {
            flag_l_simple_2(sb,heo,dir,path);
        }
    }
}
