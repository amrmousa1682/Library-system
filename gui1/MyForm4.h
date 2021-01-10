#pragma once

namespace gui1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ exsit;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->exsit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(269, 80);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 28);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(12, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 20);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Enter Book Name";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm4::label3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 25);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Delete  book";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm4::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(157, 49);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(192, 20);
			this->textBox1->TabIndex = 16;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm4::textBox1_TextChanged);
			// 
			// exsit
			// 
			this->exsit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exsit->Location = System::Drawing::Point(17, 80);
			this->exsit->Margin = System::Windows::Forms::Padding(2);
			this->exsit->Name = L"exsit";
			this->exsit->Size = System::Drawing::Size(80, 28);
			this->exsit->TabIndex = 20;
			this->exsit->Text = L"Return";
			this->exsit->UseVisualStyleBackColor = true;
			this->exsit->Click += gcnew System::EventHandler(this, &MyForm4::exsit_Click);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(359, 123);
			this->Controls->Add(this->exsit);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Delete";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int c1= 0,c2 = 0;
	private: System::Void exsit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ name= "name:" + textBox1->Text + " ,|";
	StreamReader temp("temp.txt", System::Text::Encoding::UTF8);
	StreamWriter file("books.txt",false);
	while(true)
	{
		String^ temp1 = temp.ReadLine();
		if (temp1 == nullptr || temp1 == "")
		{
			break;
		}
		for (size_t i = 0; name[i] != '|'; i++)
		{
			if (name[i] != temp1[i])
			{
				file.WriteLine(temp1);
				c2++;
				break;
			}
		}
	}
	file.Close();
	temp.Close();
	if (c1==c2)
	{
		MessageBox::Show("Not found");
	}
	else
	{
		MessageBox::Show("Dleted");
	}
	
}
private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) 
{
	StreamWriter temp("temp.txt");
	StreamReader file("books.txt", System::Text::Encoding::UTF8);
	while (true)
	{
		String^ l = file.ReadLine();
		if (l == ""||l==nullptr)
		{
			break;
		}
		temp.WriteLine(l);
		c1++;
	}
	file.Close();
	temp.Close();
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
