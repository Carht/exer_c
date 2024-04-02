all: concat_str leng_str variable_strings

concat_str: concat_str.c
	gcc -o concat_str concat_str.c

leng_str: leng_str.c
	gcc -o leng_str leng_str.c

variable_strings: variable_strings.c
	gcc -o variable_strings variable_strings.c

clean:
	rm -f concat_str
	rm -f leng_str
	rm -f variable_strings
