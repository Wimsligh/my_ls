/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "include/my.h"

int main(int argc, char **argv)
{
    if (my_ls(argc,argv) == 84)
        return (84);
    return (0);
}
