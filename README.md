# PRNG C 64

It's a fast, statistically-strong PRNG with 64-bit integers and a minimum period of 2⁶⁴.

`prng_c_64()` is the randomization function that generates a 64-bit, pseudorandom, unsigned integer.

It accepts the following argument.

1. `s` is the pointer that contains the state. Each state integer must be initialized with any combination of values.

It returns a 64-bit unsigned integer pseudorandom number result.

It's in the same class as JSF64, PCG32, `pcg32_fast`, PCG64 and `pcg64_fast` as they all use 64-bit state integers.

It has a minimum period of 2⁶⁴ without broken cycles.

It has an approximated maximum period of 2¹²⁸, although no cycle is guaranteed to reach a full 2¹²⁸ period.

An odd-numbered constant sums with `b` for 2⁶⁴ different numbers to XOR with `a` in each cycle.

Incrementing `b` outside of `prng_c_64()` behaves as an interdimensional jump function that starts a different cycle with a period of at least 2⁶⁴.

Zeroland escapes quickly after generating 3 subsequent numbers.

It's the fastest 64-bit PRNG that generates numbers individually, has a period of at least 2⁶⁴ and passes statistical tests in `stdin64` PractRand with TBs of numbers.

I welcome submissions of algorithms in the same class that challenge the aforementioned claim.

As an obligatory disclaimer, it's not a CSPRNG for use in cryptography.
