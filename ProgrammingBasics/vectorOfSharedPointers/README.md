# Vector of shared pointers

Operation of subtraction and addition to ints stored by vector of shared pointers to int.

## How to build

*When you are in `vectorOfSharedPointers` directory.*

```bash
mkdir build
cd build
cmake ..
make
./vectorOfSharedPointers
GTEST_COLOR=1 ctest -V
```
or replace last command with
```
ctest
```
for simpler output

