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
    FVector delta = m_m1->m_currPos - m_m2->m_currPos;
    float current_length = delta.Size();

    if (current_length == 0.0f)
    {
        return;
    }

    FVector direction = delta / current_length;

    // Hook Law
    FVector force_spring = -m_stiffness * (current_length - m_spring_length_init) * direction;

    // relative speed
    FVector relative_velocity = m_m1->m_velocity - m_m2->m_velocity;

    // Damping Force
    FVector force_damping = -m_damper * relative_velocity;

    FVector total_force = force_spring + force_damping;

    m_m1->addForce(total_force);
    m_m2->addForce(-total_force);
}
