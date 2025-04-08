# Stainless Steel
Stainless Steel: For the Minimalist in love with completion. Drop-in memory-safe C++ replacement language.

Discord: https://discord.gg/W4zHjtjDac
IRC: irc.libera.chat  ##programming

Features (Technical):
- Inferred Memory Safety - [The compiler infers lifetime annotations](https://herbsutter.com/2018/09/20/lifetime-profile-v1-0-posted/), making errors easy to spot, with minimal to no annotation. ([Online demo](https://godbolt.org/z/jxMTnddMv))
- Embedded Friendly - By default, Stainless only needs a plain C99 runtime (or no runtime at all)
- Baremetal by default - [We cleaned up the runtime - by default](https://arobenko.github.io/bare_metal_cpp/#compiler_output-nostdlib)
- Compatible with existing systems languages, without needing FFI or bindings.

Features (Convenience):
- Fast easy offline builds
- Compatible with a large subset of GLSL, making it easy to debug shader code on the CPU
- Syntax compatible with a large subset of C, C++, and Objective-C code. No need to rewrite everything.
- [Includes companion scripting language, Motive.](https://github.com/Peach1/Motive)


Removed
- Exceptions (`-fno-exceptions -fno-non-call-exceptions`)
- Runtime type identification (`-fno-rtti`)
- iostream

---

A new systems language? Drop-in memory-safety? Why now?

To be continued...
<img width="1280" alt="No_need_to_rewrite_everything" src="https://github.com/user-attachments/assets/7c248296-0246-4f16-8da9-58fde5189182" />
