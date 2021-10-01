/*
 * Author: Taylor Bazouzi
 * StudentID: 100579090
 * Date: September 30, 2021*
 * Description: ICE 3 ( Week 3 ) - Demo Project for OOP3200 - F2021
 * 
 */
#include <iostream>
#include <vector>

#include "Transform.h"
#include "Vector2D.h"

int main()
{
	// create an empty vector of Transform shape
	std::vector<Transform*> objects;

	// initializes 5 objects of type Transform
	// then store them inside the empty objects vector
	for (int i = 0; i < 5; ++i)
	{
		Transform* temp_object = new Transform();
		objects.push_back(temp_object);
	}

	int counter = 1;
	// for each object in objects
	for (Transform* object : objects)
	{
		std::cout << "-----------------------------" << std::endl;
		std::cout << "Object# " << counter << std::endl;
		object->position.Set(counter * 10.0f, 0.0f);
		std::cout << object->ToString() << std::endl;
		std::cout << "-----------------------------\n" << std::endl;
		counter++;
	}

	float speed = 10.0f;
	std::cout << "Object# 1 " << std::endl;
	objects[0]->position = objects[0]->position + Vector2D::Up() * speed;
	std::cout << objects[0]->position << std::endl;
}

