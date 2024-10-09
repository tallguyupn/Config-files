#include <iostream>
#include <string>


void summa (){
	// This is a function that works as a plus
	double x;
	double y;
   std::cout << '\n' << "Anna luku: " << '\n';
	std::cin >> x;
	std::cout << "Anna toinen luku: " << '\n';
	std::cin >> y;
	std::cout << "Vastaus on: " << x+y;
}

void erotus(){
	//this works as a minus
	double x;
	double y;
	std::cout << '\n' << "Anna luku: " << '\n';
	std::cin >> x;
	std::cout << "Anna toinen luku: " << '\n';
	std::cin >> y;
	std::cout << "Vastaus on: " << x-y;
}


void tulo(){
	//this as an multiplication
	double x;
	double y;
	std::cout << '\n' << "Anna luku: " << '\n';
	std::cin >> x;
	std::cout << "Anna toinen luku: " << '\n';
	std::cin >> y;
	std::cout << "Vastaus on: " << x*y;
}


void osam(){
	//and this as "divided by"
	double x;
	double y;
	std::cout << '\n' << "Anna luku: " << '\n';
	std::cin >> x;
	std::cout << "Anna toinen luku: " << '\n';
	std::cin >> y;
	std::cout << "Vastaus on: " << x/y;
}

int main () {
	//First you enter a character. Then you give 2 numbers when prompted. Then you can see the answer

	char vastaus;
	std::cout << "Minkä laskun haluat laskea? summa, erotus, tulo vai osamäärä. (s, e, t, o): " << '\n';
	std::cin >> vastaus;
    
	if (vastaus=='s'){
    	summa();
    	return 0;
	}

    
	if (vastaus=='e'){
    	erotus();
    	return 0;
	}

	if (vastaus == 't'){
    	tulo ();
    	return 0;
	}

	if (vastaus == 'o'){
    	osam();
    	return 0;
	}
}
