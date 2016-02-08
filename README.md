# data-structures repo
### Summary
--------------------------------------------------------------------------------
This is the README for the data-structures repo.
This repo is intended to be used as a dumping ground where myself and choice
collaborators can re-familarize ourselves with certain data structures and how
to implement them in the C programming language.

This repo includes static libraries for the various data structures we are
implementing and testing. This repo additionally includes the Google Test
framework which is being used to unit test the functions of each static library.

### Resources
--------------------------------------------------------------------------------
There are many resources on data structures in C, but free ones are
the best. Here are some that we have found helpful while we were exploring.

Yale's CPSC 223, Sprint 2015 - www.cs.yale.edu/homes/aspnes/classes/223/notes.pdf

### Building the libraries
--------------------------------------------------------------------------------
We are using GNU Make and a makefile to allow a modular and hierarchical build
environment. This should allow a certain level of simplicity as well as allow
a certain level of development system independence. While I am developing this
code on a Mac, this repo could be cloned and compiled on any system supporting
GNU Make and the GNU cross compilers and toolchain.
The Makefile currently supports 3 targets -
1. all
   This target will build all static libraries, the Google Test libraries as
   well as the current Google Test executable. I say current because that
   executable ends up being named linkedList_test simply based on where the
   main () function is implemented.
   TODO: The main Google Test function will need to be moved to a more generic
   file to support more static libraries of data structures.
2. clean
   This target will clean all compiled object files, the library archives and
   the test executable from the build directory.
3. unittest
   This target will run the executable allowing you to see whether or not your
   unit test cases are passing or failing.

To build the code
cd build
make all

To clean the code
cd build
make clean

To run the unit tests
cd build
make unittest

### Testing the libraries
--------------------------------------------------------------------------------
As stated above, we are using the Google Test framework to allow unit testing
of the various data structure libraries we are implementing. As this is an
ongoing learning process I will hold off on adding more meat to this section
until we have moved beyond a single data structure library.

##### Authors- Jon Cronin, Scott McDonald
