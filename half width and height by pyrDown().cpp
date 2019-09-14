#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;
int main(int argc, char** argv)
{
	Mat ima1, ima2;
	namedWindow("1", WINDOW_AUTOSIZE);
	namedWindow("2", WINDOW_AUTOSIZE);
	ima1 = imread("D:/picture/1.jpg");
	imshow("1", ima1);
	pyrDown(ima1, ima2);
	imshow("2", ima2);
	waitKey(0);
	return 0;
}