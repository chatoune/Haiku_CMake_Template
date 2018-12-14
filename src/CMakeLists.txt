add_library(dynamic SHARED dynamic.cpp)
add_library(static static.cpp)


# Add Haiku specific library
find_library(libbe libbe.so PATH /boot/system/lib)
find_library(libroot libroot.so PATH /boot/system/lib)
find_library(localestub liblocalestub.a PATH /boot/system/develop/lib)

add_executable(template template.cpp)
	
target_link_libraries(template dynamic static)
target_link_libraries(template ${localestub})
target_link_libraries(template ${libbe} ${libroot})
