#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;
int main(int argc, char** argv)
{
	Mat img_rgb, img_gray, img_cny;
	namedWindow("gray", WINDOW_AUTOSIZE);
	namedWindow("cny", WINDOW_AUTOSIZE);
	img_rgb = imread("D:/picture/1.jpg");
	cvtColor(img_rgb, img_gray, COLOR_BGR2GRAY);
	imshow("gray",img_gray);
	Canny(img_gray, img_cny, 10, 100, 3, true);
	imshow("cny",img_cny);
	waitKey(0);
	return 0;
}