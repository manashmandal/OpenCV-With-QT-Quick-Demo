# Quick QT OpenCV Demo

## What is it?
It is a simple app for demonstrating OpenCV api with Qt Framework. From this project, the most basic operations, adding library path can be viewed known. Nothing serious, just a sample how to integrate Qt and OpenCV.

## Isn't this too simple?
<kbd>As I mentioned before, it is just an example for trying out on Qt after configuring Qt and OpenCV.</kbd>

## What does it do?
It just rotates the selected image when the processed button is clicked. Select an image by clicking Open Image then click process to rotate it.

## Screenshot

![alt text](http://i.imgur.com/5AoEHf2.png)

![alt text](http://i.imgur.com/LObuORs.png)

![alt text](http://i.imgur.com/Xb6ZaWA.png)

* When you try to process the image without selecting it
![alt text](http://i.imgur.com/fTMtN9h.png)

## Known issues
Having problem closing the opencv windows. I'll fix this when I get to play more often with OpenCV

## What do I need to build it myself?
* [Qt 5.3 Mingw32](www.qt.io/download-open-source)
* [OpenCV 2.4.10](http://opencv.org/downloads.html)
* [CMake](http://www.cmake.org/) (for configuring opencv with qt)
* [pathEdit](https://patheditor2.codeplex.com/) (Nifty path editor for adding paths, it is optional, can be done manually)
