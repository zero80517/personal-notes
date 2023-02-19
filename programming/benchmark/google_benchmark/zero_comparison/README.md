# zero comparison

Compare the time for different methods of comparing double value with zero.
Output:

```
Run on (12 X 2212.52 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x6)
  L1 Instruction 32 KiB (x6)
  L2 Unified 256 KiB (x6)
  L3 Unified 9216 KiB (x1)
--------------------------------------------------------------------------------
Benchmark                                      Time             CPU   Iterations
--------------------------------------------------------------------------------
compare_fabs/iterations:1000000000          1.15 ns         1.16 ns   1000000000
compare_not/iterations:1000000000          0.509 ns        0.500 ns   1000000000
compare_notzero/iterations:1000000000       1.01 ns         1.02 ns   1000000000
```