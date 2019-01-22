#include <iostream>
#include <string>
using namespace std;

int N,A,B,S;
string ar[2100];
string L;
string K;
int aar[2100];

int main()
{
    aar[1967]=1; 
    aar[1969]=1; 
    aar[1970]=1; 
    aar[1971]=1; 
    aar[1972]=1; 
    aar[1973]=2; 
    aar[1974]=1; 
    aar[1975]=1; 
    aar[1976]=1;
    aar[1977]=1; 
    aar[1977]=2; 
    aar[1979]=1; 
    aar[1980]=1; 
    aar[1983]=1; 
    aar[1984]=1; 
    aar[1987]=1; 
    aar[1993]=1; 
    aar[1995]=1; 
    aar[1997]=1; 
    aar[1999]=1; 
    aar[2002]=1; 
    aar[2003]=1; 
    aar[2013]=1; 
    aar[2016]=1; 
    
    ar[1967]= "DavidBowie";
    ar[1969]= "SpaceOddity";
    ar[1970]= "TheManWhoSoldTheWorld";
    ar[1971]= "HunkyDory";
    ar[1972]= "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars";
    ar[1973]= "AladdinSane";
    L= "PinUps";
    ar[1974]= "DiamondDogs";
    ar[1975]= "YoungAmericans";
    ar[1976]= "StationToStation";
    ar[1977]= "Low";
    K= "Heroes";
    ar[1979]= "Lodger";
    ar[1980]= "ScaryMonstersAndSuperCreeps";
    ar[1983]= "LetsDance";
    ar[1984]= "Tonight";
    ar[1987]= "NeverLetMeDown";
    ar[1993]= "BlackTieWhiteNoise";
    ar[1995]= "1.Outside";
    ar[1997]= "Earthling";
    ar[1999]= "Hours";
    ar[2002]= "Heathen";
    ar[2003]= "Reality";
    ar[2013]= "TheNextDay";
    ar[2016]= "BlackStar";
    
    cin>>N;
    for(int y=0; y<N; y++)
    {
        cin>>A>>B;
        S=0;
        for(int x=A; x<=B; x++)
        {
            S+=aar[x];
        }
        cout<<S<<endl;

        for(int x=A; x<=B; x++)
        {
            if(aar[x]>0) cout<<x<<" "<<ar[x]<<endl;
            if(x==1973) cout<<x<<" "<<L<<endl;
            if(x==1977) cout<<x<<" "<<K<<endl;
        }
    }
}
