#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;
int main(int argc, char** argv)
{
	namedWindow("1", WINDOW_AUTOSIZE);
	namedWindow("2", WINDOW_AUTOSIZE);
	VideoCapture capture("D:/picture/20190401_123629_Trim.mp4");
	double fps = capture.get(CAP_PROP_FPS);
	Size size((int)capture.get(CAP_PROP_FRAME_WIDTH), (int)capture.get(CAP_PROP_FRAME_HEIGHT));
	VideoWriter writer;
	writer.open("My video", CAP_OPENCV_MJPEG, fps, size);
	Mat logpolar_frame, bgr_frame;
	while (1) {
		capture >> bgr_frame;
		if (bgr_frame.empty())	break;
		imshow("1", bgr_frame);
		logPolar(bgr_frame, logpolar_frame, Point2f(bgr_frame.cols / 2, bgr_frame.rows / 2), 40, WARP_FILL_OUTLIERS);
		imshow("2", logpolar_frame);
		writer << logpolar_frame;
		char c = waitKey(10);
		if (c == 27)	break;
	}capture.release();
	return 0;
}