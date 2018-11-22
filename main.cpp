#include <iostream>
#include "BMP.h"

int main() {
	BMP bmp9("t1_24.bmp");
	bmp9.fill_region(0, 0, 50, 50, 0, 0, 255, 255);
	bmp9.fill_region(150, 0, 100, 150, 0, 255, 0, 255);
	bmp9.write("t1_24_copy.bmp");

	BMP bmp10("t2_24.bmp");
	bmp10.fill_region(0, 0, 50, 50, 0, 0, 255, 255);
	bmp10.fill_region(150, 0, 100, 150, 0, 255, 0, 255);
	bmp10.write("t2_24_copy.bmp");

	BMP bmp5("Shapes_24.bmp");
	bmp5.fill_region(0, 0, 100, 200, 0, 0, 255, 255);
	bmp5.fill_region(150, 0, 209, 203, 0, 255, 0, 255);
	bmp5.write("Shapes_24_copy.bmp");

	// Read an image from disk and write it back:
	BMP bmp("Shapes.bmp");
	bmp.fill_region(0, 0, 100, 200, 0, 0, 255, 255);
	bmp.write("Shapes_copy.bmp");

	// Create a BMP image in memory, modify it, save it on disk
	BMP bmp2(800, 600);
	bmp2.fill_region(50, 20, 100, 200, 0, 0, 255, 255);
	bmp2.write("img_test.bmp");

	// Create a 24 bits/pixel BMP image in memory, modify it, save it on disk
	BMP bmp3(200, 200, false);
	bmp3.fill_region(50, 20, 100, 100, 255, 0, 255, 255);
	bmp3.write("img_test_24bits.bmp");

	BMP bmp4("img_test_24bits.bmp");
	bmp4.write("img_test_24bits_2.bmp");

	BMP bmp6(403, 305, false);
	bmp6.fill_region(0, 0, 50, 50, 0, 0, 255, 0);
	bmp6.write("test6.bmp");

	BMP bmp7("test6.bmp");
	bmp7.fill_region(0, 0, 40, 40, 255, 0, 0, 0);
	bmp7.write("test6_2.bmp");

	BMP bmp8(200, 200, false);
	bmp8.fill_region(0, 0, 100, 100, 255, 0, 255, 255);
	bmp8.write("img_test_24bits_3.bmp");

	BMP bmp11("test_pnet.bmp");
	bmp11.fill_region(0, 0, 100, 100, 255, 0, 255, 255);
	bmp11.write("test_pnet_copy.bmp");
}
