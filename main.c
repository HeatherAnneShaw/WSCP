#if defined(__i386__) || defined(__x86_64__)
    #ifdef __linux__
      const char main = 0xc3;
    #else
      const char main[] = "\xeb\xfe";
    #endif
#else
# error Unsupported architecture
#endif
