all: clean reverse helloalagu hello multiplication pointers rightisoscelestriangle    sidewaystriangle  rightsideuptriangle linkedlist checkprime
multiplication:
helloalagu:
hello:
reverse:
rightisoscelestriangle:
rightsideuptriangle:
	gcc -g rightsideuptriangle.c -o rightsideuptriangle
clean:
	-rm -r hello helloalagu multiplication reverse rightisoscelestriangle  pointers sidewaystriangle rightsideuptriangle linkedlist checkprime

.PHONY: clean


