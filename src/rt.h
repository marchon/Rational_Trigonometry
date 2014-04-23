// Rational Trigonometry Implementation in C


#ifndef RT_H
#define RT_H

#ifdef __cplusplus

extern "C" 
{
	#endif

	#include <stdint.h>
	#include <stdbool.h>

	// Type Defenitions

	typedef struct threevect
	{
		int x, y, z;

	} Vect;

	typedef struct coord
	{
		int x, y, z;

	} Point;

	// Three-Vector Addition
	
	Vect vect_add(Vect v1, Vect v2);


	// Three-Vector Subtraction

	Vect vect_sub(Vect v1, Vect v2);


	// Three-Vector Scalar Multiplier

	Vect vect_scale(Vect v1, int scale);

	// Three-vector dot product (multiplying two three-vectors - returns scalar value of type int)

	int vect_dot(Vect v1, Vect v2);


	// Three-Vector Quadrance (an important Rational Trigonometry concept)

	int vect_quad(Vect v1);


	// Spread between two Three-Vectors (an important Rational Trigonometry concept)

	int8_t vect_spread(Vect v1, Vect v2);


	// Spread between three Three-Vectors (also known as "Solid Spread" -- each vector defines 4 edges of a parallelepiped)

	int8_t solid_spread(Vect v1, Vect v2, Vect v3);


	// Determines if two Three-Vectors are Perpindicular (right angle)

	bool vect_perp(Vect v1, Vect v2);


	// Determines if two Three-Vectors are Parallel (i.e. strictly multiples of each other)

	bool vect_par(Vect v1, Vect v2);



	#ifdef __cplusplus
}
#endif
#endif
