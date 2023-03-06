# ft_printf

> You will discover a popular and versatile C function: printf(). This exercise is a great opportunity to improve your programming skills. It is of moderate difficulty.

## Score

<img width="200px" alt="score" src="https://res.cloudinary.com/dk8lnfjpm/image/upload/v1678098224/42/100_100_mep29n.png" />

## Mandatory part

| Program name    | Prototype                         | Description                                                                                 |
|:---------------:|:---------------------------------:|:-------------------------------------------------------------------------------------------:|
| `libftprintf.a` | int ft_printf(const char *, ...); | Write a library that contains ft_printf(), a function that will mimic the original printf() |

You have to implement the following conversions:

- `%c` Prints a single character.

- `%s` Prints a string (as defined by the common C convention).

- `%p` The void * pointer argument has to be printed in hexadecimal format.

- `%d` Prints a decimal (base 10) number.

- `%i` Prints an integer in base 10.

- `%u` Prints an unsigned decimal (base 10) number.

- `%x` Prints a number in hexadecimal (base 16) lowercase format.

- `%X` Prints a number in hexadecimal (base 16) uppercase format.

- `%%` Prints a percent sign.
