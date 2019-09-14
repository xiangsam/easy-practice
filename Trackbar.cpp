#include <opencv2/opencv.hpp>
#include <iostream>
#include <fstream>
using namespace cv;
using namespace std;
int g_run = 1;
int g_dontset = 0;
int g_slider_position = 0;
VideoCapture g_cap;
void onTrackbarSlider(int pos, void*)
{
	g_cap.set(CAP_PROP_POS_FRAMES, pos);
	if (!g_dontset)
		g_run = 1;
	g_dontset = 0;
}
int main()
{
	namedWindow("Example", WINDOW_AUTOSIZE);
	g_cap.open("D:/picture/20190401_123629_Trim.mp4");
	Mat frame;
	int frames = g_cap.get(CAP_PROP_FRAME_COUNT);
	int tmpw = g_cap.get(CAP_PROP_FRAME_WIDTH);
	int tmph = g_cap.get(CAP_PROP_FRAME_HEIGHT);
	cout << "Video has " << frame << "frames of dimensions(" << tmpw << ", " << tmph << " )" << endl;
	createTrackbar("position", "Example", &g_slider_position, frames, onTrackbarSlider);
	while (1) {
		if (g_run != 0) {
			g_cap >> frame;
			if (!frame.data)	break;
			int current_pos = (int)g_cap.get(CAP_PROP_POS_FRAMES);
			g_dontset = 1;
			setTrackbarPos("position", "Example", current_pos);
			imshow("Example", frame);
			g_run -= 1;
		}char c = (char)waitKey(20);
		if (c == 's') {
			g_run = 1;
			cout << "Single step, run = " << g_run << endl;
		}if (c == 'r') {
			g_run = -1;
			cout << "Run mode, run = " << g_run << endl;
		}if(c == 27) {
			break;
		}
	}return 0;
}