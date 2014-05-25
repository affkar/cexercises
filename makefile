all: clean reverse helloalagu hello multiplication pointers rightisoscelestriangle    sidewaystriangle  rightsideuptriangle linkedlist bubblesort
multiplication:
helloalagu:
hello:
reverse:
rightisoscelestriangle:
rightsideuptriangle:
	gcc -g rightsideuptriangle.c -o rightsideuptriangle
clean:
	-rm -r hello helloalagu multiplication reverse rightisoscelestriangle  pointers sidewaystriangle rightsideuptriangle linkedlist bubblesort

.PHONY: clean 
