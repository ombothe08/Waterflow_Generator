#pragma once
//#include "stdafx.h"
#include "Point3D.h"


class Triangle
{
public:
    Triangle();
    Triangle(int inVertex1, int inVertex2, int inVertex3);
    ~Triangle();

    const int vertex1() const;
    const int vertex2() const;
    const int vertex3() const;

private:
    int mVertex1;
    int mVertex2;
    int mVertex3;
    };