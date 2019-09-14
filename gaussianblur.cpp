#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
void smooth(const Mat& image)
{
	namedWindow("in", WINDOW_AUTOSIZE);
	namedWindow("out", WINDOW_AUTOSIZE);
	imshow("in", image);
	Mat out;
	GaussianBlur(image, out, Size(5, 5), 3, 3);
	GaussianBlur(out, out, Size(5, 5), 3, 3);
	imshow("out", out);
	waitKey(0);
	return;
}
int main(int argc, char** argv)
{
	Mat pic = imread("D:/picture/1.jpg");
	smooth(pic);
	return 0;
}