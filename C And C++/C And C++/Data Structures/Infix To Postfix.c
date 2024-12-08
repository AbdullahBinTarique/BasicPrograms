// Infix to postfix CODE NEEDS CORRECTION //   

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define ascii(a) (((a >= (char)(97)) && (a <= (char)(122))) || ((a >= (char)(65)) && (a <= (char)(90))))

void push(char *x, char *y, int a)
{ //

  x[strlen(x)] = y[a];
  x[strlen(x) + 1] = '\0';
}

void pop(char *p)
{ //

  // printf("%cad", p[strlen(p)-1]);
  p[strlen(p) - 1] = '\0';
}

int pres(char p)
{ //

  if (p == ('+') || p == ('-'))
    return 0;
  else if (p == ('*') || p == ('/') || p == ('^') || p == ('%'))
    return 1;
  else if (p == ('('))
    return 2;
}

int prev(char *p)
{

  if (p[strlen(p) - 1] == '+' || p[strlen(p) - 1] == '-')
    return (0);
  else if (p[strlen(p) - 1] == '*' || p[strlen(p) - 1] == '/' || p[strlen(p) - 1] == '^' || p[strlen(p) - 1] == '%')
    return 1;
  else if (p[strlen(p) - 1] == ('('))
    return 2;
}
int isempty(char *p)
{
  if (p[0] == '\0')
    return 1;
  else
    return 0;
}
int main()
{
  char *exp = (char *)malloc(10 * sizeof(char));
  char *stack = (char *)calloc(10, sizeof(char));
  char *outp = (char *)calloc(10, sizeof(char));
  puts("Enter The Expression");
  gets(exp);
  int a = 0;
  for (; a < strlen(exp); a++)
  {
    if (ascii(exp[a]))
    {
      push(outp, exp, a);
    }
    else if (isempty(stack))
    {
      push(stack, exp, a);
    }

    else if ((pres(exp[a]) == 1 && prev(stack) == 0) || (pres(exp[a]) == 1 && prev(stack) == 1) || (pres(exp[a]) == 0 /* + or -*/ && prev(stack) == 0))
      push(stack, exp, a);
    else if ((pres(exp[a]) == 0 && prev(stack) == 2) || (pres(exp[a]) == 1 && prev(stack) == 2)||(prev(stack)==1&&pres(exp[a])==2))
    
      push(stack, exp, a);

    

    else if (exp[a] == ')')
    {
      push(outp, stack, strlen(stack) - 1);
      pop(stack);
      if (stack[strlen(stack) - 1] == '(')
      {
        a++;
        pop(stack);
      }
      a--;
    }

    else if (pres(exp[a]) == 0 && prev(stack) == 1)
    {
      push(outp, stack, strlen(stack) - 1);
      pop(stack);
      a--;
    }

    if (a == (strlen(exp) - 1))
    {
      int b = strlen(stack);
      while (b != 0)
      {
        if (stack[strlen(stack) - 1] == ')')
          pop(stack);
        push(outp, stack, b - 1);
        pop(stack);
        b--;
      }
    }
  }
  puts("your postfix is ");
  puts(outp);

  return 0;
}