$ gcc read-file.c -o read-file-c
$ ./read-file-c

$ g++ read-file.cpp -o read-file-cpp
$ ./read-file-cpp


The math library must be linked in when building the executable.
The math library is named libm.so, and the -l command option assumes a lib prefix and .a or .so suffix.
$ gcc write-file.c -o write-file-c -lm

g++ write-file.cpp -o write-file-cpp
1
12
123
1234
12345
123456
0