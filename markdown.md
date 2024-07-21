```mermaid
flowchart TD

A(開始) --> B[int array 10]
B --> C[int value = 0]
C --> D{x < 10}
D --> E[value + array x]
E --> F[X++]
F --> D
D --> G[value / 10]
G --> H[平均点を表示]
H --> I(終了)
```