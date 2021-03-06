#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <list>
#include <iostream>
#include <vector> 

#include "fonction_math.hpp"
#include "Erreur.hpp"
#include "Pile.hpp"

using namespace std;


class Calculator{
	private:
		string calcul;
		string result;
		list<string> *calc_postfix;
		Pile operandes;
		vector<string> operators;
        vector <float> chiffres;
        int sizeO = 0;
        int sizeC = 0;
		
	/***********************************************************************************/
	/*		M E T H O D E 		I N I T I A L I S A T I O N 	*/
		bool bad_input(); //Check le calcul
	/***********************************************************************************/

	/***********************************************************************************/
	/*		M E T H O D E 		S T A T I C 	*/
		static list<string> split_calc(string s); //Découpe le calcul en list
	/***********************************************************************************/

	/***********************************************************************************/
	/*		E X E C U T I O N 		D U 		C A L C U L 	*/	
		void calc_to_postfix(); //Tranforme le calcul en calcul postfixé
		void postfix_eval(); //Execute le calcul
		void erase_zero(); //Supprime les zéros en trop après la virgule
	/***********************************************************************************/
		
	public:
		Calculator(string calcul);
		Calculator();
		string getCalcul();
		string getResult();
		void appendPile(string calcul);
		void flushPile(void);
		float moinss(int i, bool isFirts);
        float divi(int i, bool isFirts);
        float mult(int i, bool isFirts);
        float pluss(int i, bool isFirts);
        string calcule();
		bool isOperator(string buffer);
};

#endif