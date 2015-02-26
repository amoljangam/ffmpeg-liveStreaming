#include <iostream>
#include "lib_wrapper.h"
using namespace std;
int main(int argc, char*argv[])
{
	int xpos = 200;
	int ypos = 200;
	int height = 200;
	int width = 200;
	int ret;
	
//	void *ctx = init_capture("../videos/out.flv");
	void *ctx = stream_video("../videos/some.h264","rtmp://localhost/myapp/mystream");
	if(!ctx)
	{
		cout<<"Please verify your camera is On"<<endl;
		return -1;
	}
//	set_image(ctx,"test.jpg",xpos,ypos,height,width);
//	duplicate_stream(ctx,TOP_N_BOTTOM);
//	duplicate_overlayed_stream(ctx,10,10,200,200);
//	pause_stream(ctx,100);
	
	ret = start_capture(ctx);
	if(ret < 0)
	{
		cout<<"error while capturing video"<<endl;
	}
	stop_capture(ctx);
}
