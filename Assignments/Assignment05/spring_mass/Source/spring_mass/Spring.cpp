// Fill out your copyright notice in the Description page of Project Settings.

#include "Spring.h"
#include "spring_mass.h"

Spring::Spring(MassPoint* m1, MassPoint* m2, float length) :
m_m1(m1), m_m2(m2), 
m_spring_length_init(length),
m_stiffness(0.1),
m_damper(0.001)
{
}

Spring::~Spring()
{
}


void Spring::Tick()
{
    FVector Delta = m_m1->m_currPos - m_m2->m_currPos;
    float CurrentLength = Delta.Size();

    if (CurrentLength == 0.0f)
    {
        return;
    }

    FVector direction = Delta / CurrentLength;

    // Hook Law
    FVector force_spring = -m_stiffness * (CurrentLength - m_spring_length_init) * direction;

    // relative speed
    FVector relativeVelocity = m_m1->m_velocity - m_m2->m_velocity;

    // Damping Force
    FVector force_damping = -m_damper * relativeVelocity;

    FVector totalForce = force_spring + force_damping;

    m_m1->addForce(totalForce);
    m_m2->addForce(-totalForce);
}
