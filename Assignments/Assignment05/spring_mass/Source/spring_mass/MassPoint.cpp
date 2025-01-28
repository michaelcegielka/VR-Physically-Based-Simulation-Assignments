// Fill out your copyright notice in the Description page of Project Settings.

#include "MassPoint.h"
#include "spring_mass.h"


MassPoint::MassPoint(uint32 vertex_id, bool movable, FVector pos) :
m_vertex_id(vertex_id),
m_currPos(pos),
m_force(FVector::ZeroVector),
m_velocity(FVector::ZeroVector),
m_movable(movable),
m_mass(0.00005)
{
}

void
MassPoint::updateGravity()
{
	// ToDo b):  Fix gravity
	if (m_movable)
	{
		FVector gravity = FVector(0.0f, 0.0f, -980.0f); // set punch force 20 -> 100 for more clear results

		// F = m * g
		FVector force_gravity = m_mass * gravity;
		addForce(force_gravity);
	}
}

void 
MassPoint::updateCurPos(float deltaT)
{
	if (m_movable)
	{
		// d) toDo: Verlet implementation
		FVector acceleration = m_force / m_mass;
		m_currPos += m_velocity * deltaT + 0.5f * acceleration * deltaT * deltaT;

		FVector new_acceleration = m_force / m_mass;
		m_velocity += 0.5 * (acceleration + new_acceleration) * deltaT;
	}
	m_force = FVector::ZeroVector;
}

void
MassPoint::addForce(FVector f)
{
	if (m_movable)
	{
		m_force += f;
	}
}

MassPoint::~MassPoint()
{
}
