#pragma once
#include<algorithm>
#include<Windows.h>


namespace MayTinh {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
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
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  txtDisplay;
	protected:

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Calculator::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Wingdings", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button1->Location = System::Drawing::Point(13, 92);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 66);
			this->button1->TabIndex = 1;
			this->button1->Text = L" Õ";
			this->button1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Calculator::button1_Click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(13, 11);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(327, 60);
			this->txtDisplay->TabIndex = 2;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(99, 92);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 66);
			this->button2->TabIndex = 1;
			this->button2->Text = L"C";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Calculator::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(185, 92);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(66, 66);
			this->button3->TabIndex = 1;
			this->button3->Text = L"CE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Calculator::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(271, 92);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(66, 66);
			this->button4->TabIndex = 1;
			this->button4->Text = L"±";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Calculator::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(13, 236);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(66, 66);
			this->button5->TabIndex = 1;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Calculator::EnterNumbers);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(99, 236);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(66, 66);
			this->button6->TabIndex = 1;
			this->button6->Text = L"8";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Calculator::EnterNumbers);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(185, 236);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(66, 66);
			this->button7->TabIndex = 1;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Calculator::EnterNumbers);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(271, 236);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(66, 66);
			this->button8->TabIndex = 1;
			this->button8->Text = L"+";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(13, 308);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(66, 66);
			this->button9->TabIndex = 1;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Calculator::EnterNumbers);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(99, 308);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(66, 66);
			this->button10->TabIndex = 1;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Calculator::EnterNumbers);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(185, 308);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(66, 66);
			this->button11->TabIndex = 1;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Calculator::EnterNumbers);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(271, 308);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(66, 66);
			this->button12->TabIndex = 1;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(13, 380);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(66, 66);
			this->button13->TabIndex = 1;
			this->button13->Text = L"1";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Calculator::EnterNumbers);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(99, 380);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(66, 66);
			this->button14->TabIndex = 1;
			this->button14->Text = L"2";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Calculator::EnterNumbers);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(185, 380);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(66, 66);
			this->button15->TabIndex = 1;
			this->button15->Text = L"3";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Calculator::EnterNumbers);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(271, 380);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(66, 66);
			this->button16->TabIndex = 1;
			this->button16->Text = L"*";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(13, 462);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(66, 66);
			this->button17->TabIndex = 1;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Calculator::EnterNumbers);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(99, 462);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(66, 66);
			this->button18->TabIndex = 1;
			this->button18->Text = L".";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Calculator::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(185, 462);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(66, 66);
			this->button19->TabIndex = 1;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Calculator::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(271, 462);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(66, 66);
			this->button20->TabIndex = 1;
			this->button20->Text = L"/";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(13, 164);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(66, 66);
			this->button21->TabIndex = 1;
			this->button21->Text = L"Sin";
			this->button21->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Calculator::HamLuongGiac);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(99, 164);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(66, 66);
			this->button22->TabIndex = 1;
			this->button22->Text = L"Cos";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Calculator::HamLuongGiac);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(185, 164);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(66, 66);
			this->button23->TabIndex = 1;
			this->button23->Text = L"Tan";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Calculator::HamLuongGiac);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(271, 164);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(66, 66);
			this->button24->TabIndex = 1;
			this->button24->Text = L"Log";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Calculator::HamLuongGiac);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(356, 563);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button1);
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Calculator::Calculator_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;
	private: System::Void EnterNumbers(System::Object^  sender, System::EventArgs^  e) {
		Button^ Numbers = safe_cast<Button^>(sender);

		if (txtDisplay->Text == "0")
		{
			txtDisplay->Text = Numbers->Text;
		}
		else
		{
			txtDisplay->Text = txtDisplay->Text + Numbers->Text;
		}
	}

	private: System::Void EnterOperator(System::Object^  sender, System::EventArgs^  e) {

		Button^ NumbersOp = safe_cast<Button^>(sender);
		if (txtDisplay->Text->Contains("+"))
		{
			secondDigit = Double::Parse(txtDisplay->Text->Remove(0, Convert::ToString(firstDigit)->Length + 1));
			firstDigit = firstDigit + secondDigit;
			txtDisplay->Text = System::Convert::ToString(firstDigit);
			txtDisplay->Text = txtDisplay->Text + NumbersOp->Text;
			operators = NumbersOp->Text;
		}
		else if (txtDisplay->Text->Contains("-"))
		{
			secondDigit = Double::Parse(txtDisplay->Text->Remove(0, Convert::ToString(firstDigit)->Length + 1));
			firstDigit = firstDigit - secondDigit;
			txtDisplay->Text = System::Convert::ToString(firstDigit);
			txtDisplay->Text = txtDisplay->Text + NumbersOp->Text;
			operators = NumbersOp->Text;
		}
		else if (txtDisplay->Text->Contains("*"))
		{
			secondDigit = Double::Parse(txtDisplay->Text->Remove(0, Convert::ToString(firstDigit)->Length + 1));
			firstDigit = firstDigit * secondDigit;
			txtDisplay->Text = System::Convert::ToString(firstDigit);
			txtDisplay->Text = txtDisplay->Text + NumbersOp->Text;
			operators = NumbersOp->Text;
		}
		else if (txtDisplay->Text->Contains("/"))
		{
			secondDigit = Double::Parse(txtDisplay->Text->Remove(0, Convert::ToString(firstDigit)->Length + 1));
			if (secondDigit == 0)
			{
				txtDisplay->Text = "ERROR!!\r\nPRESS C";
			}
			else
			{
				firstDigit = firstDigit + secondDigit;
				txtDisplay->Text = System::Convert::ToString(firstDigit);
				txtDisplay->Text = txtDisplay->Text + NumbersOp->Text;
				operators = NumbersOp->Text;
			}
		}
		else if (txtDisplay->Text->Contains("Sin(") || txtDisplay->Text->Contains("Cos(")||txtDisplay->Text->Contains("Tan(") || txtDisplay->Text->Contains("Log("))
		{
		}

		else
		{
				firstDigit = Double::Parse(txtDisplay->Text);
				txtDisplay->Text = txtDisplay->Text + NumbersOp->Text;
				operators = NumbersOp->Text;
		}
		

		}
	
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {


	if (!txtDisplay->Text->Contains("."))
	{
		txtDisplay->Text = txtDisplay->Text + ".";
	}
}
 private: System::Void HamLuongGiac(System::Object^  sender, System::EventArgs^  e) {
	Button^ NumbersOp = safe_cast<Button^>(sender);
	txtDisplay->Text = NumbersOp->Text + "(";
	operators = NumbersOp->Text+"(";
}


