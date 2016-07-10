#ifdef __linux__
  const char main = 0xc3;
#else
  const char main[] = "\xeb\xfe";
#endif

