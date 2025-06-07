#pragma once
#include <random>
#include <vector>
namespace GeneratorPasswordsByArt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using System::String;
	using System::Convert;
	using namespace std;
	/// <summary>
	/// —водка дл€ mainform
	/// </summary>
	public ref class mainform : public System::Windows::Forms::Form
	{
	public:
		mainform(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~mainform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ GenerateButton;

	private: System::Windows::Forms::CheckBox^ UpperLettersCheck;

	private: System::Windows::Forms::CheckBox^ LowerLettersCheck;

	private: System::Windows::Forms::CheckBox^ NumbersCheck;
	private: System::Windows::Forms::CheckBox^ SpecialCharactersCheck;
	private: System::Windows::Forms::TextBox^ NumberEnter;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ genresult;
	private: System::Windows::Forms::TextBox^ NumberOfLinesEnter;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ CopyResultButton;






	protected:


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->GenerateButton = (gcnew System::Windows::Forms::Button());
			this->UpperLettersCheck = (gcnew System::Windows::Forms::CheckBox());
			this->LowerLettersCheck = (gcnew System::Windows::Forms::CheckBox());
			this->NumbersCheck = (gcnew System::Windows::Forms::CheckBox());
			this->SpecialCharactersCheck = (gcnew System::Windows::Forms::CheckBox());
			this->NumberEnter = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->genresult = (gcnew System::Windows::Forms::TextBox());
			this->NumberOfLinesEnter = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CopyResultButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// GenerateButton
			// 
			this->GenerateButton->Location = System::Drawing::Point(312, 244);
			this->GenerateButton->Name = L"GenerateButton";
			this->GenerateButton->Size = System::Drawing::Size(149, 47);
			this->GenerateButton->TabIndex = 0;
			this->GenerateButton->Text = L"Generate";
			this->GenerateButton->UseVisualStyleBackColor = true;
			this->GenerateButton->Click += gcnew System::EventHandler(this, &mainform::GenerateButton_Click);
			// 
			// UpperLettersCheck
			// 
			this->UpperLettersCheck->AutoSize = true;
			this->UpperLettersCheck->Location = System::Drawing::Point(47, 57);
			this->UpperLettersCheck->Name = L"UpperLettersCheck";
			this->UpperLettersCheck->Size = System::Drawing::Size(116, 17);
			this->UpperLettersCheck->TabIndex = 2;
			this->UpperLettersCheck->Text = L"Upper Letters (A-Z)";
			this->UpperLettersCheck->UseVisualStyleBackColor = true;
			// 
			// LowerLettersCheck
			// 
			this->LowerLettersCheck->AutoSize = true;
			this->LowerLettersCheck->Location = System::Drawing::Point(47, 34);
			this->LowerLettersCheck->Name = L"LowerLettersCheck";
			this->LowerLettersCheck->Size = System::Drawing::Size(113, 17);
			this->LowerLettersCheck->TabIndex = 3;
			this->LowerLettersCheck->Text = L"Lower Letters (a-z)";
			this->LowerLettersCheck->UseVisualStyleBackColor = true;
			// 
			// NumbersCheck
			// 
			this->NumbersCheck->AutoSize = true;
			this->NumbersCheck->Location = System::Drawing::Point(47, 80);
			this->NumbersCheck->Name = L"NumbersCheck";
			this->NumbersCheck->Size = System::Drawing::Size(92, 17);
			this->NumbersCheck->TabIndex = 4;
			this->NumbersCheck->Text = L"Numbers (0-9)";
			this->NumbersCheck->UseVisualStyleBackColor = true;
			// 
			// SpecialCharactersCheck
			// 
			this->SpecialCharactersCheck->AutoSize = true;
			this->SpecialCharactersCheck->Location = System::Drawing::Point(47, 104);
			this->SpecialCharactersCheck->Name = L"SpecialCharactersCheck";
			this->SpecialCharactersCheck->Size = System::Drawing::Size(285, 17);
			this->SpecialCharactersCheck->TabIndex = 5;
			this->SpecialCharactersCheck->Text = L"Special Characters (   !\"#$%&()*+,-./:;<=>\?@[\\]^_`{|}~   )";
			this->SpecialCharactersCheck->UseVisualStyleBackColor = true;
			// 
			// NumberEnter
			// 
			this->NumberEnter->Location = System::Drawing::Point(47, 6);
			this->NumberEnter->Name = L"NumberEnter";
			this->NumberEnter->Size = System::Drawing::Size(90, 20);
			this->NumberEnter->TabIndex = 6;
			this->NumberEnter->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &mainform::CheckDigit);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(143, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Number Of Characters In Generation";
			// 
			// genresult
			// 
			this->genresult->Location = System::Drawing::Point(48, 160);
			this->genresult->Multiline = true;
			this->genresult->Name = L"genresult";
			this->genresult->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->genresult->Size = System::Drawing::Size(216, 223);
			this->genresult->TabIndex = 8;
			// 
			// NumberOfLinesEnter
			// 
			this->NumberOfLinesEnter->Location = System::Drawing::Point(48, 127);
			this->NumberOfLinesEnter->Name = L"NumberOfLinesEnter";
			this->NumberOfLinesEnter->Size = System::Drawing::Size(90, 20);
			this->NumberOfLinesEnter->TabIndex = 9;
			this->NumberOfLinesEnter->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &mainform::CheckDigit);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(144, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Number Of Lines ";
			// 
			// CopyResultButton
			// 
			this->CopyResultButton->Location = System::Drawing::Point(48, 403);
			this->CopyResultButton->Name = L"CopyResultButton";
			this->CopyResultButton->Size = System::Drawing::Size(75, 23);
			this->CopyResultButton->TabIndex = 11;
			this->CopyResultButton->Text = L"Copy Result";
			this->CopyResultButton->UseVisualStyleBackColor = true;
			this->CopyResultButton->Visible = false;
			this->CopyResultButton->Click += gcnew System::EventHandler(this, &mainform::CopyResultButton_Click);
			// 
			// mainform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(633, 443);
			this->Controls->Add(this->CopyResultButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->NumberOfLinesEnter);
			this->Controls->Add(this->genresult);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->NumberEnter);
			this->Controls->Add(this->SpecialCharactersCheck);
			this->Controls->Add(this->NumbersCheck);
			this->Controls->Add(this->LowerLettersCheck);
			this->Controls->Add(this->UpperLettersCheck);
			this->Controls->Add(this->GenerateButton);
			this->Name = L"mainform";
			this->Text = L"Generator Passwords By Art";
			this->Load += gcnew System::EventHandler(this, &mainform::mainform_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void mainform_Load(System::Object^ sender, System::EventArgs^ e) {
	}

		   
	private: System::Void GenerateButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->NumberEnter->Text == "" || this->NumberEnter->Text == "0")
		{
			MessageBox::Show("Please select the number of characters", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (this->NumberOfLinesEnter->Text == "" || this->NumberOfLinesEnter->Text == "0")
		{
			MessageBox::Show("Please select the number of lines", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		vector<int> rand_range;

		if (this->LowerLettersCheck->Checked)
		{
			for (int i = 97; i < 123; i++)
				rand_range.push_back(i);
		}
		if (this->UpperLettersCheck->Checked)
		{
			for (int i = 65; i < 91; i++)
				rand_range.push_back(i);
		}
		if (this->NumbersCheck->Checked)
		{
			for (int i = 48; i < 58; i++)
				rand_range.push_back(i);
		}
		if (this->SpecialCharactersCheck->Checked)
		{
			for (int i = 33; i < 48; i++)
				rand_range.push_back(i);

			for (int i = 58; i < 65; i++)
				rand_range.push_back(i);
			for (int i = 91; i < 97; i++)
				rand_range.push_back(i);
			for (int i = 123; i < 127; i++)
				rand_range.push_back(i);
		}
		if (rand_range.size()==0)

		{
			MessageBox::Show("Please select at least one checkbox", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		random_device rd;                      
		mt19937 gen(rd());                     
		uniform_int_distribution<> dist(0, rand_range.size()-1); 
		
		String^ result = "";
		for (int j = 0; j < Convert::ToInt32(this->NumberOfLinesEnter->Text); j++)
		{
			String^ resik = "";
			for (int i = 0; i < Convert::ToInt32(this->NumberEnter->Text); i++)
			{
				char random_char = rand_range[dist(gen)];
				resik += (wchar_t)random_char;
			}
			result += resik;
			result += "\r\n";

		}
		result = result->TrimEnd();
		this->genresult->Text = result;
		this->CopyResultButton->Visible = true;
		

	}
	private: System::Void CopyResultButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->genresult->Text->Trim() == "")
		{
			MessageBox::Show("You can`t copy nothing", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		Clipboard::SetText(this->genresult->Text);
	}


	
private: System::Void CheckDigit(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	char ch = e->KeyChar;
	if  (  (ch < 48 || ch >57) && ch != 8 )
		e->Handled = true;

}
};
}
