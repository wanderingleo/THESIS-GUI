#ifndef CAMERA_HPP
#define CAMERA_HPP

#include <string>
#include <vector>
#include <sstream>
#include <iostream>

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <time.h>

//#define DEBUG
class Camera
{
	static void callback_func(int, void*);
public:
    Camera(int id);
    ~Camera();

	void setSize(int width, int height);
    void getFrame();
	void detectBall();
	void showCamera(int id);
	void unshowCamera(int id);
	int getX();
    int getY();
	void createTrackbars();

	void setHSVParam(int lowH, int highH, int lowS, int highS, int lowV, int highV);
	void setCropFrame(int PointX, int PointY, int width, int height);
	void applyCropFrame();
	void getFPS_start();
	void getFPS_end();

	double fps_;

    bool fail();
    std::string getErrorStr();

private:
		//std::string intToString(int number);
	void drawObject(int x, int y, cv::Mat &frame);
	void morphOps(cv::Mat &thresh);
	void trackFilteredObject(int & x, int & y, cv::Mat threshold, cv::Mat & cameraFeed);
	
	std::string intToString(int number);

    void setFail();
    void setErrorStr( std::string errorString);
	int width_;
	int height_;

	// Constants for white ball
	int lowH_;        // Hue (0 - 255)
	int highH_;       //

	int lowS_;        // Saturation (0 - 255)
	int highS_;       //

	int lowV_;      // Value (0 - 255)
	int highV_;      //

	//max number of objects to be detected in frame
	int MAX_NUM_OBJECTS = 50;
	//minimum and maximum object area
	int MIN_OBJECT_AREA = 20 * 20;
	int MAX_OBJECT_AREA = height_*width_ * 2 / 3;


	int64 start_;
	clock_t start_2;
	int x_;                         // If coordinates' values equal to (-1), it means
    int y_;                         // that there is no object on the frame

    cv::VideoCapture camera_;       // Web camera

	cv::Mat imgFullframe_;           // New frame from camera
    cv::Mat imgOriginal_;           // cropped frame for processing
    cv::Mat imgHSV_;                // Original, converted to HSV
    cv::Mat imgThresholded_;        // Thresholded HSV image

    cv::Mat imgSquare_;             // For circling the ball in a square

    cv::Moments objMoments_;        // Moments of thresholded picture
    double  objMoment01_;           // Responsible for Y
    double  objMoment10_;           // Responsible for X
    double  objArea_;               // Number of pixels of the object

    bool fail_;                     // True on fail
    std::string errorString_;       // If fail_ is true, here is a valid reason of the error

	cv::Rect myROI;
	int xcrop_;
	int ycrop_;
	int widthcrop_;
	int heightcrop_;

};
#endif // CAMERA_HPP