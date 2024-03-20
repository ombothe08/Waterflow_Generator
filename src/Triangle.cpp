#include "stdafx.h"
#include "Triangle.h"
using namespace std;

Triangle::Triangle()
{
}

Triangle ::~Triangle()
{
}

const int Triangle::vertex1() const
{
    return mVertex1;
}

const int Triangle::vertex2() const
{
    return mVertex2;
}

const int Triangle::vertex3() const
{
    return mVertex3;
}


Triangle::Triangle(int v1, int v2, int v3)
{
    mVertex1 = v1;
    mVertex2 = v2;
    mVertex3 = v3;
}