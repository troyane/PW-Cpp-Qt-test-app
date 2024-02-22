cmake_minimum_required(VERSION 3.14)

project(PW-Cpp-Qt-test-app LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(REPO_ROOT ${PROJECT_SOURCE_DIR}/../)

set(ADDITIONAL_FILES ${REPO_ROOT}/README.md
  ${REPO_ROOT}/.github/workflows/super-linter.yml
  ${REPO_ROOT}/.gitignore
  .clang-format
)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(PW-Cpp-Qt-test-app
  main.cpp
  ${ADDITIONAL_FILES}
  ../.github/workflows/super-linter-full.yml
)
target_link_libraries(PW-Cpp-Qt-test-app Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS PW-Cpp-Qt-test-app
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
