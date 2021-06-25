![Logo](https://raw.githubusercontent.com/vkinsane/Time-Table-Linker-SDP-SY-SEM2/master/Assets/timetable_512px.png)

# Time Table Linker

During the pandemic people were using some kind of a platforms (like google meet,zoom etc.)
Eventually it became inconvenient for the college/school student to manage their links of the lectures.
Some students were using their browser for their convenience for joining the meet ASAP.
But then removing your useful websites (like youtube,github) from the main browser page was not very convenient.
Then i came up with this idea that there should be software in which student will directly upload his college Time Table (in which the links of the time table are also mentioned) then a time table interface will be created accordingly
and then user simply have to click on that lecture's button and he will be redirected to that lecture's link.

## Authors

- [@Vishal Khandate](https://github.com/vkinsane)

## Tools

**IDE:** Visual Studio 2019

**Language:** C++

**Library:** [LibXL](https://www.libxl.com/)

## Screenshots

![Main Screen]()
![Upload File]()
![Read File]()
![Join Lecture]()

## Demo

![GIF from my site]()

## Installation

Install my-project from these download links

For 32-bit : [Link for 32 bit](https://github.com/vkinsane)

For 64-bit : [Link for 64 bit](https://github.com/vkinsane)

## Support

For support, email vishukblog000@gmail.com

## Badges

![](https://img.shields.io/badge/-college%20project-brightgreen)
![](https://img.shields.io/badge/-innovative-blue)
![](https://img.shields.io/badge/-software-orange)
![](https://img.shields.io/badge/-development-lightgrey)
![](https://img.shields.io/badge/-C%2B%2B-blue)

## Lessons Learned and Problems Faced

In the beginning i decided to use Qt Creator for making the user interface for the application and Aspose Cells for C++ library for processing the excel file according to my need, but unfortunately Qt creator was not getting installed properly in my pc i tried almost 8 to 10 times reinstalling it and searched for 1 week about the error which it was giving and didn't got any solution 😔.
Then i switched to Visual Studio Forms for the making user interface and started implementing the Aspose library in my CLR Project but eventually i found that this library does not work with CLR Project in Visual Studio (I wrote to the owners of this library they told me that they have found that there are some ambiguity issues of a class so you cannot use this library in CLR projec) so i then switched to libxl library.
Now this library doesn't allow us to access more than 300 cells in excel file in free version (which i have used).
So my application will show you only the time table of a specific day if today is monday it will show the schedule for monday and if today is saturday it wil show for saturday.

## Acknowledgements

- [Awesome README Maker](https://readme.so/editor)
