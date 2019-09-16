#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;
Mat g_frame;
int g_multiple;
void onTrackbar(int pos, void*) {
	g_multiple = pos;
	return;
}
int main(int argc, char** argv)
{
	namedWindow("camera", WINDOW_AUTOSIZE);
	namedWindow("change", WINDOW_AUTOSIZE);
	VideoCapture cap;
	cap.open(0);
	createTrackbar("position", "change", &g_multiple, 8, onTrackbar);
	while (1) {
		cap >> g_frame;
		if (g_frame.empty())	break;
		setTrackbarPos("change", "position", g_multiple);
		int a = g_multiple;
		for (; a > 2;--a) {
			pyrDown(g_frame, g_frame);
		}
		imshow("camera", g_frame);
		char c = waitKey(10);
		if (c == 27)break;
	}cap.release();
	return 0;
}