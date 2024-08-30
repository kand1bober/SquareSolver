
#ifdef ASSERTION
#define ASSERT(expr) \
        ((bool)expr)  \
        ?printf("assertion passed\n")  \
        :printf("Assertion failed file: %s\nline: %d\nfile: %s", __FILE__, __LINE__, __PRETTY_FUNCTION__)  \

#else
    #define ASSERT(expr)

#endif
