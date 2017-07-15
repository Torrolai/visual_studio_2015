#pragma once
#ifndef  FIGHTERPLANE_H
#define  FIGHTERPLANE_H
#include "Plane.h"

class FighterPlane :public Plane
{
public:
	virtual void takeoff();
	virtual void land();
};
#endif // ! FIGHTERPLANE_H

