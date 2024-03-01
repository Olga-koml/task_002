#!/bin/bash

# Копирование файла .clang-format в текущую директорию
cp clang/.clang-format .

# Проверка стиля для файлов с расширением .c в директории src
if [ -n "$(clang-format -output-replacements-xml -n -style=file src/*.c)" ]; then
    echo "Code style issues found in .c files. Please run clang-format to fix them."
    exit 1
fi

# Проверка стиля для файлов с расширением .h в директории src
if [ -n "$(clang-format -output-replacements-xml -n -style=file src/*.h)" ]; then
    echo "Code style issues found in .h files. Please run clang-format to fix them."
    exit 1
fi

echo "Code style check passed."
exit 0