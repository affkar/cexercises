all: clean reverse helloalagu hello multiplication pointers rightisoscelestriangle    sidewaystriangle  rightsideuptriangle linkedlist 
multiplication:
helloalagu:
hello:
reverse:
rightisoscelestriangle:
rightsideuptriangle:
	gcc -g rightsideuptriangle.c -o rightsideuptriangle
clean:
	-rm -r hello helloalagu multiplication reverse rightisoscelestriangle  pointers sidewaystriangle rightsideuptriangle linkedlist 

.PHONY: clean 
