// Rational Trigonometry Implementation in C


#ifndef RT_H
#define RT_H

#ifdef __cplusplus

extern "C" 
{
	#endif

	#include <stdint.h>

	// Type Defenitions

	typedef struct threevect
	{
		int x, y, z;
		
	} Vect;

	// Three-Vector Addition
	
	Vect vect_add(Vect v1, Vect v2);


	// Three-Vector Subtraction

	Vect vect_sub(Vect v1, Vect v2);


	// Three-Vector Scalar Multiplier

	Vect vect_scale(Vect v1, int scale);

	// Three-vector dot product (multiplying two three-vectors - returns scalar value of type int)

	int vect_dot(Vect v1, Vect v2;


	// Three-Vector Quadrance (an important Rational Trigonometry concept)

	int vect_quad(Vect v1);


	// Spread between two Three-Vectors (an important Rational Trigonometry concept)

	int8_t vect_spread_2(Vect v1, Vect v2);


	// Spread between three Three-Vectors (also known as "Solid Spread" -- each vector defines 4 edges of a parallelepiped)

	int8_t vect_spread_3(Vect v1, Vect v2, Vect v3);


	// Determines if two Three-Vectors are Perpindicular (right angle)

	bool vect_perp(Vect v1, Vect v2);


	// Determines if two Three-Vectors are Parallel (i.e. strictly multiples of each other)

	bool vect_par(Vect v1, Vect v2);


	// Five Main Laws

	// Q1 = Quad(vect1)
	// Q2 = Quad(vect2)
	// Q3 = Quad(vect_sub(vect1, vect2)) = Quad(vect2 - vect1)

	int RT_Trip_Quad(Vect v1, Vect v2);

	// Checks perpindicularity between two vectors
	bool RT_Pyth(Vect v1, Vect v2);



	// Triangle Equations
	// For any triangle A1,A2,A3 with non-zero quadrances
	
	// Spread Law
	void RT_Spread_Law(Vect v1, Vect v2, Vect v3, bool origin);


	// Cross Law
	void RT_Cross_Law(Vect v1, Vect v2, Vect v3, bool origin);


	// Triple Spread Formula
	void RT_Trip_Spread(Vect v1, Vect v2, Vect v3, bool origin);






	#ifdef __cplusplus
}
#endif
#endif
