#pragma once
#include <iostream>

class Point3D {
public:
  Point3D(const int x, const int y, const int z) {
    m_x = x;
    m_y = y;
    m_z = z;
  }

  void SetX(const int x) { m_x = x; }
  void SetY(const int y) { m_y = y; }
  void SetZ(const int z) { m_z = z; }

  int GetX() const { return m_x; }
  int GetY() const { return m_y; }
  int GetZ() const { return m_z; }

  void ShowCoord() {
    std::cout << "x:" << m_x << " y:" << m_y << " z:" << m_z << std::endl;
    ;
  }

private:
  int m_x = 0;
  int m_y = 0;
  int m_z = 0;
};
