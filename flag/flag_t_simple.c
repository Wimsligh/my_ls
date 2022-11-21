/*
** EPITECH PROJECT, 2022
** flag_t
** File description:
** flag_t
*/

#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "../include/my.h"

void flag_t_simple_5(int argc,char **argv,
struct dirent *mat, DIR *der)
{
    while ((mat = readdir(der)) != NULL) {
        if (mat->d_name[0] != '.') {
            my_printf("%s\n", mat->d_name);
        }
    }
}

void flag_t_simple_4(int argc,char **argv,
struct dirent *mat, DIR *der)
{
    if (der != NULL) {
        flag_t_simple_5(argc,argv,mat,der);
    }
}

void flag_t_simple_3(int argc,char **argv,
struct dirent *mat, DIR *der)
{
    for (int e = 2; e < argc ;e++) {
        if (dir_f(argv[e], mat,der)) {
            my_printf("%s\n", argv[e]);
        }
        if (argv[e][0] != '-') {
            der = opendir(argv[e]);
        }
    flag_t_simple_4(argc,argv,mat,der);
    }
}

void flag_t_simple_2(int argc,char **argv,
struct dirent *mat, DIR *der)
{
    if (mat->d_name[0] != '.') {
        my_printf("%s\n", mat->d_name);
    }
    return;
}

void flag_t_simple(int argc,char **argv)
{
    struct dirent *mat;
    DIR *der;
    der = opendir(".");
    if (argc >= 3) {
        flag_t_simple_3(argc,argv,mat,der);
    }
    if (argc == 2) {
        while ((mat = readdir(der)) != NULL) {
            flag_t_simple_2(argc,argv,mat,der);
        }
    }
}
