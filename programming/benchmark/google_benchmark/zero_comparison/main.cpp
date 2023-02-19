#include "math.h"

#include "benchmark/benchmark.h"

constexpr int NUM_ITER = 1e9;

static void compare_fabs(benchmark::State &state)
{
    for (auto _ : state) {
        auto x = fabs(static_cast<double>(state.max_iterations)) > 0;
        benchmark::DoNotOptimize(x);
    }
}

static void compare_not(benchmark::State &state)
{
    for (auto _ : state) {
        auto x = !(static_cast<double>(state.max_iterations));
        benchmark::DoNotOptimize(x);
    }
}

static void compare_notzero(benchmark::State &state)
{
    for (auto _ : state) {
        auto x = (static_cast<double>(state.max_iterations)) != 0;
        benchmark::DoNotOptimize(x);
    }
}

BENCHMARK(compare_fabs)->Iterations(NUM_ITER);
BENCHMARK(compare_not)->Iterations(NUM_ITER);
BENCHMARK(compare_notzero)->Iterations(NUM_ITER);

BENCHMARK_MAIN();
