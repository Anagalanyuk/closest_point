#pragma once
#include <Point3D.h>
#include <math.h>
#include <vector>

class FindClosestPoint {
public:
  FindClosestPoint(std::vector<Point3D> &points) { m_points = points; }
  std::vector<Point3D> ClosestPoints();
  int Distance(const Point3D &point1, const Point3D &point2);

private:
  std::vector<Point3D> m_points;
  std::vector<Point3D> m_closesPoint;
};

std::vector<Point3D> FindClosestPoint::ClosestPoints() {
  if (m_points.size() > 1) {

    int distance = Distance(m_points[0], m_points[1]);
    int indexPoint1 = 0;
    int indexPoint2 = 0;
    for (uint i = 0; i < m_points.size() - 1; ++i) {
      for (uint j = i + 1; j < m_points.size(); ++j) {
        int result = Distance(m_points[j], m_points[i]);
        if (distance > result) {
          distance = result;
          indexPoint1 = i;
          indexPoint2 = j;
          ;
        }
        //        std::cout << "distance: " << Distance(m_points[j],
        //        m_points[i])
        //                  << std::endl;
      }
    }
    m_closesPoint.push_back(m_points[indexPoint1]);
    m_closesPoint.push_back(m_points[indexPoint2]);
    //    std::cout << "Result: " << std::endl;
    //    std::cout << "min dist: " << distance << std::endl;
    //    std::cout << "point: " << indexPoint1 << " : " << indexPoint2 <<
    //    std::endl;
    return m_closesPoint;
  }
}

int FindClosestPoint::Distance(const Point3D &point1, const Point3D &point2) {

  int distance = 0;
  distance = pow((point2.GetX() - point1.GetX()), 2) +
             pow((point2.GetY() - point1.GetY()), 2) +
             pow((point2.GetZ() - point1.GetZ()), 2);
  return sqrt(distance);
  ;
}
