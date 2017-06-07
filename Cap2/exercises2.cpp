#include <opencv2\opencv.hpp>
#include <iostream>

//void onChange(int level, void *) {
//	
//}

int main(int argc, char **argv) {
	cv::namedWindow("Camera", cv::WINDOW_AUTOSIZE);
	//cv::namedWindow("Processed", cv::WINDOW_AUTOSIZE);

	cv::VideoCapture capture(0); //- using camera

	double fps = capture.get(cv::CAP_PROP_FPS);

	cv::Mat cap_frame, out_frame;
	int i = 0, level = 2;
	for (;;) {
		capture >> cap_frame;
		if (cap_frame.empty()) {
			std::cout << "End of file."  << std::endl;
			break;
		}
		cv::imshow("Camera", cap_frame);

		cv::createTrackbar("Reduction Level", "Camera", &level, 8);
		char c = cvWaitKey(33);		
		if (c == 'c') {
			i++;
			cap_frame.copyTo(out_frame);
			for (int j = 1; j < level; j++)
				cv::pyrDown(out_frame, out_frame);
			cv::imshow("Processed", out_frame);
			cv::String filename = "out_";
			filename += std::to_string(i) + ".png";
			std::cout << filename;
			cv::imwrite(filename, out_frame);
		}

		if (c == 27) {
			cv::destroyAllWindows;
			break;
		}		
	}
	return 0;
}