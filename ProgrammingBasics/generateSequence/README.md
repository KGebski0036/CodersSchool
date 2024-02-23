# Generate sequence

Create a vector that a `count` size vector that contain a sequence where each number is grater by `step`.

## How to build

*When you are in `generateSequence` directory.*

```bash
mkdir build
cd build
cmake ..
make
./generateSequence
GTEST_COLOR=1 ctest -V
```
or replace last command with
```
ctest
```
for simpler output

