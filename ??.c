#define NNULL(a, ...) (a __VA_OPT__(? a : NNULL1(__VA_ARGS__)))
#define NNULL1(a, ...) (a __VA_OPT__(? a : NNULL2(__VA_ARGS__)))
#define NNULL2(a, ...) (a __VA_OPT__(? a : NNULL3(__VA_ARGS__)))
#define NNULL3(a, ...) (a __VA_OPT__(? a : NNULL4(__VA_ARGS__)))
#define NNULL4(a, ...) (a __VA_OPT__(? a : NNULL5(__VA_ARGS__)))
#define NNULL5(a) a
