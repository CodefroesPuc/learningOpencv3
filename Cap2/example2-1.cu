#include "opencv2/highgui/highgui.hpp"

int main(int, char** argv)
{
	cv::Mat img = cv::imread(argv[1], -1);
	if (img.empty()) return	-1;
	cv::imshow("Example1", img);
	cv::waitKey(0);
	cv::destroyWindow("Example1");
	return 0;
}