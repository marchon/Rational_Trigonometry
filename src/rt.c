	#include <stdint.h>
	#include "rt.h"


	// Three-Vector Addition
	
	Vect vect_add(Vect vect1, Vect vect2);
	{
		
			return vect_add;

	}



	// Three-Vector Subtraction

	Vect vect_sub(Vect vect1, Vect vect2);
	{
			
			return vect_sub;

	}



	// Three-Vector Scalar Multiplier

	Vect vect_scale(Vect vect1, int scale);
	{

			return vect_scale;

	}



	// Three-vector dot product (multiplying two three-vectors - returns scalar value of type int)

	int vect_dot(Vect vect1, Vect vect2;
	{

			return vect_dot;

	}



	// Three-Vector Quadrance (an important Rational Trigonometry concept)

	int vect_quad(Vect vect1);
	{

			return vect_quad;

	}



	// Spread between two Two-Vectors (an important Rational Trigonometry concept)

	int8_t vect_spread_2(TwoVect vect1, TwoVect vect2);
	{

			return vect_spread_2;

	}



	// Spread between three Three-Vectors (also known as "Solid Spread" -- each vector defines 4 edges of a parallelepiped)

	int8_t vect_spread_3(Vect vect1, Vect vect2, Vect vect3);
	{

			return vect_spread_3;

	}



	// Determines if two Three-Vectors are Perpindicular (right angle)

	bool vect_perp(Vect vect1, Vect vect2);
	{

			return vect_perp;

	}



	// Determines if two Three-Vectors are Parallel (i.e. strictly multiples of each other)

	bool vect_par(Vect vect1, Vect vect2);
	{

			return vect_par;

	}
	




	// FIVE MAIN LAWS IMPLEMENTATION


	int RT_Trip_Quad(Vect v1, Vect v2);
	{
		return  Trip_Quad;
	}



	bool RT_Pyth(Vect v1, Vect v2);
	{
		return Pyth;
	}




	// Triangle Equations

	void RT_Spread_Law(Vect v1, Vect v2, Vect v3, bool origin);
	{

	// Quadrance between two vector endpoints
	// Q1 = Q(v1, v2)
	// Q2 = Q(v1, v3)
	// Q3 = Q(v2, v3)
	// Can also be defined as the quadrance of the vect_sub
	// Q1 = Q(vect_sub(v1, v2)) = Q(v2 - v1)
	// Q2 = Q(vect_sub(v1, v3)) = Q(v3 - v1)
	// Q3 = Q(vect_sub(v2, v3)) = Q(v3 - v2)
	// bool origin is asking if the triangle will have a point at the origin
		return;
	}



	void RT_Cross_Law(Vect v1, Vect v2, Vect v3, bool origin);
	{
		return c_law;
	}



	void RT_Trip_Spread(Vect v1, Vect v2, Vect v3, bool origin);
	{
		return Trip_Spread;
	}

