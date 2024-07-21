#include<iostream>
using namespace std;
const  float pie=3.14;
class volume{
    float radius;
    float l,w,h;
    public:
float volume(float r){
    float vol;
    vol=4.0/3.0*pie*r*r*r;
    return vol;
}
float volume(float length,float width,float height){
    l=length;
    w=width;
    h=height;
    float cubvol;
    cubvol=length*width*height;
    return cubvol;

}
float volume(float r,float height)
radius=r;
h=height;
{
    float clyvol;
    clyvol=pie*r*r*height;
    return clyvol;
}
};
int main(){
    float  a,l,w,h;
    cout<<"enter the value of the radius"<<endl;
    cin>>a;
    cout<<"the volume of the sphere is"<<volume(a)<<endl; 
    cout<<"enterthe value of the length,width,height of the cubiod"<<endl;
    cin>>l>>w>>h;
    cout<<"the volume of the cuboid is "<<volume(l,w,h)<<endl;
    cout<<"the volume of the cylinder is  "<<volume(a,h)<<endl;
    return 0;
}