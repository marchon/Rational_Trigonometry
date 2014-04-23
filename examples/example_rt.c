#include <stdio.h>
#include <stdint.h>
#include "rt.h"


	// FIVE MAIN LAWS IMPLEMENTATION


	int RT_Trip_Quad(Vect v1, Vect v2)
	{


		return  Trip_Quad;
	}



	bool RT_Pyth(Vect v1, Vect v2)
	{
		return Pyth;
	}




	// Triangle Equations

	int seg_quad(Point p1, Point p2)
	{

	}


	void tri_quad(Point p1, Point p2, Point p3)
	{

	}



	void RT_Spread_Law(Vect v1, Vect v2, Vect v3, bool origin)
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



	void RT_Cross_Law(Vect v1, Vect v2, Vect v3, bool origin)
	{
		return c_law;
	}



	void RT_Trip_Spread(Vect v1, Vect v2, Vect v3, bool origin)
	{
		return Trip_Spread;
		printf(Trip_Sread);
	}



int main(void)
{
	
	Vect v1, v2, v3;
	bool origin;

	RT_Trip_Quad(Vect v1, Vect v2)

	RT_Pyth(Vect v1, Vect v2)

	seg_quad(Point p1, Point p2)

	tri_quad(Point p1, Point p2, Point p3)

	RT_Spread_Law(Vect v1, Vect v2, Vect v3, bool origin)

	RT_Cross_Law(Vect v1, Vect v2, Vect v3, bool origin)

	RT_Trip_Spread(Vect v1, Vect v2, Vect v3, bool origin)


	printf("Large data example to show function performance for Rational Trigonometry\n");
}

