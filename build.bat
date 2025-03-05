@echo off

:: Переменные, хранящие тип сборки и суффикс для названия папок
set BUILD_TYPE=Ninja
set BUILD_SUFFIX=ninja

:: Локализация
chcp 65001

:: Папки
set BUILD_FOLDER=build_%BUILD_SUFFIX%
set SOURCE_FOLDER=projects

:: Создать папку с проектом, если её не существует
if not exist %BUILD_FOLDER% mkdir %BUILD_FOLDER%

:: Переход в директорию
cd %BUILD_FOLDER%

:: Сборка
cmake -G %BUILD_TYPE% ..\%SOURCE_FOLDER%
cmake --build .

copy ..\%SOURCE_FOLDER%\obychaika\run_obychaika.bat .\obychaika
copy ..\%SOURCE_FOLDER%\merge_sort\run_merge_sort.bat .\merge_sort

:: На случай ошибки ошибки ошибки аааааааа
pause