Prerequisite:
1) cmake-3.11.0-rc3-win64-x64
2) Visual Studio 15 2017 Community Edition  C++ version 11

Unzip the container.zip archive file to your favorite directory

I'm used to work on a virtual disk drive o:

1) open a command windows console

2) go to your favorite directory, for me it shall be
   cd C:\RTC_WORKSPACE\TEST_C++\
   
3) map your disk virtual drive to current directory
   subst o: %CD%
   
4) goto your disk drive
   o:
   
4) Unzip the CONTAINER.zip archive file to your current disk drive o:

5) goto your project directory 
   cd CONTAINER
   
6) Generate your solution
O:\> C:\cmake-3.11.0-rc3-win64-x64\bin\cmake.exe -G "Visual Studio 15 2017"
-- Selecting Windows SDK version 10.0.16299.0 to target Windows 6.1.7601.
-- The C compiler identification is MSVC 19.13.26128.0
-- The CXX compiler identification is MSVC 19.13.26128.0
-- Check for working C compiler: C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.13.26128/bin/Hostx86/x86/cl.exe
-- Check for working C compiler: C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.13.26128/bin/Hostx86/x86/cl.exe -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working CXX compiler: C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.13.26128/bin/Hostx86/x86/cl.exe
-- Check for working CXX compiler: C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.13.26128/bin/Hostx86/x86/cl.exe -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: C:/RTC_WORKSPACE/TEST_C++/MATRIX2D
o:>

7) open the created visual studio solution ProjectContainer.sln

8) Build the solution 
   - Select from Solution Explorer the dongle executable_matrix2D
   - Right Click and then select build
   
9) open the main program
   
10) set a breakpoint at end bracket of main

11) Run in debug mode the ProjectContainer executable
   - Select from Solution Explorer the dongle executable_container
   - Right Click and then select debug
   
12)Add a watch window and select myContainer1 and myContainer2
and you can see from the vector contents that the sort is done successfully
for the two containers as expected (see the task 3: Coding 2 description)!
