```cpp
#include <print.h>
struct insane
{
    int x;
    String astxt() const // as text
    {
        return "CHOCOLATE!!!!!!!";
    }
};
int main()
{
    show/ (insane)24;
}
```

# The syntax of Stainless Steel 📎

Stainless is designed to be a near-superset of modern C++.

A large amount of C++ code works side-by-side with Stainless code.

So it's easy to try out Stainless without rewriting everything.

## Before and After

Stainless is a more powerful C++, with cleaner syntax, and an easier learning curve.

Before:

```cpp
std::cout << 1 << 2 << 3 << std::endl;
```

After:

```cpp
show/ 1,2,3;
```

This is much shorter than C++ `std::cout`, and also shorter than C++26 `std::println`

---

Before:

```cpp
std::println("{} {} {}", x,y,z);
```

After:

```cpp
show/ x,y,z;
```

---

Before:

```cpp
std::cout << 1 << "," << 2 << "," << 3 << std::endl;
```

After:

```cpp
show[","]/ 1,2,3;
```

---

It's important to note, `show/` is designed to be keystroke-optimized.

In the fields of game development and scientific research, you want a fast feedback loop to inspect values quickly. Keystrokes effect development speed. Keystrokes count.

We optimized for the most common use cases.

---

If you're coming from C, we have a typesafe printf

Before:

```cpp
printf("%i %f %s\n", x,y,z);
```

After:

```cpp
printx("% % %", x,y,z);
```

Recognizably C style, printing is easier in Stainless cause the type is inferred

100%\v

We used to program in Java... and the verbosity slowed us down considerably:

```java
System.out.println(x.toString() + " " + y.toString() + " " + z.toString());
```

This contrasts with Stainless.

```cpp
show/ x,y,z;
```

Stainless is keystroke-optimized for fast iteration.

As an added bonus, you can speed up development and print values at compile-time... *before* running the program.

```cpp
static_print(8*18000);
letconst x = 2+2;
static_print(sizeof(int*), "2+2 =", x);
```

---

Before:

```cpp
const auto x = 1;
```

After:

```cpp
let x = 1;
```

---

Before:

```cpp
constexpr const auto x = 1;
```

After:

```cpp
letconst x = 1;
```

---

Before:

```cpp
auto x = 1;
x++;
```

After:

```cpp
mut x = 1;
x++;
```

Note that both the C++ style and the Stainless Style work,

This allows for greater code reuse, and optional incremental changes.

You don't need to make major changes to you existing code to use Stainless.
