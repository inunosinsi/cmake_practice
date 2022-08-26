# 通常の実行 
$ g++ main.cpp src/hoge.cpp   
$ ./a.out  

# cmakeの実行 CMakeLists.txtに記載あり
$ sudo apt install cmake
$ cmake -S . -B build
$ cmake --build build
