#ifndef CAMERA_2_H
#define CAMERA_2_H

#include "Camera.h"
#include "Vector3.h"
#include <vector>

class Camera2 : public Camera
{
	enum STATE
	{
		JUMPING,
		NJUMPING,
	};

	int state;
public:
	Vector3 defaultPosition;
	Vector3 defaultTarget;
	Vector3 defaultUp;

	Camera2();
	~Camera2();
	virtual void Init(const Vector3& pos, const Vector3& target, const Vector3& up);
	virtual void Update(double dt, std::vector<Vector3> v, float w, float h, double* xPos, double* yPos);
	virtual void Reset();
	bool checkCollision(const std::vector<Vector3> v, Vector3 incr, std::string obj = "character");
};

#endif