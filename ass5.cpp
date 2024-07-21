#include<iostream>
using namespace std;
  const float pie=3.14;
float volume(int r){
    float vol;
    vol=4.0/3.0*pie*r*r*r;
    return vol;

}
float volume (float lenght,float breadth,float height){
    float cubvol;
    cubvol=lenght*breadth*height;
    return cubvol;
}
float volume(float r, float height){
     float clyvol;
     clyvol=pie*r*r*height;
     return clyvol;
}
int main(){
    int r ,l,b,h;
    cout<<"enter the radius";
    cin>>r;
    cout<<"the volume of the sphere is "<<volume(r)<<endl;
    cout<<"enter lenght ,bredth,height";
    cin>>l>>b>>h;
    cout<<"volume of the cuboid is "<<volume(l,b,h)<<endl;
    cout<<"enter height of the volume"<<endl;
    cin>>h;
    cout<<"volume of the cylinder is"<<volume(r,h);
    return 0;
}