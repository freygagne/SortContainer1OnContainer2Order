CODING 2
write a function that sort a container like std::vector or std::list containing objects according to the ordering of objects given in a second container.
That is, the comparison to determine the sorted ordering must be done based on the second container, the first container must be reordered based on this comparison

CONSTRAINTS
You may not assume that the representation and the internal structure of the objects in the container 2 can be modified.
In particular, the object in container 2 might not have a comparison operator, but your sort function can take more than two parameters.
but your sort function can take more than two parameters.
you may assume that the objects are copy-constructible . It should work for any class


CODAGE 2
Ecrire une fonction qui trie un conteneur comme std :: vector ou std :: list contenant des objets selon l'ordre des objets donnés dans un second conteneur.
Cela étant, la comparaison pour déterminer l'ordre de tri doit être faite sur la base du deuxième conteneur, le premier conteneur doit être réorganisé sur la base de cette comparaison.

CONTRAINTES
Vous ne pouvez pas supposer que la représentation et la structure interne des objets dans le conteneur 2 puissent-être modifiées.
En particulier, l'objet dans le conteneur 2 peut ne pas avoir d'opérateur de comparaison,
mais votre fonction de tri peut prendre plus de deux paramètres.
Vous pouvez supposer que les objets sont copiables-constructibles. Cela devrait fonctionner pour n'importe quelle classe.





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
"# SortContainer1OnContainer2Order" 
