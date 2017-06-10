#include <opencv2/opencv.hpp>
#include <iostream>

int main(int argc, char **argv) {
	const int n_mat_size = 5;
	const int n_mat_sz[] = { n_mat_size, n_mat_size, n_mat_size };
	cv::Mat n_mat0(3, n_mat_sz, CV_32FC1); // one-channel 5x5x5 matrix
	cv::Mat n_mat1(3, n_mat_sz, CV_32FC1); // one-channel 5x5x5 matrix

	cv::RNG rng; //- creating a random number generator object
	rng.fill(n_mat0, cv::RNG::UNIFORM, 0.f, 1.f);
	rng.fill(n_mat1, cv::RNG::UNIFORM, 0.f, 1.f);
		
	const cv::Mat* arrays[] = { &n_mat0, &n_mat1, 0 }; //- must be terminated with 0 or NULL.
	cv::Mat my_planes[2];
	cv::NAryMatIterator it(arrays, my_planes);

	//- On each iteration, it.planes[i] will be the current plane of the
	//- i-th array from 'arrays'.
	float s = 0.f;
	int n = 0;
	for (int p = 0; p < it.nplanes; p++, ++it) {
		s += cv::sum(it.planes[0])[0];
		s += cv::sum(it.planes[1])[0];
		n++;
	}
	std::cout << "Sum is equal to " << s << "." << std::endl;

	// Extented case
	{
		cv::Mat src1(2, 2, CV_32FC1, 1);
		cv::Mat src2(2, 2, CV_32FC1, 1);
		cv::Mat dst;
		const cv::Mat* arrays2[] = { &src1, &src2, &dst, 0 };
		float* ptrs[3];
		cv::NAryMatIterator it2(arrays2, (uchar**)ptrs);
		for (size_t i = 0; i < it2.nplanes; i++, ++it) {
			for (size_t j = 0; j < it2.size; j++) {
				ptrs[2][j] = std::pow(ptrs[0][j], ptrs[1][j]);
			}
		}
		std::cout << std::endl << "extended: \n" << dst;
	}
	return 0;
}