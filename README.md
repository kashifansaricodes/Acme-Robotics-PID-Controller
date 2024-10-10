## Part1:

Driver: Kashif Ansari

Navigator: Piyush Goenka

## Part 2:

 Driver: Kshitij Aggarwal

 Navigator: Bhavana Rao

![CICD Workflow status](https://github.com/kashifansaricodes/Acme-Robotics-PID-Controller/actions/workflows/run-unit-test-and-upload-codecov.yml/badge.svg) [![codecov](https://codecov.io/gh/TommyChangUMD/cpp-boilerplate-v2/branch/main/graph/badge.svg)](https://codecov.io/gh/TommyChangUMD/cpp-boilerplate-v2) [![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)

## Overview

Simple starter C++ project with:

- CMake
- GoogleTest

## Standard install via command-line
```bash
# Download the code:
  git clone https://github.com/TommyChangUMD/cpp-boilerplate-v2
  cd cpp-boilerplate-v2
# Configure the project and generate a native build system:
  # Must re-run this command whenever any CMakeLists.txt file has been changed.
  cmake -S ./ -B build/
# Compile and build the project:
  # rebuild only files that are modified since the last build
  cmake --build build/
  # or rebuild everything from scracth
  cmake --build build/ --clean-first
  # to see verbose output, do:
  cmake --build build/ --verbose
# Run program:
  ./build/app/shell-app
# Run tests:
  cd build/; ctest; cd -
  # or if you have newer cmake
  ctest --test-dir build/
# Build docs:
  cmake --build build/ --target docs
  # open a web browser to browse the doc
  open docs/html/index.html
# Clean
  cmake --build build/ --target clean
# Clean and start over:
  rm -rf build/
```


## Results

### UML class and activity diagrams are in /UML/ directory. 
### Cpplint. clang-tidy and test case results are in /Results/ directory.
