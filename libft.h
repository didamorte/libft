/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:38:20 by diogribe          #+#    #+#             */
/*   Updated: 2024/10/28 12:26:06 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

/* PARTE 1 */
/*Checa se eh letra*/
int		ft_isalpha(int c);
/*Checa se eh numero*/
int		ft_isdigit(int c);
/*Checa se eh letra ou numero*/
int		ft_isalnum(int c);
/*Checa se eh caracter ascii*/
int		ft_isascii(int c);
/*Checa se eh printavel*/
int		ft_isprint(int c);

/*Retorna o tamanho da string*/
size_t	ft_strlen(const char *s);
/*Prenche um array com um unico caracter*/
void	*ft_memset(void *s, int c, size_t n);
/*Zera um array*/
void	ft_bzero(void *s, size_t n);
/*Copia de uma array para outra sem sobrepor*/
void	*ft_memcpy(void *dest, const void *src, size_t n);
/*Copia de uma array para outra podendo sobrepor*/
void	*ft_memmove(void *dest, const void *src, size_t n);
/*Copia de uma string para outra retornando o tamanho da string criada*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
/*Concatena duas strings retornando o tamanho da string criada*/
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/*Passa caracter a maiuscula*/
int		ft_toupper(int c);
/*Passa caracter a minuscula*/
int		ft_tolower(int c);
/*procura um caracter numa string*/
char	*ft_strchr(const char *s, int c);
/*procura um caracter numa string*/
char	*ft_strrchr(const char *s, int c);
/*compara 2 strings em n caracteres*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/*procura um caracter num array*/
void	*ft_memchr(const void *s1, int c, size_t n);
/*compara 2 arrays em n caracteres*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/*procura por little em n carateres de big*/
char	*ft_strnstr(const char *big, const char *little, size_t len);
/*passa string a inteiro*/
int		ft_atoi(const char *nptr);

/*aloca memoria dinamica*/
void	*ft_calloc(size_t nmemb, size_t size);
/*duplica uma string alocando memoria pra ela*/
char	*ft_strdup(const char *s);

/* PARTE 2 */

/*Put number num file descriptor*/
void	ft_putnbr_fd(int nb, int fd);
/*escreve um \n no final de uma string ou file*/
void	ft_putendl_fd(char *s, int fd);
/*escreve uma string*/
void	ft_putstr_fd(char *s, int fd);
/*escreve um caracter*/
void	ft_putchar_fd(char c, int fd);
/*aplica uma funcao a todos os caracters da string*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
/*aplica uma funcao a todos os caracters da string alocando a string criada*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/*passa um int para string*/
char	*ft_itoa(int n);
#endif