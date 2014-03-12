// Rational Trigonometry Implementation in C


#include <stdint.h>

#ifndef RT_H
#define RT_H

#ifdef __cplusplus

extern "C" 
{
	#endif


	// Three-Vector Mathematics

	#define threevect int threevect[3];						// A Three-Vector
	#define vect_add int vect_add[3];						// Three-Vector Addition
	#define vect_sub int vect_sub[3];						// Three-Vector Subtraction
	#define vect_scale int vect_scale[3];					// Scalar multiplication for a Three-Vector
	#define vect_quad int Q;								// Quadrance in three dimensions -- is always positive
	#define vect_perp bool vect_perp;						// Boolean value for if two Three-Vectors are perpindicular
	#define vect_par  bool vect_par;						// Boolean value for if two Three-Vectos are parallel
	#define vect_dot  int dot;								// Dot product between two Three-Vectors
	#define vect_spread int8_t s_value;						// Spread between two Three-Vectors (takes values between 0 and 1 in mathematics)


	// Five Main Laws

	extern int RT_Trip_Quad();
	extern int RT_Pyth();
	extern int RT_Spread_Law();
	extern int RT_Cross_Law();
	extern int RT_Trip_Spread();



	// Three-Vector Addition
	
	extern int vect_add(int vect_1[3], int vect_2[3])
	{
			int i;

			for(i=0; i < 3; ++i;)
			{
				*vect_1[i] = vect1;
				*vect_2[i] = vect2;
				*vect_add[i] = vect1 + vect2;
			}
				
			return vect_add;

	}


	// Three-Vector Subtraction

	extern int vect_sub(int vect_1[3], int vect_2[3])
	{
			int i;

			for(i=0; i < 3; ++i;)
			{
				*vect_1[i] = vect1;
				*vect_2[i] = vect2;
				*vect_sub[i] = vect2 - vect1;
			}
				
			return vect_sub;

	}


	// Three-Vector Scalar Multiplier

	extern int vect_scale(int vect_1[3], int scale)
	{
			int i;

			for(i=0; i < 3; ++i;)
			{
				*vect_1[i] = vect1;
				*vect_scale[i] = vect1 * scale;
			}
				
			return vect_scale;

	}


	// Three-vector dot product (multiplying two three-vectors - returns scalar value of type int)

	extern int vect_dot(int * vect_1)
	{
			int i;
			int total = 0;

			for(i=0; i < 3; ++i;)
			{
				total += vect_1[i] * vect_1[i];
				vect_quad = total;

			}
				
			return vect_quad;

	}




	// Three-Vector Quadrance (an important Rational Trigonometry concept)

	extern int vect_quad(int * vect_1)
	{
			int i;
			int total = 0;

			for(i=0; i < 3; ++i;)
			{
				total += vect_1[i] * vect_1[i];
				vect_quad = total;

			}
				
			return vect_quad;

	}



	// Spread between two Three-Vectors (an important Rational Trigonometry concept)

	extern int vect_spread(int vect_1[2], vect_2[2])
	{
			int i;
			int quad_1 = vect_quad(vect_1[2]);
			int quad_2 = vect_quad(vect_2[2]);

			for(i=0; i < 2; ++i;)
			{
				for(j=0; j < 2; ++j;)

			}
				
			return vect_spread;

	}



	// Spread between three Three-Vectors (also known as "Solid Spread" -- each vector defines 4 edges of a parallelepiped)

	extern int vect_spread(int vect_1[3], vect_2[3], int vect_3[3])
	{
			int i;
			int quad_1 = vect_quad(vect_1[3]);
			int quad_2 = vect_quad(vect_2[3]);
			int quad_3 = vect_quad(vect_3[3]);

			for(i=0; i < 3; ++i;)
			{
				total += vect_1[i] * vect_1[i];
				vect_quad = total;

			}
				
			return vect_spread;

	}




	// Determines if two Three-Vectors are Perpindicular (right angle)

	extern int vect_perp(int vect_1[3], int vect_2[3])
	{
			int i;

			for(i=0; i < 3; ++i)
			{
				total += vect_1[i] * vect_2[i];
				if (total = 0)
					vect_perp = true;
				else
					vect_perp = false;

			}
				
			return vect_perp;

	}


	// Determines if two Three-Vectors are Parallel (i.e. strictly multiples of each other)

	extern int vect_par(int vect_1[3], int vect_2[3])
	{
			int i;

			for(i=0; i < 3; ++i)
			{
				value_1 = vect_1[0] * vect_2[1] - vect_1[1] * vect_2[0];
				value_2 = vect_1[1] * vect_2[2] - vect_1[2] * vect_2[1];
				value_3 = vect_1[2] * vect_2[0] - vect_1[0] * vect_2[2];

				if (value_1 = 0, value_2 = 0, value_3 = 0)
					vect_par = true;
				else
					vect_par = false;

			}
				
			return vect_par;

	}




	// FIVE MAIN LAWS IMPLEMENTATION








	#ifdef __cplusplus
}
#endif
#endif
