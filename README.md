# C Low-Level Labs 🛠️

A collection of C programs exploring system fundamentals, pointer arithmetic, state machines, and manual memory management. This repository focuses on understanding how high-level abstractions (like Python's `.split()` or `int()`) work under the hood.

## 📂 The Programs

### 1. Stream Auditor (`stream_auditor.c`)
**Concepts:** Finite State Machines (FSM), Buffered I/O, Stream Transducers.
A Unix-style utility that functions as both a `wc` (Word Count) clone and a stream formatter.
- Uses **O(1)** memory complexity (processes streams of infinite size).
- Implements a State Machine (IN/OUT) to handle tokenization.
- Delivers real-time statistical analysis.

### 2. Manual String Tokenizer (`word_tokenizer_array.c`)
**Concepts:** Arrays, Buffers, Two-Pass Processing.
A text parser that reads input into a stack-allocated buffer and reformats it to "one word per line."
- Demonstrates the trade-offs of buffer-based processing vs. stream processing.
- Includes overflow protection logic.

### 3. Shipping Calculator (`shipping_calculator.c`)
**Concepts:** Symbolic Constants, Manual Integer Parsing, Logic Flow.
A logistics pricing tool that calculates costs based on weight tiers.
- **Key Feature:** Does not use `scanf`. Implements a custom loop to parse ASCII input digits into integers manually.
- Applies symbolic constants for maintainable business logic (Heavy Fees, Limits).

### 4. ASCII to Integer Converter (`ascii_to_int.c`)
**Concepts:** ASCII Arithmetic, Data Representation.
A raw implementation of the standard `atoi()` function.
- Reads character bytes and mathematically converts them to their integer equivalents.
- Demonstrates how computers understand numbers vs. text.

### 5. Manual String Length (`manual_strlen.c`)
**Concepts:** Pointers, Memory Addressing.
Recreating the `strlen` function using pointer arithmetic.
- Avoids array indexing (`i++`).
- Directly manipulates memory addresses (`s++`) to traverse the string segment.

## 🚀 How to Run
Compile any file using GCC:
```bash
gcc stream_auditor.c -o auditor
./auditor
