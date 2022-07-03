#pragma once
#include "ArtWork.h"

namespace ArtGallery {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ArtWorkForm
	/// </summary>
	public ref class ArtWorkForm : public System::Windows::Forms::Form
	{
		ArtWork* artWork;
	public:
		ArtWorkForm(ArtWork* A)
		{
			InitializeComponent();
			artWork = A;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ArtWorkForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(119, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// ArtWorkForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ArtWorkForm";
			this->Text = L"ArtWorkForm";
			this->Load += gcnew System::EventHandler(this, &ArtWorkForm::ArtWorkForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ArtWorkForm_Load(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = gcnew String(artWork->getTitle().c_str());
		label2->Text = "by " + gcnew String(artWork->getCreator()->get_name().c_str());
	}
	};
}
