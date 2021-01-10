#pragma once
#include"MyForm1.h"
#include"MyForm2.h"
#include"MyForm3.h"
#include"MyForm4.h"
#include"MyForm5.h"
#include"MyForm6.h"
namespace gui1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ add_book;
	private: System::Windows::Forms::Button^ serach_on_bok;
	private: System::Windows::Forms::Button^ delete_book;
	private: System::Windows::Forms::Button^ borrow_book;
	private: System::Windows::Forms::Button^ view_books;
	private: System::Windows::Forms::Button^ return_book;
	private: System::Windows::Forms::Button^ exsit;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->add_book = (gcnew System::Windows::Forms::Button());
			this->serach_on_bok = (gcnew System::Windows::Forms::Button());
			this->delete_book = (gcnew System::Windows::Forms::Button());
			this->borrow_book = (gcnew System::Windows::Forms::Button());
			this->view_books = (gcnew System::Windows::Forms::Button());
			this->return_book = (gcnew System::Windows::Forms::Button());
			this->exsit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FloralWhite;
			this->label1->Location = System::Drawing::Point(11, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(781, 71);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Library System";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// add_book
			// 
			this->add_book->BackColor = System::Drawing::Color::White;
			this->add_book->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->add_book->FlatAppearance->BorderSize = 0;
			this->add_book->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->add_book->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->add_book->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->add_book->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_book->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_book->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->add_book->Location = System::Drawing::Point(18, 151);
			this->add_book->Margin = System::Windows::Forms::Padding(2);
			this->add_book->Name = L"add_book";
			this->add_book->Size = System::Drawing::Size(264, 92);
			this->add_book->TabIndex = 1;
			this->add_book->Text = L"Add Book";
			this->add_book->UseVisualStyleBackColor = false;
			this->add_book->Click += gcnew System::EventHandler(this, &MyForm::Add_Click);
			// 
			// serach_on_bok
			// 
			this->serach_on_bok->BackColor = System::Drawing::Color::White;
			this->serach_on_bok->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->serach_on_bok->FlatAppearance->BorderSize = 0;
			this->serach_on_bok->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->serach_on_bok->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->serach_on_bok->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->serach_on_bok->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->serach_on_bok->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->serach_on_bok->ForeColor = System::Drawing::Color::Black;
			this->serach_on_bok->Location = System::Drawing::Point(429, 151);
			this->serach_on_bok->Margin = System::Windows::Forms::Padding(2);
			this->serach_on_bok->Name = L"serach_on_bok";
			this->serach_on_bok->Size = System::Drawing::Size(264, 92);
			this->serach_on_bok->TabIndex = 2;
			this->serach_on_bok->Text = L"Search on Book";
			this->serach_on_bok->UseVisualStyleBackColor = false;
			this->serach_on_bok->Click += gcnew System::EventHandler(this, &MyForm::search_Click);
			// 
			// delete_book
			// 
			this->delete_book->BackColor = System::Drawing::Color::White;
			this->delete_book->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->delete_book->FlatAppearance->BorderSize = 0;
			this->delete_book->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->delete_book->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->delete_book->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delete_book->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->delete_book->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delete_book->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->delete_book->Location = System::Drawing::Point(18, 294);
			this->delete_book->Margin = System::Windows::Forms::Padding(2);
			this->delete_book->Name = L"delete_book";
			this->delete_book->Size = System::Drawing::Size(264, 92);
			this->delete_book->TabIndex = 3;
			this->delete_book->Text = L"Delete Book";
			this->delete_book->UseVisualStyleBackColor = false;
			this->delete_book->Click += gcnew System::EventHandler(this, &MyForm::delete_Click);
			// 
			// borrow_book
			// 
			this->borrow_book->BackColor = System::Drawing::Color::White;
			this->borrow_book->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->borrow_book->FlatAppearance->BorderSize = 0;
			this->borrow_book->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->borrow_book->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->borrow_book->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->borrow_book->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->borrow_book->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->borrow_book->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->borrow_book->Location = System::Drawing::Point(429, 434);
			this->borrow_book->Margin = System::Windows::Forms::Padding(2);
			this->borrow_book->Name = L"borrow_book";
			this->borrow_book->Size = System::Drawing::Size(264, 92);
			this->borrow_book->TabIndex = 4;
			this->borrow_book->Text = L"Borrow a book";
			this->borrow_book->UseVisualStyleBackColor = false;
			this->borrow_book->Click += gcnew System::EventHandler(this, &MyForm::borrow_Click);
			// 
			// view_books
			// 
			this->view_books->BackColor = System::Drawing::Color::White;
			this->view_books->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->view_books->FlatAppearance->BorderSize = 0;
			this->view_books->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->view_books->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->view_books->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->view_books->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->view_books->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->view_books->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->view_books->Location = System::Drawing::Point(429, 294);
			this->view_books->Margin = System::Windows::Forms::Padding(2);
			this->view_books->Name = L"view_books";
			this->view_books->Size = System::Drawing::Size(264, 92);
			this->view_books->TabIndex = 5;
			this->view_books->Text = L"View books";
			this->view_books->UseVisualStyleBackColor = false;
			this->view_books->Click += gcnew System::EventHandler(this, &MyForm::view_Click);
			// 
			// return_book
			// 
			this->return_book->BackColor = System::Drawing::Color::White;
			this->return_book->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->return_book->FlatAppearance->BorderSize = 0;
			this->return_book->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->return_book->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->return_book->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->return_book->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->return_book->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->return_book->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->return_book->Location = System::Drawing::Point(18, 434);
			this->return_book->Margin = System::Windows::Forms::Padding(2);
			this->return_book->Name = L"return_book";
			this->return_book->Size = System::Drawing::Size(264, 92);
			this->return_book->TabIndex = 6;
			this->return_book->Text = L"Return a book";
			this->return_book->UseVisualStyleBackColor = false;
			this->return_book->Click += gcnew System::EventHandler(this, &MyForm::return_Click);
			// 
			// exsit
			// 
			this->exsit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exsit->Location = System::Drawing::Point(613, 547);
			this->exsit->Margin = System::Windows::Forms::Padding(2);
			this->exsit->Name = L"exsit";
			this->exsit->Size = System::Drawing::Size(80, 28);
			this->exsit->TabIndex = 7;
			this->exsit->Text = L"Exsit";
			this->exsit->UseVisualStyleBackColor = true;
			this->exsit->Click += gcnew System::EventHandler(this, &MyForm::exsit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(719, 586);
			this->Controls->Add(this->exsit);
			this->Controls->Add(this->return_book);
			this->Controls->Add(this->view_books);
			this->Controls->Add(this->borrow_book);
			this->Controls->Add(this->delete_book);
			this->Controls->Add(this->serach_on_bok);
			this->Controls->Add(this->add_book);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Library System";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion








private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	StreamWriter file("books.txt",true);
	file.Close();
}
private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ add_form = gcnew MyForm1();
	add_form->ShowDialog();
}
private: System::Void search_Click(System::Object^ sender, System::EventArgs^ e) 
{
	MyForm3^ search_form = gcnew MyForm3();
	search_form->ShowDialog();
}
private: System::Void delete_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm4^ delete_form = gcnew MyForm4();
	delete_form->ShowDialog();
}
private: System::Void borrow_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm5^ borrow_form = gcnew MyForm5();
	borrow_form->ShowDialog();
}
private: System::Void return_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm6^ return_form = gcnew MyForm6();
	return_form->ShowDialog();
}
private: System::Void view_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm2^ view_form = gcnew MyForm2();
	view_form->ShowDialog();
}
private: System::Void exsit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
