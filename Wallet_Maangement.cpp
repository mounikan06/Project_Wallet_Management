#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*Define your Wallet class here*/

class Wallet
{
    public:
    Wallet()
    {
        den=new int[15];
        for(int i=0;i<15;i++)
        {
            den[i]=0;
        }
    }
    int operator [] (double x)
    {
        if(x==2000)
        {
            return den[0];
        }
        else if(x==500)
        {
            return den[1];
        }
        else if(x==200)
        {
            return den[2];
        }
        else if(x==100)
        {
            return den[3];
        }
        else if(x==50)
        {
            return den[4];
        }
        else if(x==20)
        {
            return (den[5]+den[8]);
        }
        else if(x==10)
        {
            return (den[6]+den[9]);
        }
        else if(x==5)
        {
            return (den[7]+den[10]);
        }
        else if(x==2)
        {
            return den[11];
        }
        else if(x==1)
        {
            return den[12];
        }
        else if(x==0.5)
        {
            return den[13];
        }
        else
        {
            return den[14];
        }
    }
    int read(int i)
    {
        return den[i];
    }
    operator double ()
    {
        double total=0;
        total=2000*den[0]+500*den[1]+200*den[2]+100*den[3]+50*den[4]+20*(den[5]+den[8])+10*(den[6]+den[9])+5*(den[7]+den[10])+2*den[11]+den[12]+(0.5)*den[13]+(0.25)*den[14];
        return total;
    }
    void operator + (Wallet w)
    {
        for(int i=0;i<15;i++)
        {
            den[i]+=w.read(i);
        }
    }
    void operator - (Wallet w)
    {
        for(int i=0;i<15;i++)
        {
            den[i]=den[i]-w.read(i);
        }
    }
    void operator + (double d)
    {
        if(d>=2000)
        {
            int count=0;
            while(d>=2000)
            {
                d=d-2000;
                count++;
            }
            den[0]+=count;
        }
        if(d>=500)
        {
            int count=0;
            while(d>=500)
            {
                d=d-500;
                count++;
            }
            den[1]+=count;
        }
        if(d>=200)
        {
            int count=0;
            while(d>=200)
            {
                d=d-200;
                count++;
            }
            den[2]+=count;
        }
        if(d>=100)
        {
            int count=0;
            while(d>=100)
            {
                d=d-100;
                count++;
            }
            den[3]+=count;
        }
        if(d>=50)
        {
            int count=0;
            while(d>=50)
            {
                d=d-50;
                count++;
            }
            den[4]+=count;
        }
        if(d>=20)
        {
            int count=0;
            while(d>=20)
            {
                d=d-20;
                count++;
            }
            den[5]+=count;
        }
        if(d>=10)
        {
            int count=0;
            while(d>=10)
            {
                d=d-10;
                count++;
            }
            den[6]+=count;
        }
        if(d>=5)
        {
            int count=0;
            while(d>=5)
            {
                d=d-5;
                count++;
            }
            den[7]+=count;
        }
        if(d>=2)
        {
            int count=0;
            while(d>=2)
            {
                d=d-2;
                count++;
            }
            den[11]+=count;
        }
        if(d>=1)
        {
            int count=0;
            while(d>=1)
            {
                d=d-1;
                count++;
            }
            den[12]+=count;
        }
        if(d>=0.5)
        {
            int count=0;
            while(d>=0.5)
            {
                d=d-0.5;
                count++;
            }
            den[13]+=count;
        }
        if(d>=0.25)
        {
            int count=0;
            while(d>=0.25)
            {
                d=d-0.25;
                count++;
            }
            den[14]+=count;
        }
    }
    void operator * (Wallet w)
    {
        double total=0;
        total=2000*den[0]+500*den[1]+200*den[2]+100*den[3]+50*den[4]+20*(den[5]+den[8])+10*(den[6]+den[9])+5*(den[7]+den[10])+2*den[11]+den[12]+(0.5)*den[13]+(0.25)*den[14];
       double total1=0; total1=2000*w.read(0)+500*w.read(1)+200*w.read(2)+100*w.read(3)+50*w.read(4)+20*(w.read(5)+w.read(8))+10*(w.read(6)+w.read(9))+5*(w.read(7)+w.read(10))+2*w.read(11)+w.read(12)+(0.5)*w.read(13)+(0.25)*w.read(14);
        for(int i=0;i<15;i++)
        {
            den[i]=0;
        }
        double d=total*total1;
        if(d>=2000)
        {
            int count=0;
            while(d>=2000)
            {
                d=d-2000;
                count++;
            }
            den[0]+=count;
        }
        if(d>=500)
        {
            int count=0;
            while(d>=500)
            {
                d=d-500;
                count++;
            }
            den[1]+=count;
        }
        if(d>=200)
        {
            int count=0;
            while(d>=200)
            {
                d=d-200;
                count++;
            }
            den[2]+=count;
        }
        if(d>=100)
        {
            int count=0;
            while(d>=100)
            {
                d=d-100;
                count++;
            }
            den[3]+=count;
        }
        if(d>=50)
        {
            int count=0;
            while(d>=50)
            {
                d=d-50;
                count++;
            }
            den[4]+=count;
        }
        if(d>=20)
        {
            int count=0;
            while(d>=20)
            {
                d=d-20;
                count++;
            }
            den[5]+=count;
        }
        if(d>=10)
        {
            int count=0;
            while(d>=10)
            {
                d=d-10;
                count++;
            }
            den[6]+=count;
        }
        if(d>=5)
        {
            int count=0;
            while(d>=5)
            {
                d=d-5;
                count++;
            }
            den[7]+=count;
        }
        if(d>=2)
        {
            int count=0;
            while(d>=2)
            {
                d=d-2;
                count++;
            }
            den[11]+=count;
        }
        if(d>=1)
        {
            int count=0;
            while(d>=1)
            {
                d=d-1;
                count++;
            }
            den[12]+=count;
        }
        if(d>=0.5)
        {
            int count=0;
            while(d>=0.5)
            {
                d=d-0.5;
                count++;
            }
            den[13]+=count;
        }
        if(d>=0.25)
        {
            int count=0;
            while(d>=0.25)
            {
                d=d-0.25;
                count++;
            }
            den[14]+=count;
        }
    }
    void operator * (double d)
    {
        double total=0;
        total=2000*den[0]+500*den[1]+200*den[2]+100*den[3]+50*den[4]+20*(den[5]+den[8])+10*(den[6]+den[9])+5*(den[7]+den[10])+2*den[11]+den[12]+(0.5)*den[13]+(0.25)*den[14];
        d=d*total;
        for(int i=0;i<15;i++)
        {
            den[i]=0;
        }
        if(d>=2000)
        {
            int count=0;
            while(d>=2000)
            {
                d=d-2000;
                count++;
            }
            den[0]+=count;
        }
        if(d>=500)
        {
            int count=0;
            while(d>=500)
            {
                d=d-500;
                count++;
            }
            den[1]+=count;
        }
        if(d>=200)
        {
            int count=0;
            while(d>=200)
            {
                d=d-200;
                count++;
            }
            den[2]+=count;
        }
        if(d>=100)
        {
            int count=0;
            while(d>=100)
            {
                d=d-100;
                count++;
            }
            den[3]+=count;
        }
        if(d>=50)
        {
            int count=0;
            while(d>=50)
            {
                d=d-50;
                count++;
            }
            den[4]+=count;
        }
        if(d>=20)
        {
            int count=0;
            while(d>=20)
            {
                d=d-20;
                count++;
            }
            den[5]+=count;
        }
        if(d>=10)
        {
            int count=0;
            while(d>=10)
            {
                d=d-10;
                count++;
            }
            den[6]+=count;
        }
        if(d>=5)
        {
            int count=0;
            while(d>=5)
            {
                d=d-5;
                count++;
            }
            den[7]+=count;
        }
        if(d>=2)
        {
            int count=0;
            while(d>=2)
            {
                d=d-2;
                count++;
            }
            den[11]+=count;
        }
        if(d>=1)
        {
            int count=0;
            while(d>=1)
            {
                d=d-1;
                count++;
            }
            den[12]+=count;
        }
        if(d>=0.5)
        {
            int count=0;
            while(d>=0.5)
            {
                d=d-0.5;
                count++;
            }
            den[13]+=count;
        }
        if(d>=0.25)
        {
            int count=0;
            while(d>=0.25)
            {
                d=d-0.25;
                count++;
            }
            den[14]+=count;
        }
    }
    friend istream & operator >> (istream & take, Wallet & w);
    friend ostream & operator << (ostream & show, Wallet & w);
    private:
    int *den;
};
istream & operator >> (istream & take, Wallet & w)
{
    for(int i=0;i<15;i++)
    {
        take>>w.den[i];
    }
    return take;
}
ostream & operator << (ostream & show, Wallet & w)
{
    show <<"("<<2000<<" "<<w.den[0]<<")"<<" "<<"("<<500<<" "<<w.den[1]<<")"<<" "<<"("<<200<<" "<<w.den[2]<<")"<<" "<<"("<<100<<" "<<w.den[3]<<")"<<" "<<"("<<50<<" "<<w.den[4]<<")"<<" "<<"("<<"20n"<<" "<<w.den[5]<<")"<<" "<<"("<<"10n"<<" "<<w.den[6]<<")"<<" "<<"("<<"5n"<<" "<<w.den[7]<<")"<<" "<<"("<<"20c"<<" "<<w.den[8]<<")"<<" "<<"("<<"10c"<<" "<<w.den[9]<<")"<<" "<<"("<<"5c"<<" "<<w.den[10]<<")"<<" "<<"("<<2<<" "<<w.den[11]<<")"<<" "<<"("<<1<<" "<<w.den[12]<<")"<<" "<<"("<<0.5<<" "<<w.den[13]<<")"<<" "<<"("<<0.25<<" "<<w.den[14]<<")";
    return show;
}

int main()
{
    int N;
    cin >> N;
    Wallet w,w1;
    int command;
    double d;
    for (int i = 0; i < N; i++)
    {
        cin >> command;
        switch (command)
        {
            case 1: /*initialize wallet*/
                cin >> w;
                break;
            
            case 2: /*print wallet*/
                cout << "Wallet contains: " << w << endl;
                break;
            
            case 3: /*wallet balance*/
                cout << "Wallet has balance: " << (double) w << endl;
                break;
            
            case 4: /*denomination query*/
                cin >> d;
                cout << "Wallet contains " << w[d] << " number of notes/coins of denomination " << d << endl;
                break;
            
            case 5: /*add two wallets*/
                cin >> w1;
                w + w1;
                break;
            
            case 6: /*add money to wallet*/
                cin >> d;
                w + d;
                break;

            case 7: /*subtract from wallet*/
                cin >> w1;
                w - w1;
                break;
            
            case 8: /*multiply wallets*/
                cin >> w1;
                w * w1;
                break;
            
            case 9: /*multiply wallet and double*/
                cin >> d;
                w * d;
                break;

            default:
                break;
        }
    }
}