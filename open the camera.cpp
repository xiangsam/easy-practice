#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;
int main(int argc, char** argv)
{
	namedWindow("ME", WINDOW_AUTOSIZE);
	VideoCapture cap;
	cap.open(0);
	if (!cap.isOpened()) {
		cerr << "can't open the capture" << endl;
		return -1;
	}
	Mat frame, change;
	while (1) {
		cap >> frame;
		if (frame.empty())	break;
		cvtColor(frame, change, COLOR_BGR2XYZ);
		imshow("ME", change);
		if (waitKey(10) >= 0)	break;
	}return 0;
}