#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ N_tb;
	private: System::Windows::Forms::TextBox^ M_tb;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ Matrix;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Max_tb;

	private: System::Windows::Forms::Button^ Max_btn;
	private: System::Windows::Forms::Button^ button3;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->N_tb = (gcnew System::Windows::Forms::TextBox());
			this->M_tb = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Matrix = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Max_tb = (gcnew System::Windows::Forms::TextBox());
			this->Max_btn = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Red;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(106, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"N:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Goldenrod;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(106, 139);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"M:";
			// 
			// N_tb
			// 
			this->N_tb->Location = System::Drawing::Point(183, 96);
			this->N_tb->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->N_tb->Name = L"N_tb";
			this->N_tb->Size = System::Drawing::Size(100, 26);
			this->N_tb->TabIndex = 2;
			this->N_tb->TextChanged += gcnew System::EventHandler(this, &Form1::N_tb_TextChanged);
			// 
			// M_tb
			// 
			this->M_tb->Location = System::Drawing::Point(183, 146);
			this->M_tb->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->M_tb->Name = L"M_tb";
			this->M_tb->Size = System::Drawing::Size(100, 26);
			this->M_tb->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(313, 95);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 78);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Create";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Matrix
			// 
			this->Matrix->AllowUserToAddRows = false;
			this->Matrix->AllowUserToDeleteRows = false;
			this->Matrix->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Matrix->Location = System::Drawing::Point(112, 284);
			this->Matrix->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Matrix->Name = L"Matrix";
			this->Matrix->RowHeadersWidth = 62;
			this->Matrix->RowTemplate->Height = 28;
			this->Matrix->Size = System::Drawing::Size(791, 283);
			this->Matrix->TabIndex = 5;
			this->Matrix->Visible = false;
			this->Matrix->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::Matrix_CellEndEdit);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Lime;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(709, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 32);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Max:";
			// 
			// Max_tb
			// 
			this->Max_tb->Location = System::Drawing::Point(825, 121);
			this->Max_tb->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Max_tb->Name = L"Max_tb";
			this->Max_tb->Size = System::Drawing::Size(69, 26);
			this->Max_tb->TabIndex = 7;
			// 
			// Max_btn
			// 
			this->Max_btn->Location = System::Drawing::Point(522, 98);
			this->Max_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Max_btn->Name = L"Max_btn";
			this->Max_btn->Size = System::Drawing::Size(140, 75);
			this->Max_btn->TabIndex = 8;
			this->Max_btn->Text = L"FInd Max Sum";
			this->Max_btn->UseVisualStyleBackColor = true;
			this->Max_btn->Click += gcnew System::EventHandler(this, &Form1::Max_btn_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1055, 397);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 77);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Replace";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1271, 799);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->Max_btn);
			this->Controls->Add(this->Max_tb);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Matrix);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->M_tb);
			this->Controls->Add(this->N_tb);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		int N, M;


		N = Convert::ToInt32(N_tb->Text);
		M = Convert::ToInt32(M_tb->Text);

		if (N != 0 && M != 0) {
			Matrix->Visible = true;
		}

		Matrix->RowCount = N;
		Matrix->ColumnCount = M;

	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		int max = -10000000;


		for (int i = 0; i < Matrix->ColumnCount; i++) {

			int FirstInCol = Convert::ToInt32(Matrix->Rows[0]->Cells[i]->Value);

			for (int j = 0; j < Matrix->RowCount; j++) {

				if (max < Convert::ToInt32(Matrix->Rows[j]->Cells[i]->Value)) {
					max = Convert::ToInt32(Matrix->Rows[j]->Cells[i]->Value);

					Matrix->Rows[j]->Cells[i]->Value = FirstInCol;
					Matrix->Rows[j]->Cells[i]->Style->BackColor = BackColor.LightYellow;
					Matrix->Rows[0]->Cells[i]->Value = max;
					Matrix->Rows[0]->Cells[i]->Style->BackColor = BackColor.LightGreen;
					
				}
			}
			max = -10000000;
		}

	}

	private: System::Void Max_btn_Click(System::Object^ sender, System::EventArgs^ e) {

		int summ = 0;

		


		for (int i = 0; i < Matrix->ColumnCount; i++) {

			int max = Convert::ToInt32(Matrix->Rows[0]->Cells[i]->Value);
			Matrix->Rows[0]->Cells[i]->Style->BackColor = BackColor.Green;
			for (int j = 1; j < Matrix->RowCount; j++) {

				if (max < Convert::ToInt32(Matrix->Rows[j]->Cells[i]->Value)) {
					max = Convert::ToInt32(Matrix->Rows[j]->Cells[i]->Value);
					Matrix->Rows[j]->Cells[i]->Style->BackColor = BackColor.Green;
					Matrix->Rows[j-1]->Cells[i]->Style->BackColor = BackColor.LightYellow;
					Matrix->Rows[0]->Cells[i]->Style->BackColor = BackColor.LightYellow;
				}

			}
			summ += max;
			
		}
		Max_tb->Text = Convert::ToString(summ);


	}
	private: System::Void Matrix_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		int i = e->RowIndex;
		int j = e->ColumnIndex;

		if (Matrix->Rows[i]->Cells[j]->Value != nullptr) {
			Matrix->Rows[i]->Cells[j]->Style->BackColor = BackColor.LightYellow;
		}
		else
		{
			Matrix->Rows[i]->Cells[j]->Style->BackColor = BackColor.Red;
		}
	}
	private: System::Void N_tb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	};
	};
}