/*
** EPITECH PROJECT, 2022
** Dir
** File description:
** Dir
*/

#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "include/my.h"
#include <errno.h>

int dir_f(const char* Path,struct dirent *mat,DIR *der)
{
    struct stat sb;
    stat(Path, &sb);

    if (stat(Path, &sb) == -1) {
        if (Path[0] != '-') {
            write(2,"ls: ",4);
            perror(Path);
        }
    }
    return S_ISREG(sb.st_mode);
}
