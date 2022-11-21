/*
** EPITECH PROJECT, 2022
** flag_a_simple
** File description:
** flag_a_simple
*/

#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "../include/my.h"

void flag_a_simple(int argc,char **argv)
{
    struct dirent *mat;
    DIR *der;

    if (2 < argc) {
        flag_a_simple2(argc,argv,mat,der);
        return;
    }
    if (1 <= argc) {
        der = opendir(".");

        while ((mat = readdir(der)) != NULL) {
            my_printf("%s\n", mat->d_name);
        }
    }
}

void flag_a_simple2(int argc,char **argv,struct dirent
*mat,DIR *der)
{
    for (int x = 2; x < argc; x++) {
        if (dir_f(argv[x], mat,der)) {
            my_printf("%s\n",argv[x]);
        }
        if (argv[x][0] != '-') {
            der = opendir(argv[x]);
        }
    flag_a_simple3(argc,argv,mat,der);
    }
}

void flag_a_simple3(int argc,char **argv,struct dirent
*mat,DIR *der)
{
    if (der != NULL) {
        while ((mat = readdir(der)) != NULL) {
            my_printf("%s\n", mat->d_name);
        }
    }
}
