#include <FindClosestPoint.h>
#include <Point3D.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<Point3D> points = {{5, 6, 7}, {0, -3, 3}, {3, 1, 3}, {7, 8, 9}};
  cout << "Points: " << endl;
  for (auto point : points) {
    point.ShowCoord();
  }
  FindClosestPoint findPoints(points);
  // findPoints.ClosestPoints();
  vector<Point3D> closestPoint = findPoints.ClosestPoints();
  cout << "\nResult: " << endl;
  for (auto point : closestPoint) {
    point.ShowCoord();
  }
  return 0;
}
