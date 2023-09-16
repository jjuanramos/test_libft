#!/bin/bash

cd ../libft
echo "1. make all: Execute make to create the library"
echo ""
make all
echo ""
echo "2. Execute test_libft.c, testing all custom functions against the originals."
cd ../test_libft
gcc test_libft.c -L../libft -lft -o test_libft # https://dev.to/iamkhalil42/all-you-need-to-know-about-c-static-libraries-1o0b
./test_libft
echo ""
echo "3. make fclean: remove objects as well as library"
echo ""
rm test_libft
cd ../libft
make fclean
