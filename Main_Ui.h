#pragma once
#include <string>
#include <windows.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <msclr/marshal_cppstd.h>
#include "libxl.h"
#include <comdef.h> // you will need this

using namespace libxl;
template <class Key,											// map::key_type
		  class T,												// map::mapped_type
		  class Compare = std::less<Key>,						// map::key_compare
		  class Alloc = std::allocator<std::pair<const Key, T>> // map::allocator_type
		  >
class map;
namespace TimeTableLinkerProject
{
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main_Ui
	/// </summary>
public
	ref class Main_Ui : public System::Windows::Forms::Form
	{
	public:
		Main_Ui(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main_Ui()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Button ^ create_quick_meet_btn;

	protected:
	private:
		System::Windows::Forms::Button ^ choose_excel_file_btn;

	private:
		System::Windows::Forms::TextBox ^ textBox1;

	private:
		System::Windows::Forms::OpenFileDialog ^ openFileDialog1;

	private:
		System::Windows::Forms::Button ^ read_file_btn;

	private:
		System::Windows::Forms::TextBox ^ textBox2;

	private:
	private:
		System::Windows::Forms::Label ^ monday_label;

	private:
		System::Windows::Forms::Label ^ tuesday_label;

	private:
		System::Windows::Forms::Button ^ monday_lec1_btn;

	private:
		System::Windows::Forms::Button ^ tuesday_lec1_btn;

	private:
		System::Windows::Forms::Label ^ wednesday_label;

	private:
		System::Windows::Forms::Label ^ thursday_label;

	private:
		System::Windows::Forms::Label ^ friday_label;

	private:
		System::Windows::Forms::Label ^ saturday_label;

	private:
		System::Windows::Forms::Label ^ time_label;

	private:
		System::Windows::Forms::TextBox ^ textBox3;

	private:
		System::Windows::Forms::Button ^ monday_lec2_btn;

	private:
		System::Windows::Forms::Button ^ monday_lec3_btn;

	private:
		System::Windows::Forms::Button ^ monday_lec4_btn;

	private:
		System::Windows::Forms::Button ^ monday_lec5_btn;

	private:
		System::Windows::Forms::Button ^ monday_lec6_btn;
	private: System::Windows::Forms::Button^ friday_lec1_btn;

	private:
	private:
		System::ComponentModel::IContainer ^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->create_quick_meet_btn = (gcnew System::Windows::Forms::Button());
			this->choose_excel_file_btn = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->read_file_btn = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->monday_label = (gcnew System::Windows::Forms::Label());
			this->tuesday_label = (gcnew System::Windows::Forms::Label());
			this->monday_lec1_btn = (gcnew System::Windows::Forms::Button());
			this->tuesday_lec1_btn = (gcnew System::Windows::Forms::Button());
			this->wednesday_label = (gcnew System::Windows::Forms::Label());
			this->thursday_label = (gcnew System::Windows::Forms::Label());
			this->friday_label = (gcnew System::Windows::Forms::Label());
			this->saturday_label = (gcnew System::Windows::Forms::Label());
			this->time_label = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->monday_lec2_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec3_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec4_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec5_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec6_btn = (gcnew System::Windows::Forms::Button());
			this->friday_lec1_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// create_quick_meet_btn
			// 
			this->create_quick_meet_btn->Location = System::Drawing::Point(953, 43);
			this->create_quick_meet_btn->Name = L"create_quick_meet_btn";
			this->create_quick_meet_btn->Size = System::Drawing::Size(181, 23);
			this->create_quick_meet_btn->TabIndex = 0;
			this->create_quick_meet_btn->Text = L"Create Quick Meet";
			this->create_quick_meet_btn->UseVisualStyleBackColor = true;
			this->create_quick_meet_btn->Click += gcnew System::EventHandler(this, &Main_Ui::create_quick_meet_btn_Click);
			// 
			// choose_excel_file_btn
			// 
			this->choose_excel_file_btn->Location = System::Drawing::Point(441, 435);
			this->choose_excel_file_btn->Name = L"choose_excel_file_btn";
			this->choose_excel_file_btn->Size = System::Drawing::Size(205, 23);
			this->choose_excel_file_btn->TabIndex = 1;
			this->choose_excel_file_btn->Text = L"Choose Excel File";
			this->choose_excel_file_btn->UseVisualStyleBackColor = true;
			this->choose_excel_file_btn->Click += gcnew System::EventHandler(this, &Main_Ui::choose_excel_file_btn_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 436);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(408, 22);
			this->textBox1->TabIndex = 2;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// read_file_btn
			// 
			this->read_file_btn->Location = System::Drawing::Point(1039, 436);
			this->read_file_btn->Name = L"read_file_btn";
			this->read_file_btn->Size = System::Drawing::Size(105, 23);
			this->read_file_btn->TabIndex = 3;
			this->read_file_btn->Text = L"Read File";
			this->read_file_btn->UseVisualStyleBackColor = true;
			this->read_file_btn->Click += gcnew System::EventHandler(this, &Main_Ui::read_file_btn_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(666, 435);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(367, 22);
			this->textBox2->TabIndex = 6;
			// 
			// monday_label
			// 
			this->monday_label->AutoSize = true;
			this->monday_label->Location = System::Drawing::Point(19, 114);
			this->monday_label->Name = L"monday_label";
			this->monday_label->Size = System::Drawing::Size(58, 17);
			this->monday_label->TabIndex = 8;
			this->monday_label->Text = L"Monday";
			// 
			// tuesday_label
			// 
			this->tuesday_label->AutoSize = true;
			this->tuesday_label->Location = System::Drawing::Point(19, 157);
			this->tuesday_label->Name = L"tuesday_label";
			this->tuesday_label->Size = System::Drawing::Size(63, 17);
			this->tuesday_label->TabIndex = 9;
			this->tuesday_label->Text = L"Tuesday";
			// 
			// monday_lec1_btn
			// 
			this->monday_lec1_btn->Location = System::Drawing::Point(126, 108);
			this->monday_lec1_btn->Name = L"monday_lec1_btn";
			this->monday_lec1_btn->Size = System::Drawing::Size(129, 23);
			this->monday_lec1_btn->TabIndex = 10;
			this->monday_lec1_btn->Text = L"Mon Lec 1";
			this->monday_lec1_btn->UseVisualStyleBackColor = true;
			this->monday_lec1_btn->Visible = false;
			this->monday_lec1_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec1_btn_Click);
			// 
			// tuesday_lec1_btn
			// 
			this->tuesday_lec1_btn->Location = System::Drawing::Point(126, 151);
			this->tuesday_lec1_btn->Name = L"tuesday_lec1_btn";
			this->tuesday_lec1_btn->Size = System::Drawing::Size(129, 23);
			this->tuesday_lec1_btn->TabIndex = 11;
			this->tuesday_lec1_btn->Text = L"Tue Lec 1";
			this->tuesday_lec1_btn->UseVisualStyleBackColor = true;
			this->tuesday_lec1_btn->Click += gcnew System::EventHandler(this, &Main_Ui::tuesday_lec1_btn_Click);
			// 
			// wednesday_label
			// 
			this->wednesday_label->AutoSize = true;
			this->wednesday_label->Location = System::Drawing::Point(22, 201);
			this->wednesday_label->Name = L"wednesday_label";
			this->wednesday_label->Size = System::Drawing::Size(83, 17);
			this->wednesday_label->TabIndex = 12;
			this->wednesday_label->Text = L"Wednesday";
			// 
			// thursday_label
			// 
			this->thursday_label->AutoSize = true;
			this->thursday_label->Location = System::Drawing::Point(19, 244);
			this->thursday_label->Name = L"thursday_label";
			this->thursday_label->Size = System::Drawing::Size(68, 17);
			this->thursday_label->TabIndex = 13;
			this->thursday_label->Text = L"Thrusday";
			// 
			// friday_label
			// 
			this->friday_label->AutoSize = true;
			this->friday_label->Location = System::Drawing::Point(22, 285);
			this->friday_label->Name = L"friday_label";
			this->friday_label->Size = System::Drawing::Size(47, 17);
			this->friday_label->TabIndex = 14;
			this->friday_label->Text = L"Friday";
			// 
			// saturday_label
			// 
			this->saturday_label->AutoSize = true;
			this->saturday_label->Location = System::Drawing::Point(22, 325);
			this->saturday_label->Name = L"saturday_label";
			this->saturday_label->Size = System::Drawing::Size(65, 17);
			this->saturday_label->TabIndex = 15;
			this->saturday_label->Text = L"Saturday";
			// 
			// time_label
			// 
			this->time_label->AutoSize = true;
			this->time_label->Location = System::Drawing::Point(22, 70);
			this->time_label->Name = L"time_label";
			this->time_label->Size = System::Drawing::Size(39, 17);
			this->time_label->TabIndex = 16;
			this->time_label->Text = L"Time";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(557, 43);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 17;
			// 
			// monday_lec2_btn
			// 
			this->monday_lec2_btn->Location = System::Drawing::Point(281, 108);
			this->monday_lec2_btn->Name = L"monday_lec2_btn";
			this->monday_lec2_btn->Size = System::Drawing::Size(129, 23);
			this->monday_lec2_btn->TabIndex = 18;
			this->monday_lec2_btn->Text = L"Mon Lec 2";
			this->monday_lec2_btn->UseVisualStyleBackColor = true;
			this->monday_lec2_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec2_btn_Click);
			// 
			// monday_lec3_btn
			// 
			this->monday_lec3_btn->Location = System::Drawing::Point(441, 108);
			this->monday_lec3_btn->Name = L"monday_lec3_btn";
			this->monday_lec3_btn->Size = System::Drawing::Size(129, 23);
			this->monday_lec3_btn->TabIndex = 19;
			this->monday_lec3_btn->Text = L"Mon Lec 3";
			this->monday_lec3_btn->UseVisualStyleBackColor = true;
			// 
			// monday_lec4_btn
			// 
			this->monday_lec4_btn->Location = System::Drawing::Point(602, 108);
			this->monday_lec4_btn->Name = L"monday_lec4_btn";
			this->monday_lec4_btn->Size = System::Drawing::Size(129, 23);
			this->monday_lec4_btn->TabIndex = 20;
			this->monday_lec4_btn->Text = L"Mon Lec 4";
			this->monday_lec4_btn->UseVisualStyleBackColor = true;
			// 
			// monday_lec5_btn
			// 
			this->monday_lec5_btn->Location = System::Drawing::Point(764, 108);
			this->monday_lec5_btn->Name = L"monday_lec5_btn";
			this->monday_lec5_btn->Size = System::Drawing::Size(129, 23);
			this->monday_lec5_btn->TabIndex = 21;
			this->monday_lec5_btn->Text = L"Mon Lec 5";
			this->monday_lec5_btn->UseVisualStyleBackColor = true;
			// 
			// monday_lec6_btn
			// 
			this->monday_lec6_btn->Location = System::Drawing::Point(926, 108);
			this->monday_lec6_btn->Name = L"monday_lec6_btn";
			this->monday_lec6_btn->Size = System::Drawing::Size(129, 23);
			this->monday_lec6_btn->TabIndex = 22;
			this->monday_lec6_btn->Text = L"Mon Lec 6";
			this->monday_lec6_btn->UseVisualStyleBackColor = true;
			// 
			// friday_lec1_btn
			// 
			this->friday_lec1_btn->Location = System::Drawing::Point(126, 285);
			this->friday_lec1_btn->Name = L"friday_lec1_btn";
			this->friday_lec1_btn->Size = System::Drawing::Size(129, 23);
			this->friday_lec1_btn->TabIndex = 23;
			this->friday_lec1_btn->Text = L"Fri Lec 1";
			this->friday_lec1_btn->UseVisualStyleBackColor = true;
			this->friday_lec1_btn->Click += gcnew System::EventHandler(this, &Main_Ui::friday_lec1_btn_Click);
			// 
			// Main_Ui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1156, 471);
			this->Controls->Add(this->friday_lec1_btn);
			this->Controls->Add(this->monday_lec6_btn);
			this->Controls->Add(this->monday_lec5_btn);
			this->Controls->Add(this->monday_lec4_btn);
			this->Controls->Add(this->monday_lec3_btn);
			this->Controls->Add(this->monday_lec2_btn);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->time_label);
			this->Controls->Add(this->saturday_label);
			this->Controls->Add(this->friday_label);
			this->Controls->Add(this->thursday_label);
			this->Controls->Add(this->wednesday_label);
			this->Controls->Add(this->tuesday_lec1_btn);
			this->Controls->Add(this->monday_lec1_btn);
			this->Controls->Add(this->tuesday_label);
			this->Controls->Add(this->monday_label);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->read_file_btn);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->choose_excel_file_btn);
			this->Controls->Add(this->create_quick_meet_btn);
			this->Name = L"Main_Ui";
			this->Text = L"Main_Ui";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		System::String ^ global_file_path;
		int monday_row;
		int monday_col;
		int string_row;
		int string_col;
		System::String ^ monday_lec1_url;
		System::String ^ monday_lec2_url;
		System::String ^ tuesday_lec1_url;
		System::String ^ friday_lec1_url;
		
		void find_monday(Sheet *sheet)
		{
			//Find Monday
			for (int row = sheet->firstRow(); row < sheet->lastRow(); ++row)
			{
				for (int col = sheet->firstCol(); col < sheet->lastCol(); ++col)
				{
					CellType cellType = sheet->cellType(row, col);

					//if (sheet->isFormula(row, col))
					if (cellType == CELLTYPE_STRING)
					{
						//const wchar_t *s = sheet->readFormula(row, col);
						//std::wcout << (s ? s : L"null") << " [formula]";
						std::wstring name(L"Monday");
						const wchar_t *szName = name.c_str();
						const wchar_t *s = sheet->readStr(row, col);

						if (*s == *szName)
						{
							monday_row = row;
							monday_col = col;
							//std::cout<< "[row = " << row << ",column" << col << "]";
						}
						//std::wcout << (s ? s : L"null") << " [string]";
					}
					//std::wcout << std::endl;
				}
			}
		};
		
		void find_string(Sheet *sheet, wstring toFind)
		{
			textBox3->Text = msclr::interop::marshal_as<System::String ^>(toFind);
			for (int row = monday_row + 7; row < sheet->lastRow(); ++row)
			{
				for (int col = monday_col; col < sheet->lastCol(); ++col)
				{
					CellType cellType = sheet->cellType(row, col);

					//if (sheet->isFormula(row, col))
					if (cellType == CELLTYPE_STRING)
					{
						//const wchar_t *s = sheet->readFormula(row, col);
						//std::wcout << (s ? s : L"null") << " [formula]";
						std::wstring str(toFind);
						const wchar_t *szStr = str.c_str();
						const wchar_t *s = sheet->readStr(row, col);

						if (*s == *szStr)
						{
							string_row = row;
							string_col = col;
							//std::cout<< "[row = " << row << ",column" << col << "]";
						}
						//std::wcout << (s ? s : L"null") << " [string]";
					}
					//std::wcout << std::endl;
				}
			}
		};

		void monday_buttons_maker(Sheet* sheet) {
			//Monday Lec1
			int row, col;
			row = monday_row;
			col = monday_col + 1;
			const wchar_t* monday_lec1_lec_string = sheet->readStr(row, col);
			wstring monday_lec1_lec(monday_lec1_lec_string);
			string monday_lec1_lec_str(monday_lec1_lec.begin(), monday_lec1_lec.end());

			monday_lec1_btn->Visible = true;
			monday_lec1_btn->Text = "";
			monday_lec1_btn->Text = monday_lec1_btn->Text + msclr::interop::marshal_as<System::String^>(monday_lec1_lec_str);
			find_string(sheet, monday_lec1_lec);
			const wchar_t* monday_lec1_url_raw = sheet->readStr(string_row, string_col + 1);
			wstring monday_lec1_url_raw_2(monday_lec1_url_raw);
			string monday_lec1_url_raw_3(monday_lec1_url_raw_2.begin(), monday_lec1_url_raw_2.end());
			monday_lec1_url = monday_lec1_url + msclr::interop::marshal_as<System::String^>(monday_lec1_url_raw_3);

			//Monday Lec2
			col = col + 1;
			const wchar_t* lec_string = sheet->readStr(row, col);
			wstring lec(lec_string);
			string lec_str(lec.begin(), lec.end());

			monday_lec2_btn->Visible = true;
			monday_lec2_btn->Text = "";
			monday_lec2_btn->Text = monday_lec2_btn->Text + msclr::interop::marshal_as<System::String^>(lec_str);
			find_string(sheet, lec);
			const wchar_t* monday_lec2_url_raw = sheet->readStr(14, 2);
			wstring monday_lec2_url_raw_2(monday_lec2_url_raw);
			string monday_lec2_url_raw_3(monday_lec2_url_raw_2.begin(), monday_lec2_url_raw_2.end());
			monday_lec2_url = monday_lec2_url + msclr::interop::marshal_as<System::String^>(monday_lec2_url_raw_3);
			//Monday Lec3
			//Monday Lec4
			//Monday Lec5
			//Monday Lec6
			//Monday Lec7
			//Monday Lec8
			//Monday Lec9
		}

		void tuesday_buttons_maker(Sheet* sheet)
		{
			//tuesday Lec1
			int row, col;
			row = monday_row + 1;
			col = monday_col + 1;
			const wchar_t* tuesday_lec1_lec_string = sheet->readStr(row, col);
			wstring tuesday_lec1_lec(tuesday_lec1_lec_string);
			string tuesday_lec1_lec_str(tuesday_lec1_lec.begin(), tuesday_lec1_lec.end());

			tuesday_lec1_btn->Visible = true;
			tuesday_lec1_btn->Text = "";
			tuesday_lec1_btn->Text = tuesday_lec1_btn->Text + msclr::interop::marshal_as<System::String^>(tuesday_lec1_lec_str);
			find_string(sheet, tuesday_lec1_lec);
			const wchar_t* tuesday_lec1_url_raw = sheet->readStr(string_row, string_col + 1);
			wstring tuesday_lec1_url_raw_2(tuesday_lec1_url_raw);
			string tuesday_lec1_url_raw_3(tuesday_lec1_url_raw_2.begin(), tuesday_lec1_url_raw_2.end());
			tuesday_lec1_url = tuesday_lec1_url + msclr::interop::marshal_as<System::String^>(tuesday_lec1_url_raw_3);

			//tuesday Lec2
			// col = col + 1;
			// const wchar_t *lec_string = sheet->readStr(row, col);
			// wstring lec(lec_string);
			// string lec_str(lec.begin(), lec.end());

			// tuesday_lec2_btn->Visible = true;
			// tuesday_lec2_btn->Text = "";
			// tuesday_lec2_btn->Text = tuesday_lec2_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str);
			// find_string(sheet, lec);
			// const wchar_t *tuesday_lec2_url_raw = sheet->readStr(14, 2);
			// wstring tuesday_lec2_url_raw_2(tuesday_lec2_url_raw);
			// string tuesday_lec2_url_raw_3(tuesday_lec2_url_raw_2.begin(), tuesday_lec2_url_raw_2.end());
			// tuesday_lec2_url = tuesday_lec2_url + msclr::interop::marshal_as<System::String ^>(tuesday_lec2_url_raw_3);
			//tuesday Lec3
			//tuesday Lec4
			//tuesday Lec5
			//tuesday Lec6
			//tuesday Lec7
			//tuesday Lec8
			//tuesday Lec9
		}
		
		void friday_buttons_maker(Sheet* sheet)
		{
			//friday Lec1
			int row, col;
			row = monday_row + 4;
			col = monday_col + 1;
			const wchar_t* friday_lec1_lec_string = sheet->readStr(row, col);
			wstring friday_lec1_lec(friday_lec1_lec_string);
			string friday_lec1_lec_str(friday_lec1_lec.begin(), friday_lec1_lec.end());

			friday_lec1_btn->Visible = true;
			friday_lec1_btn->Text = "";
			friday_lec1_btn->Text = friday_lec1_btn->Text + msclr::interop::marshal_as<System::String^>(friday_lec1_lec_str);
			find_string(sheet, friday_lec1_lec);
			const wchar_t* friday_lec1_url_raw = sheet->readStr(string_row, string_col + 1);
			wstring friday_lec1_url_raw_2(friday_lec1_url_raw);
			string friday_lec1_url_raw_3(friday_lec1_url_raw_2.begin(), friday_lec1_url_raw_2.end());
			friday_lec1_url = friday_lec1_url + msclr::interop::marshal_as<System::String^>(friday_lec1_url_raw_3);

			//friday Lec2

			//friday Lec3
			//friday Lec4
			//friday Lec5
			//friday Lec6
			//friday Lec7
			//friday Lec8
			//friday Lec9
		}
		
		void display_buttons(Sheet *sheet)
		{
			/*for (int row = monday_row; row < sheet->lastRow(); ++row)
			{
				for (int col = monday_col + 1; col < sheet->lastCol(); ++col)
				{*/

			monday_buttons_maker(sheet);
			tuesday_buttons_maker(sheet);
			friday_buttons_maker(sheet);


			/*}
			}*/
		}
		void read_file(System::String ^ file_path)
		{
			//String ^ to std::string
			std::string converted_filename = msclr::interop::marshal_as<std::string>(file_path);

			//std::string to WCHAR
			string narrow_string(converted_filename);
			wstring wide_string = wstring(narrow_string.begin(), narrow_string.end());
			const wchar_t *result = wide_string.c_str();

			Book *book = xlCreateXMLBook();

			if (book->load(result))
			{
				Sheet *sheet = book->getSheet(0);
				if (sheet)
				{
					find_monday(sheet);
					display_buttons(sheet);
				}
			}

			book->release();
		}

	private:
		System::Void create_quick_meet_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			string url = "https://meet.google.com/new";
			system(("start " + url).c_str());
		}

	private:
		System::Void choose_excel_file_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ filename;
			//openFileDialog1->Filter = "Text File|*.txt|Word Doc|*.doc|Excel Sheet|*.xlsx";
			openFileDialog1->Filter = "Excel Sheet|*.xlsx";
			openFileDialog1->InitialDirectory = "C:\\Users\\abhis\\Desktop\\SDP_Works\\Time_Table_Linker_Project\\My_Folder";
			openFileDialog1->Title = "Open Excel Files";
			openFileDialog1->ShowDialog();
			filename = openFileDialog1->FileName;
			textBox1->Text = filename->ToString();

			//System::String^ xyz = "Hi boys";
			global_file_path = filename;
			//std::string converted_filename = msclr::interop::marshal_as< std::string >(filename);
			textBox2->Text = global_file_path;
		}

	private:
		System::Void read_file_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			read_file(global_file_path);
			//textBox2->Text = global_file_path;
		}

	private:
		System::Void monday_lec1_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ monday_lec1_url_secondary = "" + monday_lec1_url;
			std::string monday_lec1_final_url = msclr::interop::marshal_as<std::string>(monday_lec1_url_secondary);
			system(("start " + monday_lec1_final_url).c_str());
		}

	private:
		System::Void monday_lec2_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ monday_lec2_url_secondary = "" + monday_lec2_url;
			std::string monday_lec2_final_url = msclr::interop::marshal_as<std::string>(monday_lec2_url_secondary);
			system(("start " + monday_lec2_final_url).c_str());
		}
	private: System::Void tuesday_lec1_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ tuesday_lec1_url_secondary = "" + tuesday_lec1_url;
		std::string tuesday_lec1_final_url = msclr::interop::marshal_as<std::string>(tuesday_lec1_url_secondary);
		system(("start " + tuesday_lec1_final_url).c_str());
	}
private: System::Void friday_lec1_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ friday_lec1_url_secondary = "" + friday_lec1_url;
	std::string friday_lec1_final_url = msclr::interop::marshal_as<std::string>(friday_lec1_url_secondary);
	system(("start " + friday_lec1_final_url).c_str());
}
};
}
