@echo off

:: Переменные, хранящие тип сборки и суффикс для названия папок
set BUILD_TYPE=Ninja
set BUILD_SUFFIX=ninja

:: Локализация
chcp 65001

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

:: Копирование батников для запуска программ
copy ..\%SOURCE_FOLDER%\obychaika\run_obychaika.bat .\obychaika
copy ..\%SOURCE_FOLDER%\merge_sort\run_merge_sort.bat .\merge_sort


:: [Гугл-тесты]
:: Массив батников
set arr[0].file=run_obychaika.bat
set arr[1].file=run_merge_sort.bat
:: Массив каталогов, в которые нужно скопировать батник для запуска соответствующего exe-шника
set arr[0].folder=obychaika
set arr[1].folder=merge_sort

:: Копирование 
for /L %%i in (0, 1, 1) do (
	copy ..\%SOURCE_FOLDER%\!arr[%%i].file! .\!arr[%%i].folder!
)

:: Копирование скрипта для запуска тестов
copy ..\run_tests.bat .


:: [Непредвиденное]
:: На случай ошибки ошибки ошибки аааааааа
pause