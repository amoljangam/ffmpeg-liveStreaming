#ifndef _LIB_WRAPPER_H
#define _LIB_WRAPPER_H
#ifdef __cplusplus
extern "C" {
#endif
int start_capture(void *ctx);
void *init_capture(const char*path);
void stop_capture(void *ctx);
#ifdef __cplusplus
}
#endif

#endif
