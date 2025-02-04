#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
    public:
    int l,b,h;

    //Constructors

    Box(){
        l =0;
        b=0;
        h=0;
    }

    Box(int lenght,int breadth , int height){
        l = lenght;
        b = breadth;
        h = height;
    }

    Box (const Box& B){
        this->l = B.l;
        this->b = B.b;
        this->h = B.h;

    }

    //Getters
    int getlength(){
        return this->l;
    }

    int getbreadth(){
        return this->b;
    }

    int getheight(){
        return this->h;
    }

    long long CalculateVolume(){
        long long result = (long long)l*b*h;
        return result;
    }

    friend ostream &operator << ( ostream &output, Box B);

    bool operator < (const Box& B) const {
        if (l < B.l) {
            return true;
        } else if (l == B.l && b < B.b) {
            return true;
        } else if (l == B.l && b == B.b && h < B.h) {
            return true;
        }
        return false;
    }

};

ostream &operator << ( ostream &output, Box B){
    output << B.l << " " << B.b << " " << B.h;
    return output;
}



void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}