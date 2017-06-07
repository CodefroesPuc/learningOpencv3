#include <opencv2\opencv.hpp>
#include <iostream>

int main() {
	//std::cout << "Exercise 1 \n";
	//- a, b
	//float number = 0.f;
	//std::cout << "Insert floating-point number: ";
	//std::cin >> number;
	//float abs = cv::abs(number);
	//float rounded = cvRound(abs);
	//float ceiled = cvCeil(rounded);
	//std::cout << "b. result is " << ceiled << std::endl;
	
	//- c
	//cv::RNG rng(0xFFFFFFFF);
	//for (int i = 0; i < 5; i++)
	//{
	//	float random = rng.uniform(0,255);
	//	std::cout << random << std::endl;
	//}

	//- d
	//cv::Point2f pntf(3.5, 3.5);
	//std::cout << pntf << std::endl;
	//cv::Point pnt = (cv::Point)pntf;
	//std::cout << pnt << std::endl;
	//std::cout << (cv::Point2f)pnt << std::endl;

	//std::cout << "Exercise 2 \n";
	cv::Matx33f mat33(1, 2, 3, 4, 5, 6, 7, 8, 9);
	std::cout << mat33 << std::endl;
	cv::Vec3f vec3(1, 2, 3);
	std::cout << vec3 << std::endl;

	std::cout << vec3.dot(mat33) << std::endl;
	// Not possible, but I don't really know why.

	return 0;

	//


}