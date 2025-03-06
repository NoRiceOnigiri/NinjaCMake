@echo off
chcp 65001

:: Утилита CMake для тестов, флаги для подробного вывода результатов теста. 
ctest -j N --output-on-failure