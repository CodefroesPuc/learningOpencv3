Exercises (Chapter 3)
===

#### 1 - Find and open `../opencv/cxcore/included/cxtypes.h`. Read through and find the many conversion helper functions.
This path is probably legacy from the old OpenCV (prior to 2.1) library. The new path is probably `..\opencv\modules\core\include\opencv2\core\types_c.h` and for the new C++ types header `..\opencv\modules\core\include\opencv2\core\types.hpp`.

Whole code is here [exercises3.cpp](https://github.com/CodefroesPuc/learningOpencv3/blob/master/Cap3/exercises3.cpp)
1. Choose a negative floating-point number.
@snippet ./Cap3/exercises3.cpp 1a
2. Take its absolute value, round it, and then take its ceiling and floor.
@snippet Cap3/exercises3.cpp 1b
3. Generate some random numbers.
@snippet ./Cap3/exercises3.cpp 1c
4. Create a floating-point `cv::Point2f` and convert it to an integer `cv::Point`. Convert a `cv::Point` to a `cv::Point2f`.
@snippet ./Cap3/exercises3.cpp 1d

#### 2 - Compact matrix and vector types:

@note In the book it's written `cv::Mat33f`, but there's no such class.

1. Using the `cv::Matx33f` and `cv::Vec3f` objects (respectively), create a 3x3 matrix and 3-row vector.
@snippet ./Cap3/exercises3.cpp 2a
2. Can you multiply them together directly? If not, why not? <br>
  If by "multiply them together", the authors mean Matx33f*Vec3, then it compiles as we are multiplying matrixes with dimensions 3x3 and a 3-elements vector. The values are right, but as the result is a vector, we don't have the information if it is a line or column vector.
@snippet ./Cap3/exercises3.cpp 2b

#### 3 - Compact matrix and vector template types:
1. Using the `cv::Mat<>` and `cv::Vec<>` templates ( respectively), create a 3x3 matrix and 3-row vector.
@snippet ./Cap3/exercises3.cpp 3a
2. Can you multiply them together directly? If not, why not?
@snippet ./Cap3/exercises3.cpp 3b
  It works the same way and for the same reason. The values are right, but as the result is a vector, we don't have the information if it is a line or column vector.
3. Try type-casting the vector object to a 3x1 matrix, using the `cv::Mat<>` template. What happens now?
@snippet ./Cap3/exercises3.cpp 3c
It simply works, the vector becomes a matrix, so it can be multiplied by another one doing (inner dimensions do agree):
@snippet ./Cap3/exercises3.cpp 3c2
Now the result is correct as we got a 3x1 matrix (or column vector).
