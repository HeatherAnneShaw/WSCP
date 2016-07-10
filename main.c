#ifdef __linux__
  const char main = 0xc3;
#elif defined(_POSIX_VERSION)
  const char main[] = "\xeb\xfe";
#else
#   error "it's your turn to submit a bug report lol"
#endif
