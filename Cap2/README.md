Exercises (Chapter 2)
===

#### 1 - Using the install and build instructions in this book or at http://opencv.org, build the library in both the debug and the release versions.
We did (and described) that in the previous chapter already.

#### 2 - Go to where you built the `../opencv/samples/directory` and look for `lkdemo.cpp` (this is an example motion-tracking program). Attach a camera to your system and run the code. With the display window selected, type **r** to initialize tracking. You can add points by clicking on video positions with the mouse. You can also switch to watching only the points ( and not the whole image) by typing **n**. Typing **n** again will toggle between "night" and "day" views.
- [ ] Talk about this example.

#### 3 - Use the capture and store code in *Example 2-11* together with the `PyrDown()` code of *Example 2-6* to create a program that reads from a camera and stores downsampled color images to disk.

#### 4 - Modify the code in Exercise 3 and combine it with the window display code in *Example 2-2* to display the frames as they are processed.

#### 5 - Modify the program of Exercise 4 with a trackbar slider control from Example 2-4 so that the user can dynamically vary the pyramid downsampling reduction level by factors of between 2 and 8. You may skip writing this to disk, but you should display the results.
