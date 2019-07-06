### src folder ###

# create library "libtools"
add_library(tere tere.cpp)
add_library(mina mina.cpp)

# add executable main
add_executable(main main.cpp)

# tell the linker to bind these objects together
target_link_libraries(main tere mina)

