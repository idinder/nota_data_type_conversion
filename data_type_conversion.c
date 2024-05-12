// data type conversion atau penukaran data type
// data type boleh berubah mengikut hierarki data dari bawah ke atas
// contohnya :         (data types secara implicit(automatic) akan ditukar
//                      menjadi data type yang paling tinggi yg dinyatakan)
// hierarki data type dalam C :
// 1.long double 
// 2.double
// 3.float
// 4.long int
// 5.int
// 6.short int
// 7.char

// ada dua cara data type conversion iaitu :
// 1. implicit (secara automatik)
// 2. explicit (secara manual)

// contoh dibawah adalah penukaran data type dari int kepada float (implicit)

#include <stdio.h>

int main (){
	
	int a = 5;  // int data type
	float b = 1.6;    // float data type
	
	float result = a + b;  // dalam ini, data type int akan berubah jadi float
	                       // baru akan berlaku arithmetic operation (+)
	
	printf("%.2f\n", result);
	
	/* nota tambahan, data type sum akan ikut data type variable result kerana
	 secara umumnya data type variable kiri akan menentukan data type variable belah kanan. */
	
	// itu adalah implicit(automatically) data conversion, ia akan mengikut hierarki data type
	// untuk conversion
	
	// bawah ni pulak contoh explicit data conversion ataupun
	// data conversion yang kita buat sendiri secara manual.
	
	int c = 5;
	int d = 2;
	
    result  = (float)c / d;  // dalam ni, variable c yang asalnya menyimpan data type int diconvert
    //                         kepada float dengan cara explicit data convertion (float)c
	//                         dan membuat variable d akan diconvert
    //                         sekali kepada float untuk menyelesaikan arithmethic operation bahagi.
    printf("%.2f", result);
	
	return 0;
}
