	#include <stdint.h>
	#include <stdbool.h>
	#include "rt.h"


	// Three-Vector Addition
	
	Vect vect_add(Vect v1, Vect v2)
	{
			Vect vect_add;
			
			int vect_add.x = v1.x + v2.x;
			int vect_add.y = v1.y + v2.y;
			int vect_add.z = v1.z + v2.z;

			return vect_add;

	}



	// Three-Vector Subtraction

	Vect vect_sub(Vect v1, Vect v2)
	{
			
			Vect vect_sub;
			
			int vect_sub.x = v1.x - v2.x;
			int vect_sub.y = v1.y - v2.y;
			int vect_sub.z = v1.z - v2.z;

			return vect_sub;

	}



	// Three-Vector Scalar Multiplier

	Vect vect_scale(Vect v1, int scale)
	{

			Vect vect_scale;
			
			int vect_scale.x = v1.x * scale;
			int vect_scale.y = v1.y * scale;
			int vect_scale.z = v1.z * scale;

			return vect_scale;

	}



	// Three-vector dot product (multiplying two three-vectors - returns scalar value of type int)

	int vect_dot(Vect v1, Vect v2)
	{

			
			int x = v1.x * v2.x;
			int y = v1.y * v2.y;
			int z = v1.z * v2.z;

			int vect_dot = x + y + z;

			return vect_dot;


	}



	// Three-Vector Quadrance (an important Rational Trigonometry concept)

	int vect_quad(Vect v1)
	{

			int x = v1.x * v1.x;
			int y = v1.y * v1.y;
			int z = v1.z * v1.z;

			int vect_quad = x + y + z;

			return vect_quad;

	}



	// Spread between two Two-Vectors (an important Rational Trigonometry concept)

	double vect_spread(Vect v1, Vect v2)
	{

			int vect_dot = vect_dot(v1, v2);
			int quad_1 = vect_quad(v1);
			int quad_2 = vect_quad(v2);

			int numer = vect_dot * vect_dot;
			int denom = quad_1 * quad_2;
			double quotient = numer / denom;

			double vect_spread = 1.00 - quotient;

			return vect_spread;

	}



	// Spread between three Three-Vectors (also known as "Solid Spread" -- each vector defines 4 edges of a parallelepiped)

	int solid_spread(Vect v1, Vect v2, Vect v3)
	{

			int first_term = v1.x * v2.y * v3.z;
			int second_term = v1.y * v2.z * v3.x;
			int third_term = v1.z * v2.x * v3.y;
			int fourth_term = v1.z * v2.y * v3.x;
			int fifth_term = v1.y * v2.x * v3.z;
			int sixth_term = v1.x * v2.z * v3.y;
			int determinant = first_term + second_term + third_term - fourth_term - fifth_term - sixth_term;
			int quad_1 = vect_quad(v1);
			int quad_2 = vect_quad(v2);
			int quad_3 = vect_quad(v3);
			int numerator = determinant * determinant;
			int denominator = quad_1 * quad_2 * quad_3;
			int solid_spread = numerator / denominator;

			return solid_spread;

	}



	// Determines if two Three-Vectors are Perpendicular (right angle)

	bool vect_perp(Vect v1, Vect v2)
	{
			bool vect_perp;

			int x = v1.x * v2.x;
			int y = v1.y * v2.y;
			int z = v1.z * v2.z;
			int perp = x + y + z;

			if(perp = 0)
				vect_perp = true;
			else
				vect_perp = false;

			return vect_perp;

	}



	// Determines if two Three-Vectors are Parallel (i.e. strictly multiples of each other)

	bool vect_par(Vect v1, Vect v2)
	{

			bool vect_par;

			int par1 = v1.x * v2.y - v2.x * v1.y;
			int par2 = v1.y * v2.z - v2.y * v1.z;
			int par3 = v1.z * v2.x - v2.z * v1.x;

			if(par1 = 0, par2 = 0, par3 = 0)
				return vect_par = true;
			else
				return vect_par = false;

	}