private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {

	
	if (operators == "+")
	{
		secondDigit = Double::Parse(txtDisplay->Text->Remove(0,Convert::ToString(firstDigit)->Length+1));
		result = firstDigit + secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);

	}
	else if (operators == "-")
	{
		secondDigit = Double::Parse(txtDisplay->Text->Remove(0, Convert::ToString(firstDigit)->Length + 1));
		result = firstDigit - secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);

	}
	else if (operators == "*")
	{
		secondDigit = Double::Parse(txtDisplay->Text->Remove(0, Convert::ToString(firstDigit)->Length + 1));
		result = firstDigit * secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);

	}
	else if (operators == "/")
	{
		secondDigit = Double::Parse(txtDisplay->Text->Remove(0, Convert::ToString(firstDigit)->Length + 1));
		if (secondDigit == 0)
		{
			txtDisplay->Text = "ERROR!!\r\nPRESS C";
		}
		else
		{
			result = firstDigit / secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);
		}

	}
	else if (operators == "Sin(")
	{
		secondDigit = Double::Parse(txtDisplay->Text->Remove(0, 4));
		result = sin(secondDigit);
		txtDisplay->Text = System::Convert::ToString(result);

	}
	else if (operators == "Cos(")
	{
		secondDigit = Double::Parse(txtDisplay->Text->Remove(0, 4));
		result = cos(secondDigit);
		txtDisplay->Text = System::Convert::ToString(result);

	}
	else if (operators == "Tan(")
	{
		secondDigit = Double::Parse(txtDisplay->Text->Remove(0, 4));
		result = tan(secondDigit);
		txtDisplay->Text = System::Convert::ToString(result);

	}
	else if (operators == "Log(")
	{
		secondDigit = Double::Parse(txtDisplay->Text->Remove(0, 4));
		result = log(secondDigit);
		txtDisplay->Text = System::Convert::ToString(result);

	}
	else
	{
		if (!Double::Parse(txtDisplay->Text))
		{
			result = Double::Parse(txtDisplay->Text);
			txtDisplay->Text = System::Convert::ToString(result);

		}
	}

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	txtDisplay->Text = "0";
}
 private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	 txtDisplay->Text = "0";
 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txtDisplay->Text->Contains("-"))
	{
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
	else if (txtDisplay->Text == "0")
		txtDisplay->Text = "0";
	else
	{
		txtDisplay->Text = "-" + txtDisplay->Text;
	}
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txtDisplay->Text->Length == 1)
		txtDisplay->Text = "0";
	else
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
}
private: System::Void Calculator_Load(System::Object^  sender, System::EventArgs^  e) {
}
};

}
