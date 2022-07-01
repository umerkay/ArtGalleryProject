//#include "OOPLogic.h"
#include "Gallery.h"

namespace ArtGallery {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	Gallery* GalleryApp;
	public:
		Home(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void setDataStore(Gallery* DataStore) {
			this->GalleryApp = DataStore;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ welcomeMsg;
	private: System::Windows::Forms::Button^ logoutbtn;

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->welcomeMsg = (gcnew System::Windows::Forms::Label());
			this->logoutbtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// welcomeMsg
			// 
			this->welcomeMsg->AutoSize = true;
			this->welcomeMsg->Location = System::Drawing::Point(13, 13);
			this->welcomeMsg->Name = L"welcomeMsg";
			this->welcomeMsg->Size = System::Drawing::Size(87, 16);
			this->welcomeMsg->TabIndex = 0;
			this->welcomeMsg->Text = L"welcomeMsg";
			// 
			// logoutbtn
			// 
			this->logoutbtn->Location = System::Drawing::Point(16, 43);
			this->logoutbtn->Name = L"logoutbtn";
			this->logoutbtn->Size = System::Drawing::Size(75, 23);
			this->logoutbtn->TabIndex = 1;
			this->logoutbtn->Text = L"Logout";
			this->logoutbtn->UseVisualStyleBackColor = true;
			this->logoutbtn->Click += gcnew System::EventHandler(this, &Home::logoutbtn_Click);
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->logoutbtn);
			this->Controls->Add(this->welcomeMsg);
			this->Name = L"Home";
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {
		welcomeMsg->Text = "Welcome " + gcnew String(GalleryApp->getCurrUser()->getUsername().c_str());
	}
	private: System::Void logoutbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		GalleryApp->logoutUser();
		this->Close();
	}
	};
}