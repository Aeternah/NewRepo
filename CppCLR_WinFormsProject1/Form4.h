#pragma once
#include "sqlite3.h"
#include <msclr\marshal_cppstd.h>
#include <string>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
		{
			InitializeComponent();
			InitializeDatabase();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^ labelNickname;
	private: System::Windows::Forms::TextBox^ textBoxNickname;
	private: System::Windows::Forms::Button^ buttonSave;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
           void InitializeComponent(void)
           {
               this->labelNickname = (gcnew System::Windows::Forms::Label());
               this->textBoxNickname = (gcnew System::Windows::Forms::TextBox());
               this->buttonSave = (gcnew System::Windows::Forms::Button());
               this->SuspendLayout();
               // 
               // labelNickname
               // 
               this->labelNickname->AutoSize = true;
               this->labelNickname->Location = System::Drawing::Point(13, 13);
               this->labelNickname->Name = L"labelNickname";
               this->labelNickname->Size = System::Drawing::Size(94, 13);
               this->labelNickname->TabIndex = 0;
               this->labelNickname->Text = L"Введите ваш ник:";
               // 
               // textBoxNickname
               // 
               this->textBoxNickname->Location = System::Drawing::Point(16, 30);
               this->textBoxNickname->Name = L"textBoxNickname";
               this->textBoxNickname->Size = System::Drawing::Size(256, 20);
               this->textBoxNickname->TabIndex = 1;
               // 
               // buttonSave
               // 
               this->buttonSave->Location = System::Drawing::Point(16, 57);
               this->buttonSave->Name = L"buttonSave";
               this->buttonSave->Size = System::Drawing::Size(75, 23);
               this->buttonSave->TabIndex = 2;
               this->buttonSave->Text = L"Сохранить";
               this->buttonSave->UseVisualStyleBackColor = true;
               this->buttonSave->Click += gcnew System::EventHandler(this, &Form4::buttonSave_Click);
               // 
               // Form1
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(284, 92);
               this->Controls->Add(this->buttonSave);
               this->Controls->Add(this->textBoxNickname);
               this->Controls->Add(this->labelNickname);
               this->Name = L"Form1";
               this->Text = L"NicknameSaver";
               this->ResumeLayout(false);
               this->PerformLayout();

           }

           void InitializeDatabase()
           {
               sqlite3* DB;
               int exit = 0;
               exit = sqlite3_open("highscores.db", &DB);
               std::string sql = "CREATE TABLE IF NOT EXISTS HIGHSCORES("
                   "ID INTEGER PRIMARY KEY AUTOINCREMENT, "
                   "NICKNAME TEXT NOT NULL, "
                   "SCORE INT DEFAULT 0);";
               sqlite3_exec(DB, sql.c_str(), NULL, 0, NULL);
               sqlite3_close(DB);
           }

           void buttonSave_Click(System::Object^ sender, System::EventArgs^ e)
           {
               String^ nickname = textBoxNickname->Text;
               if (!String::IsNullOrEmpty(nickname))
               {
                   sqlite3* DB;
                   sqlite3_open("highscores.db", &DB);

                   std::string sql = "INSERT INTO HIGHSCORES (NICKNAME) VALUES ('" + marshal_as<std::string>(nickname) + "');";
                   sqlite3_exec(DB, sql.c_str(), NULL, 0, NULL);
                   sqlite3_close(DB);

                   MessageBox::Show("Ник " + nickname + " сохранен!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
                   this->Close();
               }
               else
               {
                   MessageBox::Show("Пожалуйста, введите ник.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
               }
           }
    };
}