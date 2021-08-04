all:
	gcc -shared -fPIC -o libpetest.so petest.c
# escreva make para rodar a linha acima
clean:
	rm -f lipetest.so

install:
	install -m 0644 libpetest.so /usr/lib/libpetest.so

uninstall:
	rm -f /usr/lib/libpetest.so
