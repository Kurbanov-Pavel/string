#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(){
int numb;
string day;
cin >> numb;
if (numb>31)
cout << "Perehochesh";
else{
while(numb>7){
numb-=7;
}
switch(numb){
case 1:{
cout << "Ponedelnik";
break;
}
case 2:{
cout << "Vtornik";
break;
}
case 3:{
cout << "Sreda";
break;
}
case 4:{
cout << "Chetverg";
break;
}
case 5:{
cout << "Pytnizha";
break;
}
case 6:{
cout << "Subbota";
break;
}
case 7:{
cout << "Voskresenie";
break;
}

}
}
return 0;
}
