#ifndef _INPUT_H
#define _INPUT_H

#include "stream.h"
enum InputType
{
	IN_WEBCAM,
	IN_IMAGE,
	IN_VIDEO,
};

int configure_input(struct liveStream *ctx,const char *name,enum InputType type);
void dinit_inputs(struct lsInput **in,int *nb);
struct lsInput *get_input_by_id(struct lsInput *input,int id);
#endif
