name: Linux C/C++ CI

on:
  push:
    branches: [ master ]
  pull_request:
    branches: [ master ]

jobs:
  build:

    runs-on: ubuntu-latest

    steps:
    - uses: actions/checkout@v2
    - name: build
      run: gcc hello.c -o hello.exe
    - name: Run
      run: ./hello.exe
