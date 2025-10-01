# login-reward-calculation
Hàm phục vụ bài tập kiểm thử chức năng - INT3117 1

git clone https://github.com/google/googletest.git
cd googletest
cmake .
cmake --build .

cd ra folder chứa file test.cpp
g++ -std=c++17 test.cpp -I"googletest/googletest/include" -L"googletest/lib" -lgtest -lgtest_main -pthread -o test
.\test.exe