# Length sort

It is an insertion sort from forward_list to deque. It sort elements based on length of string and
if it is equal it sort Lexicographically.

## How to build

*When you are in `lengthSort` directory.*

```bash
mkdir build
cd build
cmake ..
make
./lengthSort
GTEST_COLOR=1 ctest -V
```
or replace last command with
```
ctest
```
for simpler output

