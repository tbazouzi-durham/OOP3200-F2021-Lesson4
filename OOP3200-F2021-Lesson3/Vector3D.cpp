#include "Vector3D.h"

Vector3D::Vector3D(float const x = 0.0F, float const y = 0.0F, float const z = 0.)F
{
	// initialization: new set function that overrides the other
	Set(x, y, z);

}

Vector3D::~Vector3D()
= default;

float Vector3D::GetZ() const
{
	return m_z;
}

void Vector3D::Set(float x, float y, float z)
{
	// have only been given access to getters and setters from class
	SetX(x);
	SetY(y);
	SetZ(z);
}

void Vector3D::SetZ(float z)
{
	m_z = z;
}

std::string Vector3D::ToString() const
{
	std::string output_string;
	output_string += "(" + std::to_string(GetX()) + ", " + std::to_string(GetY()) + std::to_string(GetZ()) + ")";
	return output_string;


}

Vector3D Vector3D::Zero()
{
	return Vector3D();
}
