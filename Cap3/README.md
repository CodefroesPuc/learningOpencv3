Exercises (Chapter 3)
===

#### 1 - Find and open `../opencv/cxcore/included/cxtypes.h`. Read through and find the many conversion helper functions.
This path is probably legacy from the old OpenCV (prior to 2.1) library. The new path is probably `..\opencv\modules\core\include\opencv2\core\types_c.h` and for the new C++ types header `C:\Users\codef\Source\Repos\opencv\modules\core\include\opencv2\core\types.hpp`.

1. Choose a negative floating-point number.
1. Take its absolute value, round it, and then take its ceiling and floor.
1. Generate some random numbers.
1. Create a floating-point `cv::Point2f` and convert it to an integer `cv::Point`. Convert a `cv::Point` to a `cv::Point2f`.

#### 2 - Compact matrix and vector types:

1. Using the `cv::Matx33f` and `cv::Vec3f` objects (respectively), create a 3x3 matrix and 3-row vector.
[Note: In the book it's written `cv::Mat33f`, but there's no such class.]
1. Can you multiply them together directly? If not, why not? <br>
  Here the authors haven't explained why they meant by "directly", but...

#### 3 - Compact matrix and vector template types:
1. Using the `cv::Mat<>` and `cv::Vec<>` templates ( respectively), create a 3x3 matrix and 3-row vector.
1. Can you multiply them together directly? If not, why not?
1. Try type-casting the vector object to a 3x1 matrix, using the `cv::Mat<>` template. What happens now?
