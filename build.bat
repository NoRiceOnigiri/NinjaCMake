@echo off
setlocal EnableDelayedExpansion
chcp 65001


:: [Переменные]

:: Тип сборки и суффикс для названия папок
set BUILD_TYPE=Ninja
set BUILD_SUFFIX=ninja
:: Папки
set BUILD_FOLDER=build_%BUILD_SUFFIX%
set SOURCE_FOLDER=projects


:: [Сборка]

:: Создать папку с проектом, если её не существует
if not exist %BUILD_FOLDER% mkdir %BUILD_FOLDER%
:: Переход в директорию сборки
cd %BUILD_FOLDER%
:: Запуск сборки
cmake -G %BUILD_TYPE% ..\%SOURCE_FOLDER%
cmake --build .


:: [Копирование батников для запуска программ]

:: Массив каталогов, в которые нужно скопировать батник для запуска соответствующего exe-шника
set arr[0].folder=menu
set arr[1].folder=merge_sort
:: Массив батников
set arr[0].file=run_menu.bat
set arr[1].file=run_merge_sort.bat
:: Само копирование
for /L %%i in (0, 1, 1) do (
	copy ..\%SOURCE_FOLDER%\!arr[%%i].folder!\!arr[%%i].file! .\!arr[%%i].folder!
)


:: [Тесты]
:: Копирование скрипта для запуска тестов
copy ..\run_tests.bat .


:: [Непредвиденное]
:: На случай ошибки, святая команда
pause