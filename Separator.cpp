#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <cassert>

int generateId () {
    int lastGenarted = 0;

    return ++lastGenarted;
}

using namespace std;
class Stream
{
    private:
      int id;
      double mass_flow;
      string name;
    public:
      Stream(){ id = generateId(); }
      void setMassFlow(double m) { mass_flow=m; }
      double getMassFlow() { return mass_flow; }
      void print(){ cout<<"Stream: "<<id<<", flow: "<< mass_flow <<endl; }
};

int main() {
    shared_ptr<Stream> s1(new Stream());
    shared_ptr<Stream> s2(new Stream());
    shared_ptr<Stream> s3(new Stream());

    return 0;
}