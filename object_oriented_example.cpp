#include <iostream>
using namespace std;

class getsize
{
    public:
    float getwidth(float w)
    {
         return w;
    }

    float getlength(float l)
    {
        return l;
    }

    float getheight(float h)
    {
        return h;
    }
};

    class getvolume: public getsize
    {
    public:
        float volume(float w, float l, float h)
        {

        return (getheight(w)*getlength(l)*getwidth(h));
        }
    };

int main (float w, float l, float h)
{
    getvolume r;
    cout << "input width: "; cin >> w; r.getwidth(w);
    cout << "input length: "; cin >> l; r.getlength(l);
    cout << "input height: "; cin >> h; r.getheight(h);
    cout << r.volume(w, l, h);

    return 0;
}
