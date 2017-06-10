#include <opencv2/opencv.hpp>
#include <iostream>

int main(int argc, char **argv) {
	const int n_mat_size = 5;
	const int n_mat_sz[] = { n_mat_size, n_mat_size, n_mat_size };
	cv::Mat n_mat(3, n_mat_sz, CV_32FC1); // one-channel 5x5x5 matrix
	
	cv::RNG rng; //- creating a random number generator object
	rng.fill(n_mat, cv::RNG::UNIFORM, 0.f, 1.f);

	const cv::Mat* arrays[] = { &n_mat, 0 }; //- must be terminated with 0 or NULL.
	cv::Mat my_planes[1];
	cv::NAryMatIterator it(arrays, my_planes);

	//- On each iteration, it.planes[i] will be the current plane of the
	//- i-th array from 'arrays'.
	float s = 0.f;
	int n = 0;
	for (int p = 0; p < it.nplanes; p++, ++it) {
		s += cv::sum(it.planes[0])[0];
		n++;
	}
	std::cout << "Sum is equal to " << s << "." << std::endl;

	return 0;
}