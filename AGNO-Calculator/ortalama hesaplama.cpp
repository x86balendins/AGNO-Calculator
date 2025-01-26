#include <iostream>

// FF 0-35 // DD 35-40 // DC 40-50 // CC 50-60 // CB 60-70 // BB 70-80 // BA 80-90 // AA 90-100

using namespace std;


int main(){
	
	int a,b=0,c,agirlik=0,i;
	float ort=0;
	
	
	cout << "Kac adet dersiniz var?" << endl ;
	cin >> a ;
	
	a *= 2;
	
	int vizefinal[a];	
	int ortalama[a];
	
	for(i = 0 ; i < a ; i++){
		cout << "Vize notunuz: ";
		cin >> vizefinal[i];
		
		i++;
		
		cout << "Final notunuz: ";
		cin >> vizefinal[i];
		
		
		if(i>=1 && i%2 == 1){
			
			cout << "Ders agirligi: ";
			cin >> c ;
			cout << endl;
			agirlik += c;
			
			ortalama[b] = vizefinal[i-1]*0.4 + vizefinal[i]*0.6;
			ortalama[b+a] = c;
			b++;
		}
	}
	for(i = 0 ; i < a/2; i++){
		
	cout << i+1 << ".Ders\t" ;	
		
		if(vizefinal[(i*2+1)]<35 || ortalama[i]<35) {
			
			cout << "Ortalamaniz: " << ortalama[i];
		 	cout << "   kaldi   FF";
			
		}
		
		else{
			
			if(35 <= ortalama[i] && ortalama[i] < 40){
				
				cout << "Ortalamaniz: " << ortalama[i];
		 		cout << "   gecti   DD";
				
			}
		
			else if(40 <= ortalama[i] && ortalama[i] < 50){
				
				cout << "Ortalamaniz: " << ortalama[i];
		 		cout << "   gecti   DC";
				
			}
		
			else if(50 <= ortalama[i] && ortalama[i] < 60){
				
				cout << "Ortalamaniz: " << ortalama[i];
		 		cout << "   gecti   CC";
				
			}
		
			else if(60 <= ortalama[i] && ortalama[i] < 70){
				
				cout << "Ortalamaniz: " << ortalama[i];
		 		cout << "   gecti   CB";
				
			}
		
			else if(70 <= ortalama[i] && ortalama[i] < 80){
				
				cout << "Ortalamaniz: " << ortalama[i];
		 		cout << "   gecti   BB";
				
			}
		
			else if(80 <= ortalama[i] && ortalama[i] < 90){
				
				cout << "Ortalamaniz: " << ortalama[i];
		 		cout << "   gecti   BA";
				
			}
			
			else if(90 <= ortalama[i] && ortalama[i] <= 100){
				
				cout << "Ortalamaniz: " << ortalama[i];
		 		cout << "   gecti   AA";
				
			}
			
		}
		
		cout << endl;
		
	}
	
	cout << endl;
	
	for(i = 0 ; i < a/2 ; i++){
		
		if(vizefinal[(i*2+1)]<35 || ortalama[i]<35) {
			continue;
		 }
		 	
		ort += ortalama[i]*ortalama[i+a];
	}
	
	ort /= agirlik;
	
	cout << "AGNO: " << ort/25;
	
	return 0;
}
