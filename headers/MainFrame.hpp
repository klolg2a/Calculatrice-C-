#ifndef MAINFRAME_H
#define MAINFRAME_H

#include "calculator.hpp"

enum{
	ID_BTN_DEL, ID_BTN_AC, ID_BTN_EGAL,
	ID_BTN_X,ID_BTN_DIV,ID_BTN_PLUS,ID_BTN_MOINS,ID_BTN_POINT,ID_BTN_NEG,
	ID_BTN_0,ID_BTN_1,ID_BTN_2,ID_BTN_3,ID_BTN_4,
	ID_BTN_5,ID_BTN_6,ID_BTN_7,ID_BTN_8,ID_BTN_9,ID_BTN_PI,
	ID_BTN_PD,ID_BTN_PG,
	ID_BTN_MPLUS, ID_BTN_MR, ID_BTN_MCLEAR, 
	ID_TXT_CALCINPUT
};


class MainFrame : public wxFrame{ //dérivée de wxFrame
	public:
		MainFrame(const wxString title,const wxPoint& pos, const wxSize& size); //Constructeur
		virtual ~MainFrame(); //Destructeur

	protected:

		string calcul;
		wxTextCtrl *txtCalcInput, *textValeur; //Zone d'affichage du calcul
		wxBoxSizer *sizer_principal; //Size principal
		wxGridSizer *gridButton; //Grille bouttons
		wxString save=wxT("");

/************* B U T T O N S ******************************************************************************/
		
		
		wxButton *btnDel,*btnAc,*btnEgal; //Touche controle
		wxButton *btnX,*btnDiv,*btnPlus,*btnMoins,*btnPoint, *btnNeg; //Operation de base
		wxButton *btn0,*btn1,*btn2,*btn3,*btn4,*btn5,*btn6,*btn7,*btn8,*btn9,*btnPi; //Boutton valeurs
		wxButton *btnPG, *btnPD;
		wxButton *btnMplus, *btnMr, *btnMclear;
/**********************************************************************************************************/

		Calculator c;

		void OnButton_DEL_Clicked(wxCommandEvent &event);
		void OnButton_AC_Clicked(wxCommandEvent &event);
		void OnButton_EGAL_Clicked(wxCommandEvent &event);
		void OnButton_X_Clicked(wxCommandEvent &event);
		void OnButton_DIV_Clicked(wxCommandEvent &event);
		void OnButton_PLUS_Clicked(wxCommandEvent &event);
		void OnButton_MOINS_Clicked(wxCommandEvent &event);
		void OnButton_POINT_Clicked(wxCommandEvent &event);
		void OnButton_NEG_Clicked(wxCommandEvent &event);
		void OnButton_0_Clicked(wxCommandEvent &event);
		void OnButton_1_Clicked(wxCommandEvent &event);
		void OnButton_2_Clicked(wxCommandEvent &event);
		void OnButton_3_Clicked(wxCommandEvent &event);
		void OnButton_4_Clicked(wxCommandEvent &event);
		void OnButton_5_Clicked(wxCommandEvent &event);
		void OnButton_6_Clicked(wxCommandEvent &event);
		void OnButton_7_Clicked(wxCommandEvent &event);
		void OnButton_8_Clicked(wxCommandEvent &event);
		void OnButton_9_Clicked(wxCommandEvent &event);
		void OnButton_PI_Clicked(wxCommandEvent &event);
		void OnButton_PG_Clicked(wxCommandEvent &event);
		void OnButton_PD_Clicked(wxCommandEvent &event);
		void OnButton_MPLUS_Clicked(wxCommandEvent &event);
		void OnButton_MCLEAR_Clicked(wxCommandEvent &event);
		void OnButton_MR_Clicked(wxCommandEvent &event);
		
		DECLARE_EVENT_TABLE()

};




#endif //MAINFRAME_H