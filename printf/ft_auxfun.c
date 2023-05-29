#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

char ft_printchar(int c) {
  int i;

  i = 0;
  write(1, &c, 1);
  i += 1;
  return (i);
}

void ft_putstr(char *s) {
  int i;

  i = 0;
  while (s[i]) {
    ft_printchar(s[i]);
    i++;
  }
}

int ft_putpercent(void) {
  return (ft_printchar('%'));
  return (1);
}

int ft_printstr(char *s) {
  int i;

  if (!s) {
    ft_putstr("(null)");
    return (6);
  }
  i = 0;
  while (s[i]) {
    ft_printchar(s[i]);
    i++;
  }
  return (i);
}

int ft_printnbr(int n) {
  int len;
  char *nbr;
  long long ln;

  len = 0;
  ln = n;
  if (ln < 0 && ln != -2147483648) {
    len += ft_printchar('-');
    ln *= -1;
  }
  if (ln == -2147483648) {
    ft_printstr("-2147483648");
    return (11);
  }
  nbr = ft_itoa(ln);
  len += ft_printstr(nbr);
  free(nbr);
  return (len);
}

int ft_nbrlen(unsigned int n, unsigned int base) {
  int count;

  count = 0;
  while (n) {
    count++;
    n /= base;
  }
  return (count);
}

char *ft_uitoa(unsigned int n) {
  char *str;
  int i;

  i = ft_nbrlen(n, 10);
  str = (char *)malloc(sizeof(char) * (i + 1));
  if ((!str))
    return (NULL);
  str[i--] = '\0';
  while (n) {
    str[i--] = n % 10 + '0';
    n /= 10;
  }
  return (str);
}

int ft_printuns(int n) {
  int len;
  unsigned long int nb;
  char *nbr;

  nb = (unsigned long int)n;
  len = 0;
  if (nb == 0) {
    ft_printchar('0');
    return (1);
  }
  // printf(" valor de nb quanto esta %u\n",nb);
  nbr = ft_uitoa(nb);
  // printf("%s valor de nbr pos itoa", nbr);
  len += ft_printstr(nbr);
  return (len);
}

void ft_gethex(unsigned long long n) {
  // char *hex[16]
  // hex = "0123456789abcdef"
  if (n >= 16) {
    ft_gethex(n / 16);
    ft_gethex(n % 16);
  } else {
    if (n <= 9)
      ft_printchar(n + '0');
    else
      ft_printchar(n - 10 + 'a');
  }
}

int ft_adress_len(unsigned long long n) {
  int count;

  count = 0;
  while (n) {
    count++;
    n /= 16;
  }
  return (count);
}

int ft_printadress(unsigned long long n) {
  int len;

  len = 0;
  if (n == 0)
    len += ft_printstr("(nil)");
  else {
    ft_putstr("0x");
    len += 2;
    ft_gethex(n);
    len += ft_adress_len(n);
  }
  return (len);
}

int ft_printhex_lower(int n) {
  int len;

  len = 0;
  ft_gethex(n);
  len += ft_adress_len(n);
  return (len);
}
