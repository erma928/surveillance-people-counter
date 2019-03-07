# Video Surveillance People Counter

## Introduction
The program detects people passing through specific line position in video surveillance. 
It makes uses of mog background modeling and subtraction process for contour detection per each frame. 
It also utilizes a simple modeling of motion trace to decide people movement. The counts of entrance/exit 
are shown in console as well as image window by providing the `-w` switch when running the program. 


## Program Build

### 1. Dependencies
* `cmake`
* `opencv >= 3.2.0`
    
### 2. Build
From `surveillance-people-counter` root folder:
```
mkdir build
cd build
cmake ..
make
```

## Program Run
From `surveillance-people-counter` root folder:
```
./build/surveillance-people-counter -h
surveillance people counter v0.9.0
Usage: surveillance-people-counter [params] input 

	-?, -h, --help, --usage (value:true)
		print this message
	-w, --window
		show window or not

	input (value:<none>)
		input camera/video file for counter, e.g. 0 means from camera of your laptop
```
