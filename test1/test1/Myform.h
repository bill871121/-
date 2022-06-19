#ifndef _NAME_H
#define _NAME_H

#pragma once
#include <cstring>
#include <iostream>
#include <vector>
#include <cmath> // standard C mathematical library
#include <algorithm> // defines the max() operator

#include "lookback_option.h"
#include "Asian_options.h"
#include "bernudan_option.h"
#include "BS_option.h"
#include "American_option.h"
using namespace std;

int num_of_type = 12;
std::vector<double> unit_price(num_of_type);
std::vector<int> type_list(num_of_type);
std::vector<int> quantity(num_of_type);
std::vector<string> type_str(12);

namespace test1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}


	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;








	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tableLayoutPanel1);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"新細明體", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox1->Location = System::Drawing::Point(30, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(562, 815);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"input";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				246)));
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(25, 641);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(489, 80);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(237, 74);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Same Input";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(246, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(240, 74);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Diff Input";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox9->Location = System::Drawing::Point(257, 563);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(257, 43);
			this->textBox9->TabIndex = 17;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label10->Location = System::Drawing::Point(20, 447);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 30);
			this->label10->TabIndex = 16;
			this->label10->Text = L"K";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox8->Location = System::Drawing::Point(257, 493);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(257, 43);
			this->textBox8->TabIndex = 15;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label9->Location = System::Drawing::Point(20, 506);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(105, 30);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Amount";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox3->Location = System::Drawing::Point(260, 119);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(257, 43);
			this->textBox3->TabIndex = 8;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox4->Location = System::Drawing::Point(260, 249);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(257, 43);
			this->textBox4->TabIndex = 9;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"新細明體", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(138, 727);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(259, 75);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Calculate";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox2->Location = System::Drawing::Point(260, 187);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(257, 43);
			this->textBox2->TabIndex = 8;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox5->Location = System::Drawing::Point(260, 306);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(257, 43);
			this->textBox5->TabIndex = 10;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox6->Location = System::Drawing::Point(257, 364);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(257, 43);
			this->textBox6->TabIndex = 11;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox7->Location = System::Drawing::Point(257, 434);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(257, 43);
			this->textBox7->TabIndex = 12;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox1->Location = System::Drawing::Point(260, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(257, 43);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(20, 377);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 30);
			this->label7->TabIndex = 6;
			this->label7->Text = L"TTM";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(20, 576);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 30);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Steps";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(20, 319);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 30);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Vol";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(20, 262);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(179, 30);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Dividend Rate";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(20, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(176, 30);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Discount Rate";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(20, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 30);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Price";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(20, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Type";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"新細明體", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label8->Location = System::Drawing::Point(620, 350);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 33);
			this->label8->TabIndex = 2;
			this->label8->Text = L"output";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"新細明體", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label11->Location = System::Drawing::Point(6, 35);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(551, 23);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Following are the types of option that you can choose(Type):";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"新細明體", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label12->Location = System::Drawing::Point(5, 69);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(964, 23);
			this->label12->TabIndex = 4;
			this->label12->Text = L"1. vanilla call  2. vanilla put  3. asian call  4. asian put  5. european lookbac"
				L"k call  6. european lookback put";
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"新細明體", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label13->Location = System::Drawing::Point(5, 101);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(1125, 23);
			this->label13->TabIndex = 5;
			this->label13->Text = L"7. american lookback call  8. american lookback put  9. bermudan call  10. bermud"
				L"an put  11. american call  12. american put";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"新細明體", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label14->Location = System::Drawing::Point(19, 65);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(193, 50);
			this->label14->TabIndex = 8;
			this->label14->Text = L"total cost";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"新細明體", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button4->Location = System::Drawing::Point(158, 852);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(291, 80);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Done";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"新細明體", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label16->Location = System::Drawing::Point(619, 231);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(190, 40);
			this->label16->TabIndex = 10;
			this->label16->Text = L"Product list";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"新細明體", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label17->Location = System::Drawing::Point(619, 293);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(420, 33);
			this->label17->TabIndex = 11;
			this->label17->Text = L"Type  |  Quantity  |  Unit_Price ";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox2->Location = System::Drawing::Point(616, 58);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1243, 144);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Description";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"新細明體", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox3->Location = System::Drawing::Point(30, 949);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(562, 144);
			this->groupBox3->TabIndex = 19;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Total Cost";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2074, 1415);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Option calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	double cost = 0;  // compute cost
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	
//calculate bottom
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		double this_time = 0;
		//參數讀取
		String^ type = this->textBox1->Text;
		String^ price = this->textBox3->Text;
		String^ discount_rate = this->textBox2->Text;
		String^ dividend_rate = this->textBox4->Text;
		String^ vol = this->textBox5->Text;
		String^ ttm = this->textBox6->Text;
		String^ k = this->textBox7->Text;
		String^ amt = this->textBox8->Text;
		String^ step = this->textBox9->Text;

		__int32 type_int;
		double S0, K, r, q, sigma, T;
		__int32 num, n;
		
		
		type_int = System::Int32::Parse(type);
		S0 = System::Convert::ToDouble(price);
		r = System::Convert::ToDouble(discount_rate);
		q = System::Convert::ToDouble(dividend_rate);
		sigma = System::Convert::ToDouble(vol);
		T = System::Convert::ToDouble(ttm);
		K = System::Convert::ToDouble(k);
		num = System::Int32::Parse(amt);
		if (step != "")
		{
			n = System::Int32::Parse(step);
		}
		//價格計算
		if (type_int == 1) {
			BS_Option bs(S0, r, q, K, T, sigma);
			cost = cost + num * bs.call_price();
			unit_price.push_back(bs.call_price());
			type_str.push_back("vanilla call");
			}
		else if (type_int == 2) {
			BS_Option bs(S0, r, q, K, T, sigma);
			cost = cost + num * bs.put_price();
			unit_price.push_back(bs.put_price());
			type_str.push_back("vanilla put");
		}
		else if (type_int == 3) {
			Asian_option asian(S0, r, q, K, T, sigma);
			cost = cost + num * asian.call_price();
			unit_price.push_back(asian.call_price());
			type_str.push_back("asian call");
		}
		else if (type_int == 4) {
			Asian_option asian(S0, r, q, K, T, sigma);
			cost = cost + num * asian.put_price();
			unit_price.push_back(asian.put_price());
			type_str.push_back("asian put");
		}
		else if (type_int == 5) {
			Lookback_Option lookback(S0, r, q, T, sigma, n);
			cost = cost + num * lookback.eur_call_price();
			unit_price.push_back(lookback.eur_call_price());
			type_str.push_back("european lookback call");
		}
		else if (type_int == 6) {
			Lookback_Option lookback(S0, r, q, T, sigma, n);
			cost = cost + num * lookback.eur_put_price();
			unit_price.push_back(lookback.eur_put_price());
			type_str.push_back("european lookback put");
		}
		else if (type_int == 7) {
			Lookback_Option lookback(S0, r, q, T, sigma, n);
			cost = cost + num * lookback.am_call_price();
			unit_price.push_back(lookback.am_call_price());
			type_str.push_back("american lookback call");
		}
		else if (type_int == 8) {
			Lookback_Option lookback(S0, r, q, T, sigma, n);
			cost = cost + num * lookback.am_put_price();
			unit_price.push_back(lookback.am_put_price());
			type_str.push_back("american lookback put");
		}
		else if (type_int == 9) {
			Bernudan_Call bcall(S0, r, q, K, T, sigma);
			vector<double> potential_exercise_times;
			double exercise_time = 0.25;
			while (exercise_time < T) {
				potential_exercise_times.push_back(exercise_time);
				exercise_time += 0.25;
			}
			cost = cost + num * bcall.price(potential_exercise_times);
			this_time = bcall.price(potential_exercise_times);
			unit_price.push_back(bcall.price(potential_exercise_times));
			type_str.push_back("bermudan call");
		}
		else if (type_int == 10) {
			Bernudan_Put bput(S0, r, q, K, T, sigma);
			vector<double> potential_exercise_times;
			double exercise_time = 0.25;
			while (exercise_time < T) {
				potential_exercise_times.push_back(exercise_time);
				exercise_time += 0.25;
			}
			cost = cost + num * bput.price(potential_exercise_times);
			this_time = bput.price(potential_exercise_times);
			unit_price.push_back(bput.price(potential_exercise_times));
			type_str.push_back("bermudan put");
		}
		else if (type_int == 11) {
			American_option acall(S0, r, q, K, T, sigma, n);
			cost = cost + num * acall.call_price();
			unit_price.push_back(acall.call_price());
			type_str.push_back("american call");
			
		}
		else if (type_int == 12) {
			American_option aput(S0, r, q, K, T, sigma, n);
			cost = cost + num * aput.put_price();
			unit_price.push_back(aput.put_price());
			type_str.push_back("american put");
		}
		type_list.push_back(type_int);
		quantity.push_back(num);

		String^ buy_list;
		for (int i = 0; i < type_str.size(); i++) {
			if (type_str[i] !="")
			{
				string str = type_str[i];
				String^ str2 = gcnew String(str.c_str());
				buy_list = buy_list + str2 + "  " + "|" + "  " + quantity[i] + "  " + "|" + "  " + unit_price[i] + "\n";

			}
			
			//buy_list = buy_list + type_list[i] +"  "+ "|" +"  "+ quantity[i] +"  "+ "|" +"  "+ unit_price[i] + "\n";
			
			this->label8->Text = buy_list;
		}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = "";
	this->textBox8->Text = "";
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->textBox3->Text = "";
	this->textBox4->Text = "";
	this->textBox5->Text = "";
	this->textBox6->Text = "";
	this->textBox7->Text = "";
	this->textBox8->Text = "";
	this->textBox9->Text = "";
	}
//text box 原始碼 暫無作用
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	

	
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->textBox3->Text = "";
	this->textBox4->Text = "";
	this->textBox5->Text = "";
	this->textBox6->Text = "";
	this->textBox7->Text = "";
	this->textBox8->Text = "";
	this->textBox9->Text = "";
	this->label14->Text = "";
	this->label8->Text = "";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ total ;
	total = cost.ToString();
	this->label14->Text = total;
}
};
}


#endif