#include <opencv2\opencv.hpp>
#include <iostream>

int main() {
	
	std::cout << "Exercise 1 \n";
	std::cout << "a." << std::endl;
	//![1a]
	float number = 0.f;	
	std::cout << "Insert a negative floating-point number: ";
	std::cin >> number;
	//![1a]
	
	std::cout << "b." << std::endl;
	//![1b]
	float abs = cv::abs(number);
	float rounded = cvRound(abs);
	float ceiled = cvCeil(rounded);
	std::cout << "Result is " << ceiled << std::endl;
	//![1b]

	std::cout << "c." << std::endl;
	//![1c]
	cv::RNG rng(0xFFFFFFFF);
	for (int i = 0; i < 5; i++)
	{
		float random = rng.uniform(0,255);
		std::cout << random << std::endl;
	}
	//![1c]

	std::cout << "d." << std::endl;
	//![1d]
	cv::Point2f pntf(3.5, 3.5);
	std::cout << pntf << std::endl;
	cv::Point pnt = (cv::Point)pntf;
	std::cout << pnt << std::endl;
	std::cout << (cv::Point2f)pnt << std::endl;
	//![1d]

	std::cout << "Exercise 2 \n";
	std::cout << "a." << std::endl;
	//![2a]
	cv::Matx33f mat33(1, 2, 3, 4, 5, 6, 7, 8, 9);
	std::cout << mat33 << std::endl;
	cv::Vec3f vec3(1, 2, 3);
	std::cout << vec3 << std::endl;
	//![2a]

	std::cout << "b." << std::endl;
	//![2b]
	std::cout << mat33 * vec3 << std::endl;
	//![2b]

	std::cout << "Exercise 3" << std::endl;
	std::cout << "a." << std::endl;
	//![3a]
	cv::Matx<int,3,3> mat33t(1, 2, 3, 4, 5, 6, 7, 8, 9);
	std::cout << mat33 << std::endl;
	cv::Vec<int,3> vec3t(1, 2, 3);
	std::cout << vec3t << std::endl;	
	//![3a]

	//![3b]
	std::cout << mat33t * vec3t << std::endl;
	//![3b]
	
	std::cout << "b." << std::endl;
	//![3c]
	cv::Matx<int, 3, 1> mat2 = (cv::Matx<int, 3, 1>)vec3;
	std::cout << mat2 << std::endl;
	//![3c]

	//![3c2]
	std::cout << mat33t * mat2 << std::endl;
	//![3c2]
	return 0;

	//


}