#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;
int main(int argc, char** argv)
{
	Mat img_rgb, img_gray1, img_gray2, img_cny;
	img_rgb = imread("D:/picture/1.jpg");
	cvtColor(img_rgb, img_gray1, COLOR_BGR2GRAY);
	pyrDown(img_gray1, img_gray2);
	pyrDown(img_gray2, img_gray2);
	Canny(img_gray2, img_cny, 10, 100, 3, true);
	int x = 16, y = 32;
	Vec3b intensity = img_rgb.at<Vec3b>(y, x);
	uchar blue = intensity[0];
	uchar green = intensity[1];
	uchar red = intensity[2];
	cout << "At (x, y) = (" << x << ", " << y << ") : (blue, green, red)  =(" << (unsigned int)blue << "," << (unsigned int)green << "," << (unsigned int)red << ")" << endl;
	cout << "Gray pixel there is: " << (unsigned int)img_gray1.at<uchar>(y, x) << endl;
	x /= 4, y /= 4;
	cout << "Pyrmid2 pixel there is: " << (unsigned int)img_gray2.at<uchar>(y, x) << endl;
	img_cny.at<uchar>(y, x) = 128;
	return 0;
}