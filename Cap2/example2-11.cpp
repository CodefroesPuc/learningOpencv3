#include <opencv2\opencv.hpp>
#include <iostream>

int main(int argc, char **argv) {
	cv::namedWindow("Example2_11", cv::WINDOW_AUTOSIZE);
	cv::namedWindow("Log_Polar", cv::WINDOW_AUTOSIZE);

	//- Note: Could caputre from a camera by giving a camera id as an int

	cv::VideoCapture capture(argv[1]);

	double fps = capture.get(cv::CAP_PROP_FPS);
	cv::Size size(
		(int)capture.get(cv::CAP_PROP_FRAME_WIDTH),
		(int)capture.get(cv::CAP_PROP_FRAME_HEIGHT)
	);

	cv::VideoWriter writer;
	writer.open(argv[2], CV_FOURCC('M', 'J', 'P', 'G'), fps, size);
	
	cv::Mat logpolar_frame, bgr_frame;
		
	for (;;) {
		capture >> bgr_frame;
		if (bgr_frame.empty()) break; //- end if done
		cv::imshow("Example2_11", bgr_frame);

		cv::logPolar(
			bgr_frame,				//- input color frame
			logpolar_frame,			//- output log-polar frame
			cv::Point2f(			//- centerpoint for log-polar transformation
				bgr_frame.cols / 2, //- x
				bgr_frame.rows / 2	//- y
			),
			40,						//- magnitude (scale parameter)
			cv::WARP_FILL_OUTLIERS	//- fill outliers with 'zero'
		);
		cv::imshow("Log_Polar", logpolar_frame);
		writer << logpolar_frame;

		char c = cv::waitKey(10);
		if (c == 27) break; //- allow the user to break out
	}
	capture.release();
	writer.release();
	return 0;
}