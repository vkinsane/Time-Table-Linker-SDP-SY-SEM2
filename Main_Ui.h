#pragma once
#include <string>
#include <windows.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <msclr/marshal_cppstd.h>
#include "libxl.h"
#include <comdef.h>

//for getting day number
#include <math.h>
#include <ctime>

using namespace libxl;
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
			read_previous_file();
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
	private:
	private:
		System::Windows::Forms::Button ^ monday_lec1_btn;

	private:
		System::Windows::Forms::Button ^ tuesday_lec1_btn;

	private:
	private:
	private:
	private:
	private:
	private:
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

	private:
		System::Windows::Forms::Button ^ friday_lec1_btn;

	private:
		System::Windows::Forms::Button ^ friday_lec2_btn;

	private:
		System::Windows::Forms::Label ^ time_1_label;

	private:
		System::Windows::Forms::Button ^ monday_lec7_btn;

	private:
	private:
		System::Windows::Forms::Button ^ monday_lec8_btn;

	private:
	private:
		System::Windows::Forms::Button ^ monday_lec9_btn;

	private:
	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel3;

	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel5;

	private:
		System::Windows::Forms::Label ^ time_label;

	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel6;

	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel1;

	private:
	private:
		System::Windows::Forms::Label ^ label1;

	private:
		System::Windows::Forms::Label ^ label2;

	private:
		System::Windows::Forms::Label ^ label3;

	private:
		System::Windows::Forms::Label ^ label4;

	private:
		System::Windows::Forms::Label ^ label8;

	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel2;

	private:
		System::Windows::Forms::Button ^ wednesday_lec1_btn;

	private:
	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel4;

	private:
		System::Windows::Forms::Button ^ tuesday_lec3_btn;

	private:
		System::Windows::Forms::Button ^ tuesday_lec4_btn;

	private:
		System::Windows::Forms::Button ^ tuesday_lec5_btn;

	private:
		System::Windows::Forms::Button ^ tuesday_lec6_btn;

	private:
		System::Windows::Forms::Button ^ tuesday_lec7_btn;

	private:
		System::Windows::Forms::Button ^ tuesday_lec8_btn;

	private:
		System::Windows::Forms::Button ^ tuesday_lec9_btn;

	private:
		System::Windows::Forms::Button ^ tuesday_lec2_btn;

	private:
		System::Windows::Forms::Button ^ wednesday_lec2_btn;

	private:
		System::Windows::Forms::Button ^ wednesday_lec3_btn;

	private:
		System::Windows::Forms::Button ^ wednesday_lec4_btn;

	private:
		System::Windows::Forms::Button ^ wednesday_lec5_btn;

	private:
		System::Windows::Forms::Button ^ wednesday_lec6_btn;

	private:
		System::Windows::Forms::Button ^ wednesday_lec7_btn;

	private:
		System::Windows::Forms::Button ^ wednesday_lec8_btn;

	private:
		System::Windows::Forms::Button ^ thursday_lec7_btn;

	private:
	private:
		System::Windows::Forms::Button ^ thursday_lec5_btn;

	private:
	private:
		System::Windows::Forms::Button ^ thursday_lec1_btn;

	private:
		System::Windows::Forms::Button ^ thursday_lec2_btn;

	private:
		System::Windows::Forms::Button ^ thursday_lec3_btn;

	private:
		System::Windows::Forms::Button ^ thursday_lec4_btn;

	private:
		System::Windows::Forms::Button ^ thursday_lec6_btn;

	private:
		System::Windows::Forms::Button ^ thursday_lec8_btn;

	private:
		System::Windows::Forms::Button ^ thursday_lec9_btn;

	private:
	private:
	private:
	private:
	private:
	private:
	private:
	private:
		System::Windows::Forms::Button ^ wednesday_lec9_btn;

	private:
		System::Windows::Forms::Label ^ time_9_label;

	private:
		System::Windows::Forms::Label ^ time_8_label;

	private:
		System::Windows::Forms::Label ^ time_7_label;

	private:
		System::Windows::Forms::Label ^ time_6_label;

	private:
		System::Windows::Forms::Label ^ time_5_label;

	private:
		System::Windows::Forms::Label ^ time_4_label;

	private:
		System::Windows::Forms::Label ^ time_3_label;

	private:
		System::Windows::Forms::Label ^ time_2_label;

	private:
		System::Windows::Forms::Button ^ friday_lec9_btn;

	private:
		System::Windows::Forms::Button ^ friday_lec7_btn;

	private:
	private:
	private:
		System::Windows::Forms::Button ^ friday_lec6_btn;

	private:
		System::Windows::Forms::Button ^ friday_lec5_btn;

	private:
		System::Windows::Forms::Button ^ friday_lec3_btn;

	private:
		System::Windows::Forms::Button ^ friday_lec4_btn;

	private:
	private:
	private:
	private:
	private:
	private:
	private:
	private:
		System::Windows::Forms::Button ^ friday_lec8_btn;

	private:
	private:
		System::Windows::Forms::Button ^ create_quick_meet_btn;

	private:
		System::Windows::Forms::Label ^ github_link_label;

	private:
		System::Windows::Forms::TextBox ^ textBox3;

	private:
	private:
	private:
	private:
	private:
	private:
	private:
	private:
	private:
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
			System::ComponentModel::ComponentResourceManager ^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main_Ui::typeid));
			this->choose_excel_file_btn = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->read_file_btn = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->monday_lec1_btn = (gcnew System::Windows::Forms::Button());
			this->tuesday_lec1_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec2_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec3_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec4_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec5_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec6_btn = (gcnew System::Windows::Forms::Button());
			this->friday_lec1_btn = (gcnew System::Windows::Forms::Button());
			this->friday_lec2_btn = (gcnew System::Windows::Forms::Button());
			this->time_1_label = (gcnew System::Windows::Forms::Label());
			this->monday_lec7_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec8_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec9_btn = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->create_quick_meet_btn = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->time_8_label = (gcnew System::Windows::Forms::Label());
			this->time_7_label = (gcnew System::Windows::Forms::Label());
			this->time_6_label = (gcnew System::Windows::Forms::Label());
			this->time_5_label = (gcnew System::Windows::Forms::Label());
			this->time_4_label = (gcnew System::Windows::Forms::Label());
			this->time_3_label = (gcnew System::Windows::Forms::Label());
			this->time_2_label = (gcnew System::Windows::Forms::Label());
			this->time_9_label = (gcnew System::Windows::Forms::Label());
			this->time_label = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->wednesday_lec1_btn = (gcnew System::Windows::Forms::Button());
			this->tuesday_lec3_btn = (gcnew System::Windows::Forms::Button());
			this->tuesday_lec4_btn = (gcnew System::Windows::Forms::Button());
			this->tuesday_lec5_btn = (gcnew System::Windows::Forms::Button());
			this->tuesday_lec6_btn = (gcnew System::Windows::Forms::Button());
			this->tuesday_lec7_btn = (gcnew System::Windows::Forms::Button());
			this->tuesday_lec8_btn = (gcnew System::Windows::Forms::Button());
			this->tuesday_lec9_btn = (gcnew System::Windows::Forms::Button());
			this->tuesday_lec2_btn = (gcnew System::Windows::Forms::Button());
			this->wednesday_lec2_btn = (gcnew System::Windows::Forms::Button());
			this->wednesday_lec3_btn = (gcnew System::Windows::Forms::Button());
			this->wednesday_lec4_btn = (gcnew System::Windows::Forms::Button());
			this->wednesday_lec5_btn = (gcnew System::Windows::Forms::Button());
			this->wednesday_lec6_btn = (gcnew System::Windows::Forms::Button());
			this->wednesday_lec7_btn = (gcnew System::Windows::Forms::Button());
			this->wednesday_lec8_btn = (gcnew System::Windows::Forms::Button());
			this->wednesday_lec9_btn = (gcnew System::Windows::Forms::Button());
			this->thursday_lec1_btn = (gcnew System::Windows::Forms::Button());
			this->thursday_lec2_btn = (gcnew System::Windows::Forms::Button());
			this->thursday_lec3_btn = (gcnew System::Windows::Forms::Button());
			this->thursday_lec4_btn = (gcnew System::Windows::Forms::Button());
			this->thursday_lec5_btn = (gcnew System::Windows::Forms::Button());
			this->thursday_lec6_btn = (gcnew System::Windows::Forms::Button());
			this->thursday_lec7_btn = (gcnew System::Windows::Forms::Button());
			this->thursday_lec8_btn = (gcnew System::Windows::Forms::Button());
			this->thursday_lec9_btn = (gcnew System::Windows::Forms::Button());
			this->friday_lec3_btn = (gcnew System::Windows::Forms::Button());
			this->friday_lec4_btn = (gcnew System::Windows::Forms::Button());
			this->friday_lec5_btn = (gcnew System::Windows::Forms::Button());
			this->friday_lec6_btn = (gcnew System::Windows::Forms::Button());
			this->friday_lec7_btn = (gcnew System::Windows::Forms::Button());
			this->friday_lec8_btn = (gcnew System::Windows::Forms::Button());
			this->friday_lec9_btn = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->github_link_label = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->SuspendLayout();
			//
			// choose_excel_file_btn
			//
			resources->ApplyResources(this->choose_excel_file_btn, L"choose_excel_file_btn");
			this->choose_excel_file_btn->BackColor = System::Drawing::Color::Transparent;
			this->choose_excel_file_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->choose_excel_file_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																											   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->choose_excel_file_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->choose_excel_file_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->choose_excel_file_btn->Name = L"choose_excel_file_btn";
			this->choose_excel_file_btn->UseVisualStyleBackColor = false;
			this->choose_excel_file_btn->Click += gcnew System::EventHandler(this, &Main_Ui::choose_excel_file_btn_Click);
			//
			// textBox1
			//
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Name = L"textBox1";
			//
			// openFileDialog1
			//
			this->openFileDialog1->FileName = L"openFileDialog1";
			//
			// read_file_btn
			//
			resources->ApplyResources(this->read_file_btn, L"read_file_btn");
			this->read_file_btn->BackColor = System::Drawing::Color::Transparent;
			this->read_file_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->read_file_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																									   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->read_file_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->read_file_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->read_file_btn->Name = L"read_file_btn";
			this->read_file_btn->UseVisualStyleBackColor = false;
			this->read_file_btn->Click += gcnew System::EventHandler(this, &Main_Ui::read_file_btn_Click);
			//
			// textBox2
			//
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Name = L"textBox2";
			//
			// monday_lec1_btn
			//
			resources->ApplyResources(this->monday_lec1_btn, L"monday_lec1_btn");
			this->monday_lec1_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec1_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec1_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->monday_lec1_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec1_btn->Name = L"monday_lec1_btn";
			this->monday_lec1_btn->UseVisualStyleBackColor = false;
			this->monday_lec1_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec1_btn_Click);
			//
			// tuesday_lec1_btn
			//
			resources->ApplyResources(this->tuesday_lec1_btn, L"tuesday_lec1_btn");
			this->tuesday_lec1_btn->BackColor = System::Drawing::Color::Transparent;
			this->tuesday_lec1_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										  static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tuesday_lec1_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->tuesday_lec1_btn->ForeColor = System::Drawing::Color::White;
			this->tuesday_lec1_btn->Name = L"tuesday_lec1_btn";
			this->tuesday_lec1_btn->UseVisualStyleBackColor = false;
			this->tuesday_lec1_btn->Click += gcnew System::EventHandler(this, &Main_Ui::tuesday_lec1_btn_Click);
			//
			// monday_lec2_btn
			//
			resources->ApplyResources(this->monday_lec2_btn, L"monday_lec2_btn");
			this->monday_lec2_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec2_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec2_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->monday_lec2_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec2_btn->Name = L"monday_lec2_btn";
			this->monday_lec2_btn->UseVisualStyleBackColor = false;
			this->monday_lec2_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec2_btn_Click);
			//
			// monday_lec3_btn
			//
			resources->ApplyResources(this->monday_lec3_btn, L"monday_lec3_btn");
			this->monday_lec3_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec3_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec3_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->monday_lec3_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec3_btn->Name = L"monday_lec3_btn";
			this->monday_lec3_btn->UseVisualStyleBackColor = false;
			this->monday_lec3_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec3_btn_Click);
			//
			// monday_lec4_btn
			//
			resources->ApplyResources(this->monday_lec4_btn, L"monday_lec4_btn");
			this->monday_lec4_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec4_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec4_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->monday_lec4_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec4_btn->Name = L"monday_lec4_btn";
			this->monday_lec4_btn->UseVisualStyleBackColor = false;
			this->monday_lec4_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec4_btn_Click);
			//
			// monday_lec5_btn
			//
			resources->ApplyResources(this->monday_lec5_btn, L"monday_lec5_btn");
			this->monday_lec5_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec5_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec5_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->monday_lec5_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec5_btn->Name = L"monday_lec5_btn";
			this->monday_lec5_btn->UseVisualStyleBackColor = false;
			this->monday_lec5_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec5_btn_Click);
			//
			// monday_lec6_btn
			//
			resources->ApplyResources(this->monday_lec6_btn, L"monday_lec6_btn");
			this->monday_lec6_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec6_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec6_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->monday_lec6_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec6_btn->Name = L"monday_lec6_btn";
			this->monday_lec6_btn->UseVisualStyleBackColor = false;
			this->monday_lec6_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec6_btn_Click);
			//
			// friday_lec1_btn
			//
			resources->ApplyResources(this->friday_lec1_btn, L"friday_lec1_btn");
			this->friday_lec1_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->friday_lec1_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->friday_lec1_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->friday_lec1_btn->ForeColor = System::Drawing::Color::White;
			this->friday_lec1_btn->Name = L"friday_lec1_btn";
			this->friday_lec1_btn->UseVisualStyleBackColor = true;
			this->friday_lec1_btn->Click += gcnew System::EventHandler(this, &Main_Ui::friday_lec1_btn_Click);
			//
			// friday_lec2_btn
			//
			resources->ApplyResources(this->friday_lec2_btn, L"friday_lec2_btn");
			this->friday_lec2_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->friday_lec2_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->friday_lec2_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->friday_lec2_btn->ForeColor = System::Drawing::Color::White;
			this->friday_lec2_btn->Name = L"friday_lec2_btn";
			this->friday_lec2_btn->UseVisualStyleBackColor = true;
			this->friday_lec2_btn->Click += gcnew System::EventHandler(this, &Main_Ui::friday_lec2_btn_Click);
			//
			// time_1_label
			//
			resources->ApplyResources(this->time_1_label, L"time_1_label");
			this->time_1_label->BackColor = System::Drawing::Color::Transparent;
			this->time_1_label->Name = L"time_1_label";
			//
			// monday_lec7_btn
			//
			resources->ApplyResources(this->monday_lec7_btn, L"monday_lec7_btn");
			this->monday_lec7_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec7_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec7_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->monday_lec7_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec7_btn->Name = L"monday_lec7_btn";
			this->monday_lec7_btn->UseVisualStyleBackColor = false;
			this->monday_lec7_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec7_btn_Click);
			//
			// monday_lec8_btn
			//
			resources->ApplyResources(this->monday_lec8_btn, L"monday_lec8_btn");
			this->monday_lec8_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec8_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec8_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->monday_lec8_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec8_btn->Name = L"monday_lec8_btn";
			this->monday_lec8_btn->UseVisualStyleBackColor = false;
			this->monday_lec8_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec8_btn_Click);
			//
			// monday_lec9_btn
			//
			resources->ApplyResources(this->monday_lec9_btn, L"monday_lec9_btn");
			this->monday_lec9_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec9_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec9_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->monday_lec9_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec9_btn->Name = L"monday_lec9_btn";
			this->monday_lec9_btn->UseVisualStyleBackColor = false;
			this->monday_lec9_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec9_btn_Click);
			//
			// tableLayoutPanel3
			//
			resources->ApplyResources(this->tableLayoutPanel3, L"tableLayoutPanel3");
			this->tableLayoutPanel3->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel3->Controls->Add(this->create_quick_meet_btn, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->textBox3, 0, 0);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			//
			// create_quick_meet_btn
			//
			resources->ApplyResources(this->create_quick_meet_btn, L"create_quick_meet_btn");
			this->create_quick_meet_btn->BackColor = System::Drawing::Color::Transparent;
			this->create_quick_meet_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->create_quick_meet_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																											   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->create_quick_meet_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->create_quick_meet_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->create_quick_meet_btn->Name = L"create_quick_meet_btn";
			this->create_quick_meet_btn->UseVisualStyleBackColor = false;
			this->create_quick_meet_btn->Click += gcnew System::EventHandler(this, &Main_Ui::create_quick_meet_btn_Click);
			//
			// textBox3
			//
			resources->ApplyResources(this->textBox3, L"textBox3");
			this->textBox3->Name = L"textBox3";
			//
			// tableLayoutPanel5
			//
			resources->ApplyResources(this->tableLayoutPanel5, L"tableLayoutPanel5");
			this->tableLayoutPanel5->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel5->Controls->Add(this->time_8_label, 7, 0);
			this->tableLayoutPanel5->Controls->Add(this->time_7_label, 6, 0);
			this->tableLayoutPanel5->Controls->Add(this->time_6_label, 5, 0);
			this->tableLayoutPanel5->Controls->Add(this->time_5_label, 4, 0);
			this->tableLayoutPanel5->Controls->Add(this->time_4_label, 3, 0);
			this->tableLayoutPanel5->Controls->Add(this->time_3_label, 2, 0);
			this->tableLayoutPanel5->Controls->Add(this->time_2_label, 1, 0);
			this->tableLayoutPanel5->Controls->Add(this->time_9_label, 8, 0);
			this->tableLayoutPanel5->Controls->Add(this->time_1_label, 0, 0);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			//
			// time_8_label
			//
			resources->ApplyResources(this->time_8_label, L"time_8_label");
			this->time_8_label->BackColor = System::Drawing::Color::Transparent;
			this->time_8_label->Name = L"time_8_label";
			//
			// time_7_label
			//
			resources->ApplyResources(this->time_7_label, L"time_7_label");
			this->time_7_label->BackColor = System::Drawing::Color::Transparent;
			this->time_7_label->Name = L"time_7_label";
			//
			// time_6_label
			//
			resources->ApplyResources(this->time_6_label, L"time_6_label");
			this->time_6_label->BackColor = System::Drawing::Color::Transparent;
			this->time_6_label->Name = L"time_6_label";
			//
			// time_5_label
			//
			resources->ApplyResources(this->time_5_label, L"time_5_label");
			this->time_5_label->BackColor = System::Drawing::Color::Transparent;
			this->time_5_label->Name = L"time_5_label";
			//
			// time_4_label
			//
			resources->ApplyResources(this->time_4_label, L"time_4_label");
			this->time_4_label->BackColor = System::Drawing::Color::Transparent;
			this->time_4_label->Name = L"time_4_label";
			//
			// time_3_label
			//
			resources->ApplyResources(this->time_3_label, L"time_3_label");
			this->time_3_label->BackColor = System::Drawing::Color::Transparent;
			this->time_3_label->Name = L"time_3_label";
			//
			// time_2_label
			//
			resources->ApplyResources(this->time_2_label, L"time_2_label");
			this->time_2_label->BackColor = System::Drawing::Color::Transparent;
			this->time_2_label->Name = L"time_2_label";
			//
			// time_9_label
			//
			resources->ApplyResources(this->time_9_label, L"time_9_label");
			this->time_9_label->BackColor = System::Drawing::Color::Transparent;
			this->time_9_label->Name = L"time_9_label";
			//
			// time_label
			//
			resources->ApplyResources(this->time_label, L"time_label");
			this->time_label->BackColor = System::Drawing::Color::Transparent;
			this->time_label->Name = L"time_label";
			//
			// tableLayoutPanel6
			//
			resources->ApplyResources(this->tableLayoutPanel6, L"tableLayoutPanel6");
			this->tableLayoutPanel6->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel6->Controls->Add(this->time_label, 0, 0);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			//
			// tableLayoutPanel1
			//
			resources->ApplyResources(this->tableLayoutPanel1, L"tableLayoutPanel1");
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label4, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label8, 0, 4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			//
			// label1
			//
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Name = L"label1";
			//
			// label2
			//
			resources->ApplyResources(this->label2, L"label2");
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Name = L"label2";
			//
			// label3
			//
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Name = L"label3";
			//
			// label4
			//
			resources->ApplyResources(this->label4, L"label4");
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Name = L"label4";
			//
			// label8
			//
			resources->ApplyResources(this->label8, L"label8");
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Name = L"label8";
			//
			// tableLayoutPanel2
			//
			resources->ApplyResources(this->tableLayoutPanel2, L"tableLayoutPanel2");
			this->tableLayoutPanel2->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel2->Controls->Add(this->monday_lec1_btn, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->monday_lec2_btn, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->monday_lec3_btn, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->monday_lec4_btn, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->monday_lec5_btn, 4, 0);
			this->tableLayoutPanel2->Controls->Add(this->monday_lec6_btn, 5, 0);
			this->tableLayoutPanel2->Controls->Add(this->wednesday_lec1_btn, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->monday_lec7_btn, 6, 0);
			this->tableLayoutPanel2->Controls->Add(this->monday_lec8_btn, 7, 0);
			this->tableLayoutPanel2->Controls->Add(this->monday_lec9_btn, 8, 0);
			this->tableLayoutPanel2->Controls->Add(this->tuesday_lec1_btn, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->friday_lec1_btn, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->tuesday_lec3_btn, 2, 1);
			this->tableLayoutPanel2->Controls->Add(this->tuesday_lec4_btn, 3, 1);
			this->tableLayoutPanel2->Controls->Add(this->tuesday_lec5_btn, 4, 1);
			this->tableLayoutPanel2->Controls->Add(this->tuesday_lec6_btn, 5, 1);
			this->tableLayoutPanel2->Controls->Add(this->tuesday_lec7_btn, 6, 1);
			this->tableLayoutPanel2->Controls->Add(this->tuesday_lec8_btn, 7, 1);
			this->tableLayoutPanel2->Controls->Add(this->tuesday_lec9_btn, 8, 1);
			this->tableLayoutPanel2->Controls->Add(this->friday_lec2_btn, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->tuesday_lec2_btn, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->wednesday_lec2_btn, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->wednesday_lec3_btn, 2, 2);
			this->tableLayoutPanel2->Controls->Add(this->wednesday_lec4_btn, 3, 2);
			this->tableLayoutPanel2->Controls->Add(this->wednesday_lec5_btn, 4, 2);
			this->tableLayoutPanel2->Controls->Add(this->wednesday_lec6_btn, 5, 2);
			this->tableLayoutPanel2->Controls->Add(this->wednesday_lec7_btn, 6, 2);
			this->tableLayoutPanel2->Controls->Add(this->wednesday_lec8_btn, 7, 2);
			this->tableLayoutPanel2->Controls->Add(this->wednesday_lec9_btn, 8, 2);
			this->tableLayoutPanel2->Controls->Add(this->thursday_lec1_btn, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->thursday_lec2_btn, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->thursday_lec3_btn, 2, 3);
			this->tableLayoutPanel2->Controls->Add(this->thursday_lec4_btn, 3, 3);
			this->tableLayoutPanel2->Controls->Add(this->thursday_lec5_btn, 4, 3);
			this->tableLayoutPanel2->Controls->Add(this->thursday_lec6_btn, 5, 3);
			this->tableLayoutPanel2->Controls->Add(this->thursday_lec7_btn, 6, 3);
			this->tableLayoutPanel2->Controls->Add(this->thursday_lec8_btn, 7, 3);
			this->tableLayoutPanel2->Controls->Add(this->thursday_lec9_btn, 8, 3);
			this->tableLayoutPanel2->Controls->Add(this->friday_lec3_btn, 2, 4);
			this->tableLayoutPanel2->Controls->Add(this->friday_lec4_btn, 3, 4);
			this->tableLayoutPanel2->Controls->Add(this->friday_lec5_btn, 4, 4);
			this->tableLayoutPanel2->Controls->Add(this->friday_lec6_btn, 5, 4);
			this->tableLayoutPanel2->Controls->Add(this->friday_lec7_btn, 6, 4);
			this->tableLayoutPanel2->Controls->Add(this->friday_lec8_btn, 7, 4);
			this->tableLayoutPanel2->Controls->Add(this->friday_lec9_btn, 8, 4);
			this->tableLayoutPanel2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			//
			// wednesday_lec1_btn
			//
			resources->ApplyResources(this->wednesday_lec1_btn, L"wednesday_lec1_btn");
			this->wednesday_lec1_btn->BackColor = System::Drawing::Color::Transparent;
			this->wednesday_lec1_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																											static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->wednesday_lec1_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->wednesday_lec1_btn->ForeColor = System::Drawing::Color::White;
			this->wednesday_lec1_btn->Name = L"wednesday_lec1_btn";
			this->wednesday_lec1_btn->UseVisualStyleBackColor = false;
			this->wednesday_lec1_btn->Click += gcnew System::EventHandler(this, &Main_Ui::wednesday_lec1_btn_Click);
			//
			// tuesday_lec3_btn
			//
			resources->ApplyResources(this->tuesday_lec3_btn, L"tuesday_lec3_btn");
			this->tuesday_lec3_btn->BackColor = System::Drawing::Color::Transparent;
			this->tuesday_lec3_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										  static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tuesday_lec3_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->tuesday_lec3_btn->ForeColor = System::Drawing::Color::White;
			this->tuesday_lec3_btn->Name = L"tuesday_lec3_btn";
			this->tuesday_lec3_btn->UseVisualStyleBackColor = false;
			this->tuesday_lec3_btn->Click += gcnew System::EventHandler(this, &Main_Ui::tuesday_lec3_btn_Click);
			//
			// tuesday_lec4_btn
			//
			resources->ApplyResources(this->tuesday_lec4_btn, L"tuesday_lec4_btn");
			this->tuesday_lec4_btn->BackColor = System::Drawing::Color::Transparent;
			this->tuesday_lec4_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										  static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tuesday_lec4_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->tuesday_lec4_btn->ForeColor = System::Drawing::Color::White;
			this->tuesday_lec4_btn->Name = L"tuesday_lec4_btn";
			this->tuesday_lec4_btn->UseVisualStyleBackColor = false;
			this->tuesday_lec4_btn->Click += gcnew System::EventHandler(this, &Main_Ui::tuesday_lec4_btn_Click);
			//
			// tuesday_lec5_btn
			//
			resources->ApplyResources(this->tuesday_lec5_btn, L"tuesday_lec5_btn");
			this->tuesday_lec5_btn->BackColor = System::Drawing::Color::Transparent;
			this->tuesday_lec5_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										  static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tuesday_lec5_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->tuesday_lec5_btn->ForeColor = System::Drawing::Color::White;
			this->tuesday_lec5_btn->Name = L"tuesday_lec5_btn";
			this->tuesday_lec5_btn->UseVisualStyleBackColor = false;
			this->tuesday_lec5_btn->Click += gcnew System::EventHandler(this, &Main_Ui::tuesday_lec5_btn_Click);
			//
			// tuesday_lec6_btn
			//
			resources->ApplyResources(this->tuesday_lec6_btn, L"tuesday_lec6_btn");
			this->tuesday_lec6_btn->BackColor = System::Drawing::Color::Transparent;
			this->tuesday_lec6_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										  static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tuesday_lec6_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->tuesday_lec6_btn->ForeColor = System::Drawing::Color::White;
			this->tuesday_lec6_btn->Name = L"tuesday_lec6_btn";
			this->tuesday_lec6_btn->UseVisualStyleBackColor = false;
			this->tuesday_lec6_btn->Click += gcnew System::EventHandler(this, &Main_Ui::tuesday_lec6_btn_Click);
			//
			// tuesday_lec7_btn
			//
			resources->ApplyResources(this->tuesday_lec7_btn, L"tuesday_lec7_btn");
			this->tuesday_lec7_btn->BackColor = System::Drawing::Color::Transparent;
			this->tuesday_lec7_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										  static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tuesday_lec7_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->tuesday_lec7_btn->ForeColor = System::Drawing::Color::White;
			this->tuesday_lec7_btn->Name = L"tuesday_lec7_btn";
			this->tuesday_lec7_btn->UseVisualStyleBackColor = false;
			this->tuesday_lec7_btn->Click += gcnew System::EventHandler(this, &Main_Ui::tuesday_lec7_btn_Click);
			//
			// tuesday_lec8_btn
			//
			resources->ApplyResources(this->tuesday_lec8_btn, L"tuesday_lec8_btn");
			this->tuesday_lec8_btn->BackColor = System::Drawing::Color::Transparent;
			this->tuesday_lec8_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										  static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tuesday_lec8_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->tuesday_lec8_btn->ForeColor = System::Drawing::Color::White;
			this->tuesday_lec8_btn->Name = L"tuesday_lec8_btn";
			this->tuesday_lec8_btn->UseVisualStyleBackColor = false;
			this->tuesday_lec8_btn->Click += gcnew System::EventHandler(this, &Main_Ui::tuesday_lec8_btn_Click);
			//
			// tuesday_lec9_btn
			//
			resources->ApplyResources(this->tuesday_lec9_btn, L"tuesday_lec9_btn");
			this->tuesday_lec9_btn->BackColor = System::Drawing::Color::Transparent;
			this->tuesday_lec9_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										  static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tuesday_lec9_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->tuesday_lec9_btn->ForeColor = System::Drawing::Color::White;
			this->tuesday_lec9_btn->Name = L"tuesday_lec9_btn";
			this->tuesday_lec9_btn->UseVisualStyleBackColor = false;
			this->tuesday_lec9_btn->Click += gcnew System::EventHandler(this, &Main_Ui::tuesday_lec9_btn_Click);
			//
			// tuesday_lec2_btn
			//
			resources->ApplyResources(this->tuesday_lec2_btn, L"tuesday_lec2_btn");
			this->tuesday_lec2_btn->BackColor = System::Drawing::Color::Transparent;
			this->tuesday_lec2_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										  static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tuesday_lec2_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->tuesday_lec2_btn->ForeColor = System::Drawing::Color::White;
			this->tuesday_lec2_btn->Name = L"tuesday_lec2_btn";
			this->tuesday_lec2_btn->UseVisualStyleBackColor = false;
			this->tuesday_lec2_btn->Click += gcnew System::EventHandler(this, &Main_Ui::tuesday_lec2_btn_Click);
			//
			// wednesday_lec2_btn
			//
			resources->ApplyResources(this->wednesday_lec2_btn, L"wednesday_lec2_btn");
			this->wednesday_lec2_btn->BackColor = System::Drawing::Color::Transparent;
			this->wednesday_lec2_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																											static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->wednesday_lec2_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->wednesday_lec2_btn->ForeColor = System::Drawing::Color::White;
			this->wednesday_lec2_btn->Name = L"wednesday_lec2_btn";
			this->wednesday_lec2_btn->UseVisualStyleBackColor = false;
			this->wednesday_lec2_btn->Click += gcnew System::EventHandler(this, &Main_Ui::wednesday_lec2_btn_Click);
			//
			// wednesday_lec3_btn
			//
			resources->ApplyResources(this->wednesday_lec3_btn, L"wednesday_lec3_btn");
			this->wednesday_lec3_btn->BackColor = System::Drawing::Color::Transparent;
			this->wednesday_lec3_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																											static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->wednesday_lec3_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->wednesday_lec3_btn->ForeColor = System::Drawing::Color::White;
			this->wednesday_lec3_btn->Name = L"wednesday_lec3_btn";
			this->wednesday_lec3_btn->UseVisualStyleBackColor = false;
			this->wednesday_lec3_btn->Click += gcnew System::EventHandler(this, &Main_Ui::wednesday_lec3_btn_Click);
			//
			// wednesday_lec4_btn
			//
			resources->ApplyResources(this->wednesday_lec4_btn, L"wednesday_lec4_btn");
			this->wednesday_lec4_btn->BackColor = System::Drawing::Color::Transparent;
			this->wednesday_lec4_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																											static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->wednesday_lec4_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->wednesday_lec4_btn->ForeColor = System::Drawing::Color::White;
			this->wednesday_lec4_btn->Name = L"wednesday_lec4_btn";
			this->wednesday_lec4_btn->UseVisualStyleBackColor = false;
			this->wednesday_lec4_btn->Click += gcnew System::EventHandler(this, &Main_Ui::wednesday_lec4_btn_Click);
			//
			// wednesday_lec5_btn
			//
			resources->ApplyResources(this->wednesday_lec5_btn, L"wednesday_lec5_btn");
			this->wednesday_lec5_btn->BackColor = System::Drawing::Color::Transparent;
			this->wednesday_lec5_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																											static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->wednesday_lec5_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->wednesday_lec5_btn->ForeColor = System::Drawing::Color::White;
			this->wednesday_lec5_btn->Name = L"wednesday_lec5_btn";
			this->wednesday_lec5_btn->UseVisualStyleBackColor = false;
			this->wednesday_lec5_btn->Click += gcnew System::EventHandler(this, &Main_Ui::wednesday_lec5_btn_Click);
			//
			// wednesday_lec6_btn
			//
			resources->ApplyResources(this->wednesday_lec6_btn, L"wednesday_lec6_btn");
			this->wednesday_lec6_btn->BackColor = System::Drawing::Color::Transparent;
			this->wednesday_lec6_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																											static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->wednesday_lec6_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->wednesday_lec6_btn->ForeColor = System::Drawing::Color::White;
			this->wednesday_lec6_btn->Name = L"wednesday_lec6_btn";
			this->wednesday_lec6_btn->UseVisualStyleBackColor = false;
			this->wednesday_lec6_btn->Click += gcnew System::EventHandler(this, &Main_Ui::wednesday_lec6_btn_Click);
			//
			// wednesday_lec7_btn
			//
			resources->ApplyResources(this->wednesday_lec7_btn, L"wednesday_lec7_btn");
			this->wednesday_lec7_btn->BackColor = System::Drawing::Color::Transparent;
			this->wednesday_lec7_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																											static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->wednesday_lec7_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->wednesday_lec7_btn->ForeColor = System::Drawing::Color::White;
			this->wednesday_lec7_btn->Name = L"wednesday_lec7_btn";
			this->wednesday_lec7_btn->UseVisualStyleBackColor = false;
			this->wednesday_lec7_btn->Click += gcnew System::EventHandler(this, &Main_Ui::wednesday_lec7_btn_Click);
			//
			// wednesday_lec8_btn
			//
			resources->ApplyResources(this->wednesday_lec8_btn, L"wednesday_lec8_btn");
			this->wednesday_lec8_btn->BackColor = System::Drawing::Color::Transparent;
			this->wednesday_lec8_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																											static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->wednesday_lec8_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->wednesday_lec8_btn->ForeColor = System::Drawing::Color::White;
			this->wednesday_lec8_btn->Name = L"wednesday_lec8_btn";
			this->wednesday_lec8_btn->UseVisualStyleBackColor = false;
			this->wednesday_lec8_btn->Click += gcnew System::EventHandler(this, &Main_Ui::wednesday_lec8_btn_Click);
			//
			// wednesday_lec9_btn
			//
			resources->ApplyResources(this->wednesday_lec9_btn, L"wednesday_lec9_btn");
			this->wednesday_lec9_btn->BackColor = System::Drawing::Color::Transparent;
			this->wednesday_lec9_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																											static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->wednesday_lec9_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->wednesday_lec9_btn->ForeColor = System::Drawing::Color::White;
			this->wednesday_lec9_btn->Name = L"wednesday_lec9_btn";
			this->wednesday_lec9_btn->UseVisualStyleBackColor = false;
			this->wednesday_lec9_btn->Click += gcnew System::EventHandler(this, &Main_Ui::wednesday_lec9_btn_Click);
			//
			// thursday_lec1_btn
			//
			resources->ApplyResources(this->thursday_lec1_btn, L"thursday_lec1_btn");
			this->thursday_lec1_btn->BackColor = System::Drawing::Color::Transparent;
			this->thursday_lec1_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->thursday_lec1_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->thursday_lec1_btn->ForeColor = System::Drawing::Color::White;
			this->thursday_lec1_btn->Name = L"thursday_lec1_btn";
			this->thursday_lec1_btn->UseVisualStyleBackColor = false;
			this->thursday_lec1_btn->Click += gcnew System::EventHandler(this, &Main_Ui::thursday_lec1_btn_Click);
			//
			// thursday_lec2_btn
			//
			resources->ApplyResources(this->thursday_lec2_btn, L"thursday_lec2_btn");
			this->thursday_lec2_btn->BackColor = System::Drawing::Color::Transparent;
			this->thursday_lec2_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->thursday_lec2_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->thursday_lec2_btn->ForeColor = System::Drawing::Color::White;
			this->thursday_lec2_btn->Name = L"thursday_lec2_btn";
			this->thursday_lec2_btn->UseVisualStyleBackColor = false;
			this->thursday_lec2_btn->Click += gcnew System::EventHandler(this, &Main_Ui::thursday_lec2_btn_Click);
			//
			// thursday_lec3_btn
			//
			resources->ApplyResources(this->thursday_lec3_btn, L"thursday_lec3_btn");
			this->thursday_lec3_btn->BackColor = System::Drawing::Color::Transparent;
			this->thursday_lec3_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->thursday_lec3_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->thursday_lec3_btn->ForeColor = System::Drawing::Color::White;
			this->thursday_lec3_btn->Name = L"thursday_lec3_btn";
			this->thursday_lec3_btn->UseVisualStyleBackColor = false;
			this->thursday_lec3_btn->Click += gcnew System::EventHandler(this, &Main_Ui::thursday_lec3_btn_Click);
			//
			// thursday_lec4_btn
			//
			resources->ApplyResources(this->thursday_lec4_btn, L"thursday_lec4_btn");
			this->thursday_lec4_btn->BackColor = System::Drawing::Color::Transparent;
			this->thursday_lec4_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->thursday_lec4_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->thursday_lec4_btn->ForeColor = System::Drawing::Color::White;
			this->thursday_lec4_btn->Name = L"thursday_lec4_btn";
			this->thursday_lec4_btn->UseVisualStyleBackColor = false;
			this->thursday_lec4_btn->Click += gcnew System::EventHandler(this, &Main_Ui::thursday_lec4_btn_Click);
			//
			// thursday_lec5_btn
			//
			resources->ApplyResources(this->thursday_lec5_btn, L"thursday_lec5_btn");
			this->thursday_lec5_btn->BackColor = System::Drawing::Color::Transparent;
			this->thursday_lec5_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->thursday_lec5_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->thursday_lec5_btn->ForeColor = System::Drawing::Color::White;
			this->thursday_lec5_btn->Name = L"thursday_lec5_btn";
			this->thursday_lec5_btn->UseVisualStyleBackColor = false;
			this->thursday_lec5_btn->Click += gcnew System::EventHandler(this, &Main_Ui::thursday_lec5_btn_Click);
			//
			// thursday_lec6_btn
			//
			resources->ApplyResources(this->thursday_lec6_btn, L"thursday_lec6_btn");
			this->thursday_lec6_btn->BackColor = System::Drawing::Color::Transparent;
			this->thursday_lec6_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->thursday_lec6_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->thursday_lec6_btn->ForeColor = System::Drawing::Color::White;
			this->thursday_lec6_btn->Name = L"thursday_lec6_btn";
			this->thursday_lec6_btn->UseVisualStyleBackColor = false;
			this->thursday_lec6_btn->Click += gcnew System::EventHandler(this, &Main_Ui::thursday_lec6_btn_Click);
			//
			// thursday_lec7_btn
			//
			resources->ApplyResources(this->thursday_lec7_btn, L"thursday_lec7_btn");
			this->thursday_lec7_btn->BackColor = System::Drawing::Color::Transparent;
			this->thursday_lec7_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->thursday_lec7_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->thursday_lec7_btn->ForeColor = System::Drawing::Color::White;
			this->thursday_lec7_btn->Name = L"thursday_lec7_btn";
			this->thursday_lec7_btn->UseVisualStyleBackColor = false;
			this->thursday_lec7_btn->Click += gcnew System::EventHandler(this, &Main_Ui::thursday_lec7_btn_Click);
			//
			// thursday_lec8_btn
			//
			resources->ApplyResources(this->thursday_lec8_btn, L"thursday_lec8_btn");
			this->thursday_lec8_btn->BackColor = System::Drawing::Color::Transparent;
			this->thursday_lec8_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->thursday_lec8_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->thursday_lec8_btn->ForeColor = System::Drawing::Color::White;
			this->thursday_lec8_btn->Name = L"thursday_lec8_btn";
			this->thursday_lec8_btn->UseVisualStyleBackColor = false;
			this->thursday_lec8_btn->Click += gcnew System::EventHandler(this, &Main_Ui::thursday_lec8_btn_Click);
			//
			// thursday_lec9_btn
			//
			resources->ApplyResources(this->thursday_lec9_btn, L"thursday_lec9_btn");
			this->thursday_lec9_btn->BackColor = System::Drawing::Color::Transparent;
			this->thursday_lec9_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->thursday_lec9_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->thursday_lec9_btn->ForeColor = System::Drawing::Color::White;
			this->thursday_lec9_btn->Name = L"thursday_lec9_btn";
			this->thursday_lec9_btn->UseVisualStyleBackColor = false;
			this->thursday_lec9_btn->Click += gcnew System::EventHandler(this, &Main_Ui::thursday_lec9_btn_Click);
			//
			// friday_lec3_btn
			//
			resources->ApplyResources(this->friday_lec3_btn, L"friday_lec3_btn");
			this->friday_lec3_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->friday_lec3_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->friday_lec3_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->friday_lec3_btn->ForeColor = System::Drawing::Color::White;
			this->friday_lec3_btn->Name = L"friday_lec3_btn";
			this->friday_lec3_btn->UseVisualStyleBackColor = true;
			this->friday_lec3_btn->Click += gcnew System::EventHandler(this, &Main_Ui::friday_lec3_btn_Click);
			//
			// friday_lec4_btn
			//
			resources->ApplyResources(this->friday_lec4_btn, L"friday_lec4_btn");
			this->friday_lec4_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->friday_lec4_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->friday_lec4_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->friday_lec4_btn->ForeColor = System::Drawing::Color::White;
			this->friday_lec4_btn->Name = L"friday_lec4_btn";
			this->friday_lec4_btn->UseVisualStyleBackColor = true;
			this->friday_lec4_btn->Click += gcnew System::EventHandler(this, &Main_Ui::friday_lec4_btn_Click);
			//
			// friday_lec5_btn
			//
			resources->ApplyResources(this->friday_lec5_btn, L"friday_lec5_btn");
			this->friday_lec5_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->friday_lec5_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->friday_lec5_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->friday_lec5_btn->ForeColor = System::Drawing::Color::White;
			this->friday_lec5_btn->Name = L"friday_lec5_btn";
			this->friday_lec5_btn->UseVisualStyleBackColor = true;
			this->friday_lec5_btn->Click += gcnew System::EventHandler(this, &Main_Ui::friday_lec5_btn_Click);
			//
			// friday_lec6_btn
			//
			resources->ApplyResources(this->friday_lec6_btn, L"friday_lec6_btn");
			this->friday_lec6_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->friday_lec6_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->friday_lec6_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->friday_lec6_btn->ForeColor = System::Drawing::Color::White;
			this->friday_lec6_btn->Name = L"friday_lec6_btn";
			this->friday_lec6_btn->UseVisualStyleBackColor = true;
			this->friday_lec6_btn->Click += gcnew System::EventHandler(this, &Main_Ui::friday_lec6_btn_Click);
			//
			// friday_lec7_btn
			//
			resources->ApplyResources(this->friday_lec7_btn, L"friday_lec7_btn");
			this->friday_lec7_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->friday_lec7_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->friday_lec7_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->friday_lec7_btn->ForeColor = System::Drawing::Color::White;
			this->friday_lec7_btn->Name = L"friday_lec7_btn";
			this->friday_lec7_btn->UseVisualStyleBackColor = true;
			this->friday_lec7_btn->Click += gcnew System::EventHandler(this, &Main_Ui::friday_lec7_btn_Click);
			//
			// friday_lec8_btn
			//
			resources->ApplyResources(this->friday_lec8_btn, L"friday_lec8_btn");
			this->friday_lec8_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->friday_lec8_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->friday_lec8_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->friday_lec8_btn->ForeColor = System::Drawing::Color::White;
			this->friday_lec8_btn->Name = L"friday_lec8_btn";
			this->friday_lec8_btn->UseVisualStyleBackColor = true;
			this->friday_lec8_btn->Click += gcnew System::EventHandler(this, &Main_Ui::friday_lec8_btn_Click);
			//
			// friday_lec9_btn
			//
			resources->ApplyResources(this->friday_lec9_btn, L"friday_lec9_btn");
			this->friday_lec9_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->friday_lec9_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->friday_lec9_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->friday_lec9_btn->ForeColor = System::Drawing::Color::White;
			this->friday_lec9_btn->Name = L"friday_lec9_btn";
			this->friday_lec9_btn->UseVisualStyleBackColor = true;
			this->friday_lec9_btn->Click += gcnew System::EventHandler(this, &Main_Ui::friday_lec9_btn_Click);
			//
			// tableLayoutPanel4
			//
			resources->ApplyResources(this->tableLayoutPanel4, L"tableLayoutPanel4");
			this->tableLayoutPanel4->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel4->Controls->Add(this->textBox2, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->read_file_btn, 3, 0);
			this->tableLayoutPanel4->Controls->Add(this->choose_excel_file_btn, 1, 0);
			this->tableLayoutPanel4->Controls->Add(this->textBox1, 2, 0);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			//
			// github_link_label
			//
			resources->ApplyResources(this->github_link_label, L"github_link_label");
			this->github_link_label->BackColor = System::Drawing::Color::Transparent;
			this->github_link_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->github_link_label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->github_link_label->ForeColor = System::Drawing::Color::Transparent;
			this->github_link_label->Name = L"github_link_label";
			this->github_link_label->Click += gcnew System::EventHandler(this, &Main_Ui::github_link_label_Click);
			//
			// Main_Ui
			//
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
															   static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->Controls->Add(this->github_link_label);
			this->Controls->Add(this->tableLayoutPanel4);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tableLayoutPanel6);
			this->Controls->Add(this->tableLayoutPanel5);
			this->Controls->Add(this->tableLayoutPanel3);
			this->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->HelpButton = true;
			this->Name = L"Main_Ui";
			this->Load += gcnew System::EventHandler(this, &Main_Ui::Main_Ui_Load);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
		//Initializations
	private:
		//int weekDay = getDayNumber();
		int weekDay = 2;
		System::String ^ global_file_path = L"";
		int monday_row;
		int monday_col;
		int string_row;
		int string_col;
		int links_table_start_row;
		int links_table_start_col;
		CellType cellType;
		System::String ^ system_string_up_arrow;
		System::String ^ monday_lec1_url, ^monday_lec2_url, ^monday_lec3_url, ^monday_lec4_url, ^monday_lec5_url, ^monday_lec6_url, ^monday_lec7_url, ^monday_lec8_url, ^monday_lec9_url;
		System::String ^ tuesday_lec1_url, ^tuesday_lec2_url, ^tuesday_lec3_url, ^tuesday_lec4_url, ^tuesday_lec5_url, ^tuesday_lec6_url, ^tuesday_lec7_url, ^tuesday_lec8_url, ^tuesday_lec9_url;
		System::String ^ wednesday_lec1_url, ^wednesday_lec2_url, ^wednesday_lec3_url, ^wednesday_lec4_url, ^wednesday_lec5_url, ^wednesday_lec6_url, ^wednesday_lec7_url, ^wednesday_lec8_url, ^wednesday_lec9_url;
		System::String ^ thursday_lec1_url, ^thursday_lec2_url, ^thursday_lec3_url, ^thursday_lec4_url, ^thursday_lec5_url, ^thursday_lec6_url, ^thursday_lec7_url, ^thursday_lec8_url, ^thursday_lec9_url;
		System::String ^ friday_lec1_url, ^friday_lec2_url, ^friday_lec3_url, ^friday_lec4_url, ^friday_lec5_url, ^friday_lec6_url, ^friday_lec7_url, ^friday_lec8_url, ^friday_lec9_url;

		int zellersAlgorithm(int day, int month, int year)
		{
			int weekday[7] = {6, 0, 1, 2, 3, 4, 5};
			int mon;
			if (month > 2)
				mon = month; //for march to december month code is same as month
			else
			{
				mon = (12 + month); //for Jan and Feb, month code will be 13 and 14
				year--;				//decrease year for month Jan and Feb
			}
			int y = year % 100; //last two digit
			int c = year / 100; //first two digit
			int w = (day + floor((13 * (mon + 1)) / 5) + y + floor(y / 4) + floor(c / 4) + (5 * c));
			w = w % 7;
			return weekday[w];
		}

		int getDayNumber()
		{
			time_t now = time(0);

			tm *ltm = localtime(&now);
			int day = ltm->tm_mday, month = 1 + ltm->tm_mon, year = 1900 + ltm->tm_year;
			return zellersAlgorithm(day, month, year);
		}

		System::String ^ links_modifier(const wchar_t *cell_string_data)
		{
			wstring cell_string_data_wide(cell_string_data);
			string cell_string_data_string(cell_string_data_wide.begin(), cell_string_data_wide.end());
			system_string_up_arrow = "";
			system_string_up_arrow = system_string_up_arrow + msclr::interop::marshal_as<System::String ^>(cell_string_data_string);
			return system_string_up_arrow;
		}

			void find_links_table(Sheet *sheet, wstring toFind)
		{
			for (int row = sheet->firstRow(); row <= sheet->lastRow(); ++row)
			{
				for (int col = sheet->firstCol(); col < sheet->lastCol(); ++col)
				{
					CellType cellType = sheet->cellType(row, col);
					//std::wcout << "(" << row << ", " << col << ") = ";
					if (cellType == CELLTYPE_STRING)
					{
						//const wchar_t *s = sheet->readFormula(row, col);
						//std::wcout << (s ? s : L"null") << " [formula]";
						std::wstring str(toFind);
						const wchar_t *szStr = str.c_str();
						const wchar_t *s = sheet->readStr(row, col);

						wstring ws1(s);
						string str1(ws1.begin(), ws1.end());

						wstring ws2(szStr);
						string str2(ws2.begin(), ws2.end());

						// fstream my_file;
						// my_file.open("error_logs.txt", ios::out);
						// if (my_file)
						// {
						// 	my_file << *s + *(s + 1);
						// 	my_file.close();
						// }
						if (str1 == str2)
						{
							links_table_start_row = row;
							links_table_start_col = col;
							std::cout << "[row = " << row << ",column" << col << "]";
							return;
						}
						//std::wcout << (s ? s : L"null") << " [string]";
					}
				}
			}
		}

		void find_strings_in_links_table(Sheet *sheet, wstring toFind)
		{
			for (int row = links_table_start_row; row <= sheet->lastRow(); ++row)
			{
				for (int col = links_table_start_col; col < sheet->lastCol(); ++col)
				{
					CellType cellType = sheet->cellType(row, col);
					if (cellType == CELLTYPE_STRING)
					{
						std::wstring str(toFind);
						const wchar_t *szStr = str.c_str();
						const wchar_t *s = sheet->readStr(row, col);

						wstring ws1(s);
						string str1(ws1.begin(), ws1.end());

						wstring ws2(szStr);
						string str2(ws2.begin(), ws2.end());
						if (str1 == str2)
						{
							string_row = row;
							string_col = col;

							std::cout << "[row = " << row << ",column" << col << "]";
							return;
						}
					}
				}
			}
		}

		string wchar_t_ptr_to_string(const wchar_t *toConvert)
		{
			wstring wide_string(toConvert);
			string converted(wide_string.begin(), wide_string.end());
			return converted;
		}
		wstring wchar_t_ptr_to_wstring(const wchar_t *toConvert)
		{
			wstring converted_wide_string(toConvert);
			return converted_wide_string;
		}
		void button_modifier(System::Windows::Forms::Button ^ btn, const wchar_t *lec_str)
		{
			btn->Visible = true;
			btn->Text = "";
			btn->Text = btn->Text + msclr::interop::marshal_as<System::String ^>(wchar_t_ptr_to_string(lec_str));
		}
		void replaceAll(std::string &str, const std::string &from, const std::string &to)
		{
			if (from.empty())
				return;
			size_t start_pos = 0;
			while ((start_pos = str.find(from, start_pos)) != std::string::npos)
			{
				str.replace(start_pos, from.length(), to);
				start_pos += to.length(); // In case 'to' contains 'from', like replacing 'x' with 'yx'
			}
		}

		void read_previous_file()
		{
			fstream my_file;
			my_file.open("saved_file.txt", ios::in);
			std::string previous_file_path_1;
			if (my_file)
			{
				while (std::getline(my_file, previous_file_path_1))
				{
					previous_file_path_1 = previous_file_path_1 + "";
				}
			}
			my_file.close();
			String ^ previous_file_path_2;
			previous_file_path_2 = msclr::interop::marshal_as<String ^>(previous_file_path_1);
			if (previous_file_path_1 != "")
			{
				replaceAll(previous_file_path_1, "\\", "\\\\");
				read_file(previous_file_path_2);
			}
		}

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
			//textBox3->Visible = true;
			//textBox3->Text = msclr::interop::marshal_as<System::String ^>(toFind);
			for (int row = links_table_start_row; row < sheet->lastRow(); ++row)
			{
				for (int col = links_table_start_col; col < sheet->lastCol(); ++col)
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

						wstring ws1(s);
						string str1(ws1.begin(), ws1.end());

						wstring ws2(szStr);
						string str2(ws2.begin(), ws2.end());

						// fstream my_file;
						// my_file.open("error_logs.txt", ios::out);
						// if (my_file)
						// {
						// 	my_file << *s + *(s + 1);
						// 	my_file.close();
						// }
						if (str1 == str2)
						{
							string_row = row;
							string_col = col;
							return;
							//std::cout<< "[row = " << row << ",column" << col << "]";
						}
						//std::wcout << (s ? s : L"null") << " [string]";
					}
					//std::wcout << std::endl;
				}
			}
		};

		void timeline_buttons_maker(Sheet *sheet)
		{
			int row, col;
			//Timeline Label 1
			row = monday_row - 1;
			col = monday_col + 1;
			const wchar_t *time_label_1_string = sheet->readStr(row, col);
			wstring time_label_1(time_label_1_string);
			string time_label_1_str(time_label_1.begin(), time_label_1.end());

			time_1_label->Visible = true;
			time_1_label->Text = "";
			time_1_label->Text = time_1_label->Text + msclr::interop::marshal_as<System::String ^>(time_label_1_str);

			//Timeline Label 2
			col = col + 1;
			const wchar_t *time_label_2_string = sheet->readStr(row, col);
			wstring time_label_2(time_label_2_string);
			string time_label_2_str(time_label_2.begin(), time_label_2.end());

			time_2_label->Visible = true;
			time_2_label->Text = "";
			time_2_label->Text = time_2_label->Text + msclr::interop::marshal_as<System::String ^>(time_label_2_str);

			//Timeline Label 3
			col = col + 1;
			const wchar_t *time_label_3_string = sheet->readStr(row, col);
			wstring time_label_3(time_label_3_string);
			string time_label_3_str(time_label_3.begin(), time_label_3.end());

			time_3_label->Visible = true;
			time_3_label->Text = "";
			time_3_label->Text = time_3_label->Text + msclr::interop::marshal_as<System::String ^>(time_label_3_str);

			//Timeline Label 4
			col = col + 1;
			const wchar_t *time_label_4_string = sheet->readStr(row, col);
			wstring time_label_4(time_label_4_string);
			string time_label_4_str(time_label_4.begin(), time_label_4.end());

			time_4_label->Visible = true;
			time_4_label->Text = "";
			time_4_label->Text = time_4_label->Text + msclr::interop::marshal_as<System::String ^>(time_label_4_str);

			//Timeline Label 5
			col = col + 1;
			const wchar_t *time_label_5_string = sheet->readStr(row, col);
			wstring time_label_5(time_label_5_string);
			string time_label_5_str(time_label_5.begin(), time_label_5.end());

			time_5_label->Visible = true;
			time_5_label->Text = "";
			time_5_label->Text = time_5_label->Text + msclr::interop::marshal_as<System::String ^>(time_label_5_str);

			//Timeline Label 6
			col = col + 1;
			const wchar_t *time_label_6_string = sheet->readStr(row, col);
			wstring time_label_6(time_label_6_string);
			string time_label_6_str(time_label_6.begin(), time_label_6.end());

			time_6_label->Visible = true;
			time_6_label->Text = "";
			time_6_label->Text = time_6_label->Text + msclr::interop::marshal_as<System::String ^>(time_label_6_str);

			//Timeline Label 7
			col = col + 1;
			const wchar_t *time_label_7_string = sheet->readStr(row, col);
			wstring time_label_7(time_label_7_string);
			string time_label_7_str(time_label_7.begin(), time_label_7.end());

			time_7_label->Visible = true;
			time_7_label->Text = "";
			time_7_label->Text = time_7_label->Text + msclr::interop::marshal_as<System::String ^>(time_label_7_str);

			//Timeline Label 8
			col = col + 1;
			const wchar_t *time_label_8_string = sheet->readStr(row, col);
			wstring time_label_8(time_label_8_string);
			string time_label_8_str(time_label_8.begin(), time_label_8.end());

			time_8_label->Visible = true;
			time_8_label->Text = "";
			time_8_label->Text = time_8_label->Text + msclr::interop::marshal_as<System::String ^>(time_label_8_str);

			//Timeline Label 9
			col = col + 1;
			const wchar_t *time_label_9_string = sheet->readStr(row, col);
			wstring time_label_9(time_label_9_string);
			string time_label_9_str(time_label_9.begin(), time_label_9.end());

			time_9_label->Visible = true;
			time_9_label->Text = "";
			time_9_label->Text = time_9_label->Text + msclr::interop::marshal_as<System::String ^>(time_label_9_str);
		};

		void monday_buttons_maker(Sheet *sheet)
		{
			int row, col;
			row = monday_row;
			//Monday Lec1
			col = monday_col + 1;
			cellType = sheet->cellType(row, col);

			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(monday_lec1_btn, sheet->readStr(row, col));

				//find_string(sheet, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));
				monday_lec1_url = monday_lec1_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}

			//Monday Lec2
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(monday_lec2_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				monday_lec2_url = monday_lec2_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}

			//Monday Lec3
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(monday_lec3_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				monday_lec3_url = monday_lec3_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}

			//Monday Lec4
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(monday_lec4_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				monday_lec4_url = monday_lec4_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Monday Lec5
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(monday_lec5_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				monday_lec5_url = monday_lec5_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Monday Lec6
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(monday_lec6_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				monday_lec6_url = monday_lec6_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Monday Lec7
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(monday_lec7_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				monday_lec7_url = monday_lec7_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Monday Lec8
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(monday_lec8_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				monday_lec8_url = monday_lec8_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Monday Lec9
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(monday_lec9_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				monday_lec9_url = monday_lec9_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
		}

		void tuesday_buttons_maker(Sheet *sheet)
		{
			int row, col;
			row = monday_row + 1;
			//Tuesday Lec1
			col = monday_col + 1;
			cellType = sheet->cellType(row, col);

			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(tuesday_lec1_btn, sheet->readStr(row, col));

				//find_string(sheet, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));
				tuesday_lec1_url = tuesday_lec1_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}

			//Tuesday Lec2
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(tuesday_lec2_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				tuesday_lec2_url = tuesday_lec2_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}

			//Tuesday Lec3
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(tuesday_lec3_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				tuesday_lec3_url = tuesday_lec3_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}

			//Tuesday Lec4
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(tuesday_lec4_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				tuesday_lec4_url = tuesday_lec4_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Tuesday Lec5
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(tuesday_lec5_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				tuesday_lec5_url = tuesday_lec5_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Tuesday Lec6
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(tuesday_lec6_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				tuesday_lec6_url = tuesday_lec6_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Tuesday Lec7
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(tuesday_lec7_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				tuesday_lec7_url = tuesday_lec7_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Tuesday Lec8
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(tuesday_lec8_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				tuesday_lec8_url = tuesday_lec8_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Tuesday Lec9
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(tuesday_lec9_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				tuesday_lec9_url = tuesday_lec9_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
		}

		void wednesday_buttons_maker(Sheet *sheet)
		{
			int row, col;
			row = monday_row + 2;
			//Wednesday Lec1
			col = monday_col + 1;
			cellType = sheet->cellType(row, col);

			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(wednesday_lec1_btn, sheet->readStr(row, col));

				//find_string(sheet, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));
				wednesday_lec1_url = wednesday_lec1_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}

			//Wednesday Lec2
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(wednesday_lec2_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				wednesday_lec2_url = wednesday_lec2_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}

			//Wednesday Lec3
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(wednesday_lec3_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				wednesday_lec3_url = wednesday_lec3_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}

			//Wednesday Lec4
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(wednesday_lec4_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				wednesday_lec4_url = wednesday_lec4_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Wednesday Lec5
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(wednesday_lec5_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				wednesday_lec5_url = wednesday_lec5_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Wednesday Lec6
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(wednesday_lec6_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				wednesday_lec6_url = wednesday_lec6_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Wednesday Lec7
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(wednesday_lec7_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				wednesday_lec7_url = wednesday_lec7_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Wednesday Lec8
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(wednesday_lec8_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				wednesday_lec8_url = wednesday_lec8_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Wednesday Lec9
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(wednesday_lec9_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				wednesday_lec9_url = wednesday_lec9_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
		}

		void thursday_buttons_maker(Sheet *sheet)
		{
			int row, col;
			row = monday_row + 3;
			//Thursday Lec1
			col = monday_col + 1;
			cellType = sheet->cellType(row, col);

			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(thursday_lec1_btn, sheet->readStr(row, col));

				//find_string(sheet, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));
				thursday_lec1_url = thursday_lec1_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}

			//Thursday Lec2
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(thursday_lec2_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				thursday_lec2_url = thursday_lec2_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}

			//Thursday Lec3
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(thursday_lec3_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				thursday_lec3_url = thursday_lec3_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}

			//Thursday Lec4
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(thursday_lec4_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				thursday_lec4_url = thursday_lec4_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Thursday Lec5
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(thursday_lec5_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				thursday_lec5_url = thursday_lec5_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Thursday Lec6
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(thursday_lec6_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				thursday_lec6_url = thursday_lec6_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Thursday Lec7
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(thursday_lec7_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				thursday_lec7_url = thursday_lec7_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Thursday Lec8
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(thursday_lec8_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				thursday_lec8_url = thursday_lec8_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Thursday Lec9
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(thursday_lec9_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				thursday_lec9_url = thursday_lec9_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
		}

		void friday_buttons_maker(Sheet *sheet)
		{
			int row, col;
			row = monday_row + 4;
			//Friday Lec1
			col = monday_col + 1;
			cellType = sheet->cellType(row, col);

			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(friday_lec1_btn, sheet->readStr(row, col));

				//find_string(sheet, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));
				friday_lec1_url = friday_lec1_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}

			//Friday Lec2
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(friday_lec2_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				friday_lec2_url = friday_lec2_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}

			//Friday Lec3
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(friday_lec3_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				friday_lec3_url = friday_lec3_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}

			//Friday Lec4
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(friday_lec4_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				friday_lec4_url = friday_lec4_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Friday Lec5
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(friday_lec5_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				friday_lec5_url = friday_lec5_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Friday Lec6
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(friday_lec6_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				friday_lec6_url = friday_lec6_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Friday Lec7
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(friday_lec7_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				friday_lec7_url = friday_lec7_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Friday Lec8
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(friday_lec8_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				friday_lec8_url = friday_lec8_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
			//Friday Lec9
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(friday_lec9_btn, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, sheet->readStr(row, col));

				friday_lec9_url = friday_lec9_url + links_modifier(sheet->readStr(string_row, string_col + 1));
			}
		}

		void display_buttons(Sheet *sheet)
		{
			/*for (int row = monday_row; row < sheet->lastRow(); ++row)
			{
				for (int col = monday_col + 1; col < sheet->lastCol(); ++col)
				{*/

			timeline_buttons_maker(sheet);
			find_links_table(sheet, L"Links");
			if (weekDay == 0 || weekDay == 1)
			{
				monday_buttons_maker(sheet);
			}
			else if (weekDay == 2)
			{
				tuesday_buttons_maker(sheet);
			}
			else if (weekDay == 3)
			{
				wednesday_buttons_maker(sheet);
			}
			else if (weekDay == 4)
			{
				thursday_buttons_maker(sheet);
			}
			else if (weekDay == 5 || weekDay == 6)
			{
				friday_buttons_maker(sheet);
			}
		}

		void read_file(System::String ^ file_path)
		{
			//String ^ to std::string
			std::string converted_filename = msclr::interop::marshal_as<std::string>(file_path);
			fstream my_file;
			my_file.open("saved_file.txt", ios::out);
			if (my_file)
			{
				my_file << converted_filename;
				my_file.close();
			}
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
			openFileDialog1->FileName = "";
			openFileDialog1->Filter = "Excel Sheet|*.xlsx";
			//default path Users\\abhis\\Desktop\\SDP_Works\\Time_Table_Linker_Project\\My_Folder
			openFileDialog1->InitialDirectory = "C:\\";
			openFileDialog1->Title = "Open Excel Files";
			openFileDialog1->ShowDialog();
			filename = openFileDialog1->FileName;
			textBox1->Text = filename->ToString();

			//System::String^ xyz = "Hi boys";
			global_file_path = filename;
			//std::string converted_filename = msclr::interop::marshal_as< std::string >(filename);
			textBox2->Text = global_file_path;
			if (global_file_path != "")
			{
				MessageBox::Show("File Imported Successfully", "Time Table Linker", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}

	private:
		System::Void read_file_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			if (textBox2->Text == L"Enter File Path..." || textBox2->Text == L"")
			{

				MessageBox::Show("Please Choose File", "Time Table Linker", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				//read_file(global_file_path);
				read_file(textBox2->Text);
			}
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

	private:
		System::Void monday_lec3_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ monday_lec3_url_secondary = "" + monday_lec3_url;
			std::string monday_lec3_final_url = msclr::interop::marshal_as<std::string>(monday_lec3_url_secondary);
			system(("start " + monday_lec3_final_url).c_str());
		}

	private:
		System::Void monday_lec4_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ monday_lec4_url_secondary = "" + monday_lec4_url;
			std::string monday_lec4_final_url = msclr::interop::marshal_as<std::string>(monday_lec4_url_secondary);
			system(("start " + monday_lec4_final_url).c_str());
		}

	private:
		System::Void monday_lec5_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ monday_lec5_url_secondary = "" + monday_lec5_url;
			std::string monday_lec5_final_url = msclr::interop::marshal_as<std::string>(monday_lec5_url_secondary);
			system(("start " + monday_lec5_final_url).c_str());
		}

	private:
		System::Void monday_lec6_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ monday_lec6_url_secondary = "" + monday_lec6_url;
			std::string monday_lec6_final_url = msclr::interop::marshal_as<std::string>(monday_lec6_url_secondary);
			system(("start " + monday_lec6_final_url).c_str());
		}

	private:
		System::Void monday_lec7_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ monday_lec7_url_secondary = "" + monday_lec7_url;
			std::string monday_lec7_final_url = msclr::interop::marshal_as<std::string>(monday_lec7_url_secondary);
			system(("start " + monday_lec7_final_url).c_str());
		}

	private:
		System::Void monday_lec8_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ monday_lec8_url_secondary = "" + monday_lec8_url;
			std::string monday_lec8_final_url = msclr::interop::marshal_as<std::string>(monday_lec8_url_secondary);
			system(("start " + monday_lec8_final_url).c_str());
		}

	private:
		System::Void monday_lec9_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ monday_lec9_url_secondary = "" + monday_lec9_url;
			std::string monday_lec9_final_url = msclr::interop::marshal_as<std::string>(monday_lec9_url_secondary);
			system(("start " + monday_lec9_final_url).c_str());
		}

	private:
		System::Void tuesday_lec1_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ tuesday_lec1_url_secondary = "" + tuesday_lec1_url;
			std::string tuesday_lec1_final_url = msclr::interop::marshal_as<std::string>(tuesday_lec1_url_secondary);
			system(("start " + tuesday_lec1_final_url).c_str());
		}

	private:
		System::Void tuesday_lec2_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ tuesday_lec2_url_secondary = "" + tuesday_lec2_url;
			std::string tuesday_lec2_final_url = msclr::interop::marshal_as<std::string>(tuesday_lec2_url_secondary);
			system(("start " + tuesday_lec2_final_url).c_str());
		}

	private:
		System::Void tuesday_lec3_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ tuesday_lec3_url_secondary = "" + tuesday_lec3_url;
			std::string tuesday_lec3_final_url = msclr::interop::marshal_as<std::string>(tuesday_lec3_url_secondary);
			system(("start " + tuesday_lec3_final_url).c_str());
		}

	private:
		System::Void tuesday_lec4_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ tuesday_lec4_url_secondary = "" + tuesday_lec4_url;
			std::string tuesday_lec4_final_url = msclr::interop::marshal_as<std::string>(tuesday_lec4_url_secondary);
			system(("start " + tuesday_lec4_final_url).c_str());
		}

	private:
		System::Void tuesday_lec5_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ tuesday_lec5_url_secondary = "" + tuesday_lec5_url;
			std::string tuesday_lec5_final_url = msclr::interop::marshal_as<std::string>(tuesday_lec5_url_secondary);
			system(("start " + tuesday_lec5_final_url).c_str());
		}

	private:
		System::Void tuesday_lec6_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ tuesday_lec6_url_secondary = "" + tuesday_lec6_url;
			std::string tuesday_lec6_final_url = msclr::interop::marshal_as<std::string>(tuesday_lec6_url_secondary);
			system(("start " + tuesday_lec6_final_url).c_str());
		}

	private:
		System::Void tuesday_lec7_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ tuesday_lec7_url_secondary = "" + tuesday_lec7_url;
			std::string tuesday_lec7_final_url = msclr::interop::marshal_as<std::string>(tuesday_lec7_url_secondary);
			system(("start " + tuesday_lec7_final_url).c_str());
		}

	private:
		System::Void tuesday_lec8_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ tuesday_lec8_url_secondary = "" + tuesday_lec8_url;
			std::string tuesday_lec8_final_url = msclr::interop::marshal_as<std::string>(tuesday_lec8_url_secondary);
			system(("start " + tuesday_lec8_final_url).c_str());
		}

	private:
		System::Void tuesday_lec9_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ tuesday_lec9_url_secondary = "" + tuesday_lec9_url;
			std::string tuesday_lec9_final_url = msclr::interop::marshal_as<std::string>(tuesday_lec9_url_secondary);
			system(("start " + tuesday_lec9_final_url).c_str());
		}

	private:
		System::Void wednesday_lec1_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ wednesday_lec1_url_secondary = "" + wednesday_lec1_url;
			std::string wednesday_lec1_final_url = msclr::interop::marshal_as<std::string>(wednesday_lec1_url_secondary);
			system(("start " + wednesday_lec1_final_url).c_str());
		}

	private:
		System::Void wednesday_lec2_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ wednesday_lec2_url_secondary = "" + wednesday_lec2_url;
			std::string wednesday_lec2_final_url = msclr::interop::marshal_as<std::string>(wednesday_lec2_url_secondary);
			system(("start " + wednesday_lec2_final_url).c_str());
		}

	private:
		System::Void wednesday_lec3_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ wednesday_lec3_url_secondary = "" + wednesday_lec3_url;
			std::string wednesday_lec3_final_url = msclr::interop::marshal_as<std::string>(wednesday_lec3_url_secondary);
			system(("start " + wednesday_lec3_final_url).c_str());
		}

	private:
		System::Void wednesday_lec4_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ wednesday_lec4_url_secondary = "" + wednesday_lec4_url;
			std::string wednesday_lec4_final_url = msclr::interop::marshal_as<std::string>(wednesday_lec4_url_secondary);
			system(("start " + wednesday_lec4_final_url).c_str());
		}

	private:
		System::Void wednesday_lec5_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ wednesday_lec5_url_secondary = "" + wednesday_lec5_url;
			std::string wednesday_lec5_final_url = msclr::interop::marshal_as<std::string>(wednesday_lec5_url_secondary);
			system(("start " + wednesday_lec5_final_url).c_str());
		}

	private:
		System::Void wednesday_lec6_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ wednesday_lec6_url_secondary = "" + wednesday_lec6_url;
			std::string wednesday_lec6_final_url = msclr::interop::marshal_as<std::string>(wednesday_lec6_url_secondary);
			system(("start " + wednesday_lec6_final_url).c_str());
		}

	private:
		System::Void wednesday_lec7_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ wednesday_lec7_url_secondary = "" + wednesday_lec7_url;
			std::string wednesday_lec7_final_url = msclr::interop::marshal_as<std::string>(wednesday_lec7_url_secondary);
			system(("start " + wednesday_lec7_final_url).c_str());
		}

	private:
		System::Void wednesday_lec8_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ wednesday_lec8_url_secondary = "" + wednesday_lec8_url;
			std::string wednesday_lec8_final_url = msclr::interop::marshal_as<std::string>(wednesday_lec8_url_secondary);
			system(("start " + wednesday_lec8_final_url).c_str());
		}

	private:
		System::Void wednesday_lec9_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ wednesday_lec9_url_secondary = "" + wednesday_lec9_url;
			std::string wednesday_lec9_final_url = msclr::interop::marshal_as<std::string>(wednesday_lec9_url_secondary);
			system(("start " + wednesday_lec9_final_url).c_str());
		}

	private:
		System::Void thursday_lec1_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ thursday_lec1_url_secondary = "" + thursday_lec1_url;
			std::string thursday_lec1_final_url = msclr::interop::marshal_as<std::string>(thursday_lec1_url_secondary);
			system(("start " + thursday_lec1_final_url).c_str());
		}

	private:
		System::Void thursday_lec2_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ thursday_lec2_url_secondary = "" + thursday_lec2_url;
			std::string thursday_lec2_final_url = msclr::interop::marshal_as<std::string>(thursday_lec2_url_secondary);
			system(("start " + thursday_lec2_final_url).c_str());
		}

	private:
		System::Void thursday_lec3_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ thursday_lec3_url_secondary = "" + thursday_lec3_url;
			std::string thursday_lec3_final_url = msclr::interop::marshal_as<std::string>(thursday_lec3_url_secondary);
			system(("start " + thursday_lec3_final_url).c_str());
		}

	private:
		System::Void thursday_lec4_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ thursday_lec4_url_secondary = "" + thursday_lec4_url;
			std::string thursday_lec4_final_url = msclr::interop::marshal_as<std::string>(thursday_lec4_url_secondary);
			system(("start " + thursday_lec4_final_url).c_str());
		}

	private:
		System::Void thursday_lec5_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ thursday_lec5_url_secondary = "" + thursday_lec5_url;
			std::string thursday_lec5_final_url = msclr::interop::marshal_as<std::string>(thursday_lec5_url_secondary);
			system(("start " + thursday_lec5_final_url).c_str());
		}

	private:
		System::Void thursday_lec6_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ thursday_lec6_url_secondary = "" + thursday_lec6_url;
			std::string thursday_lec6_final_url = msclr::interop::marshal_as<std::string>(thursday_lec6_url_secondary);
			system(("start " + thursday_lec6_final_url).c_str());
		}

	private:
		System::Void thursday_lec7_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ thursday_lec7_url_secondary = "" + thursday_lec7_url;
			std::string thursday_lec7_final_url = msclr::interop::marshal_as<std::string>(thursday_lec7_url_secondary);
			system(("start " + thursday_lec7_final_url).c_str());
		}

	private:
		System::Void thursday_lec8_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ thursday_lec8_url_secondary = "" + thursday_lec8_url;
			std::string thursday_lec8_final_url = msclr::interop::marshal_as<std::string>(thursday_lec8_url_secondary);
			system(("start " + thursday_lec8_final_url).c_str());
		}

	private:
		System::Void thursday_lec9_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ thursday_lec9_url_secondary = "" + thursday_lec9_url;
			std::string thursday_lec9_final_url = msclr::interop::marshal_as<std::string>(thursday_lec9_url_secondary);
			system(("start " + thursday_lec9_final_url).c_str());
		}

	private:
		System::Void friday_lec1_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ friday_lec1_url_secondary = "" + friday_lec1_url;
			std::string friday_lec1_final_url = msclr::interop::marshal_as<std::string>(friday_lec1_url_secondary);
			system(("start " + friday_lec1_final_url).c_str());
		}

	private:
		System::Void friday_lec2_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ friday_lec2_url_secondary = "" + friday_lec2_url;
			std::string friday_lec2_final_url = msclr::interop::marshal_as<std::string>(friday_lec2_url_secondary);
			system(("start " + friday_lec2_final_url).c_str());
		}

	private:
		System::Void friday_lec3_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ friday_lec3_url_secondary = "" + friday_lec3_url;
			std::string friday_lec3_final_url = msclr::interop::marshal_as<std::string>(friday_lec3_url_secondary);
			system(("start " + friday_lec3_final_url).c_str());
		}

	private:
		System::Void friday_lec4_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ friday_lec4_url_secondary = "" + friday_lec4_url;
			std::string friday_lec4_final_url = msclr::interop::marshal_as<std::string>(friday_lec4_url_secondary);
			system(("start " + friday_lec4_final_url).c_str());
		}

	private:
		System::Void friday_lec5_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ friday_lec5_url_secondary = "" + friday_lec5_url;
			std::string friday_lec5_final_url = msclr::interop::marshal_as<std::string>(friday_lec5_url_secondary);
			system(("start " + friday_lec5_final_url).c_str());
		}

	private:
		System::Void friday_lec6_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ friday_lec6_url_secondary = "" + friday_lec6_url;
			std::string friday_lec6_final_url = msclr::interop::marshal_as<std::string>(friday_lec6_url_secondary);
			system(("start " + friday_lec6_final_url).c_str());
		}

	private:
		System::Void friday_lec7_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ friday_lec7_url_secondary = "" + friday_lec7_url;
			std::string friday_lec7_final_url = msclr::interop::marshal_as<std::string>(friday_lec7_url_secondary);
			system(("start " + friday_lec7_final_url).c_str());
		}

	private:
		System::Void friday_lec8_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ friday_lec8_url_secondary = "" + friday_lec8_url;
			std::string friday_lec8_final_url = msclr::interop::marshal_as<std::string>(friday_lec8_url_secondary);
			system(("start " + friday_lec8_final_url).c_str());
		}

	private:
		System::Void friday_lec9_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ friday_lec9_url_secondary = "" + friday_lec9_url;
			std::string friday_lec9_final_url = msclr::interop::marshal_as<std::string>(friday_lec9_url_secondary);
			system(("start " + friday_lec9_final_url).c_str());
		}

	private:
		System::Void Main_Ui_Load(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void github_link_label_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			std::string githublink = "https://github.com/vkinsane/Time-Table-Linker-SDP-SY-SEM2/tree/master";
			system(("start " + githublink).c_str());
		}
	};
}