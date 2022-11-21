/*
** EPITECH PROJECT, 2022
** printf
** File description:
** my.h
*/
#include <stdarg.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <sys/stat.h>

#ifndef MY_H_
    #define MY_H_
int my_printf(const char *, ...);
int dir_f (const char* Path,struct dirent *mat,DIR *der);
void flag_a_simple2(int argc,char **argv,struct dirent
*mat,DIR *der);
int my_ls_arg_2(int argc, char **argv,struct dirent
*mat,DIR *der);
void flag_a_simple3(int argc,char **argv,struct dirent
*mat,DIR *der);
int my_ls_arg_3(int argc, char **argv,struct dirent
*mat,DIR *der);
void flag_t_simple(int argc,char **argv);
void flag_t_simple_2(int argc,char **argv,
struct dirent *mat, DIR *der);
void flag_t_simple_3(int argc,char **argv,
struct dirent *mat, DIR *der);
void flag_t_simple_4(int argc,char **argv,
struct dirent *mat, DIR *der);
void flag_t_simple_5(int argc,char **argv,
struct dirent *mat, DIR *der);
int flag_l_simple(char *path);
void time_format(char *time);
int permission(struct stat sb);
int flag_l_simple_2(struct stat sb,struct dirent *heo,
DIR *dir,char *path);
int display_block(char *path);
int my_ls_base(struct dirent *heo, DIR *mat);
int flag_check(int argc, char **argv, struct dirent *ent,DIR *rep);
int my_ls_arg_1(int argc, char **argv,
struct dirent *mat,DIR *der);
void flag_check_2(int argc, char **argv, int x);
void flag_a_simple(int argc,char **argv);
void flag_d_simple(int argc, char **argv);
int my_ls(int, char **);
int my_printf_2(int,va_list, const char *, int);
void my_putchar(char);
int my_strlen(char const *str);
int my_putstr(char const *);
int my_digit(char const my_char);
int flag_a_maj(va_list,int);
int flag_p(va_list,int);
int flag_n(va_list,int,char * str);
int flag_b(va_list,int);
int flag_s_maj(va_list,int);
int flag_e(va_list,int);
int flag_e_maj(va_list,int);
int flag_g(va_list,int);
int flag_g_maj(va_list,int);
int flag_a(va_list,int);
int flag_s(va_list,int);
int flag_c(va_list,int);
int flag_i(va_list,int);
int flag_d(va_list,int);
int flag_pr(va_list,int);
int flag_u(va_list,int);
int flag_o(va_list,int);
int flag_x(va_list,int);
int flag_x_maj(va_list,int);
int flag_f(va_list,int);
int flag_f_maj(va_list,int);
int my_put_bin(unsigned, int);
int my_put_float(double);
int my_put_hexa_float(double);
int my_put_hexa_maj(unsigned);
int my_put_hexa_min(unsigned);
int my_put_nbr(int, int, int);
int my_put_nbr_count(int,int, int);
int my_digit(char const);
int my_put_octet(unsigned);
int get_precision(const char *, int, va_list);
int get_precision_star(const char *,va_list,int,int);
int my_put_pointer(int);
char *my_str_min(char *);
int my_put_scientific_maj(double);
int my_put_scientific_min(double);
int my_put_short_maj(double);
int my_put_short_min(double);
int my_put_str_s(char const *);
int my_put_unsigned(unsigned);
int tableau(va_list,const char *,int,int);

#endif /* !MY_H_ */
