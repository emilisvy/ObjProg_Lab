#include "studentasvector.h"

Studentas::Studentas()
{

}
Studentas::~Studentas(){}

void Studentas::SkaiciuotiVid()
{
    int sum=0;
    for (int i=0; i < nd.size(); i++)
    {
        sum+=nd[i];
    }
    if (nd.size()!=0) vid= (sum/(double)nd.size());
    else vid=0;
}
void Studentas::SkaiciuotiMed()
{
    std::sort(nd.begin(), nd.end());
    if (nd.size()==0) med=0;
    else if (nd.size() % 2 !=0)
        med = (double)nd[nd.size()/2];
    else med= (double)( nd[(nd.size()-1) / 2] + nd[nd.size() / 2] ) / 2.0;
}
double Studentas::GalutinisPaz(double a)
{
    return a*0.4 + egz*0.6;
}