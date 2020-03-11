## Installation and Example Usage (target program: test-instr):
1. Download and install american fuzzy lop (afl): http://lcamtuf.coredump.cx/afl/

You can find installation and usage instructions under "./docs" folder of AFL, or instructions [here](https://github.com/mykter/afl-training/tree/master/quickstart) might also be helpful.

(Installation instructions copied from the link above)

- Install dependencies:
    ```console
    $ sudo apt-get install clang-6.0 build-essential llvm-6.0-dev gnuplot-nox
    ```
- Work around some Ubuntu annoyances
    ```console
    $ sudo update-alternatives --install /usr/bin/clang clang `which clang-6.0` 1
    $ sudo update-alternatives --install /usr/bin/clang++ clang++ `which clang++-6.0` 1
    $ sudo update-alternatives --install /usr/bin/llvm-config llvm-config `which llvm-config-6.0` 1
    $ sudo update-alternatives --install /usr/bin/llvm-symbolizer llvm-symbolizer `which llvm-symbolizer-6.0` 1
    ```
- Make system not interfere with crash detection:
    ```console
    $ echo core | sudo tee /proc/sys/kernel/core_pattern
    ```
- Get, build, and install afl:
    ```console
    $ wget http://lcamtuf.coredump.cx/afl/releases/afl-latest.tgz
    $ tar xvf afl-latest.tgz
    $ cd afl-2.52b   # replace with whatever the current version is
    $ make && make -C llvm_mode CXX=g++
    $ make install
    ```

2. Compile the test-instr program to be fuzzed using afl-gcc.
```console
foo@bar:~/path_to_this_project$ CC=afl-gcc make clean all
```
Note: make sure the Makefile is correctly set up for the target program.

3. Test it:
```console
foo@bar:~/path_to_this_project$ ./test-instr
0
Looks like a zero to me!
```

4. Put a small but valid input file for the test-instr program under "seeds/test-instr_inputs" folder

5. Since all example programs provided reads input from stdin, we can run afl like this:
```console
foo@bar:~/path_to_this_project$ afl-fuzz -i seeds/test-instr_inputs -o out ./test-instr
```
For programs that read files as input, refer to http://lcamtuf.coredump.cx/afl/QuickStartGuide.txt. To undestand the status screen of AFL, refer to http://lcamtuf.coredump.cx/afl/status_screen.txt.

## Target programs provided:
1. test-instr.c
2. get_sign.c
3. regexp.c
