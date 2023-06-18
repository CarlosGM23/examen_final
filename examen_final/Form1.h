#pragma once
#include "ingresar.h"
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

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
	private: String^ connectionString = "datasource=localhost; username=root; password=Proyecto; database=estudiantes;";
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	private: System::Windows::Forms::TextBox^ txt_usuario;
	private: System::Windows::Forms::TextBox^ txt_contraseña;


	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ but_ingresar;

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
			this->txt_usuario = (gcnew System::Windows::Forms::TextBox());
			this->txt_contraseña = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->but_ingresar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt_usuario
			// 
			this->txt_usuario->Location = System::Drawing::Point(86, 39);
			this->txt_usuario->Multiline = true;
			this->txt_usuario->Name = L"txt_usuario";
			this->txt_usuario->Size = System::Drawing::Size(198, 37);
			this->txt_usuario->TabIndex = 0;
			// 
			// txt_contraseña
			// 
			this->txt_contraseña->Location = System::Drawing::Point(86, 126);
			this->txt_contraseña->Multiline = true;
			this->txt_contraseña->Name = L"txt_contraseña";
			this->txt_contraseña->Size = System::Drawing::Size(198, 37);
			this->txt_contraseña->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(86, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(82, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Contraseña";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(109, 260);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Recuperar Contraseña";
			// 
			// but_ingresar
			// 
			this->but_ingresar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->but_ingresar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_ingresar->Location = System::Drawing::Point(91, 211);
			this->but_ingresar->Name = L"but_ingresar";
			this->but_ingresar->Size = System::Drawing::Size(193, 46);
			this->but_ingresar->TabIndex = 5;
			this->but_ingresar->Text = L"INGRESAR";
			this->but_ingresar->UseVisualStyleBackColor = false;
			this->but_ingresar->Click += gcnew System::EventHandler(this, &Form1::but_ingresar_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(357, 299);
			this->Controls->Add(this->but_ingresar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_contraseña);
			this->Controls->Add(this->txt_usuario);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void but_ingresar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ sql = "select * from ingreso where usuario = '" + txt_usuario->Text + "' and contrasena = '" + txt_contraseña->Text + "'";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
		MySqlDataReader^ dataReader;
		try
		{
			this->conn->Open();
			dataReader = cursor->ExecuteReader();
			if (String::IsNullOrEmpty(txt_usuario->Text) || String::IsNullOrEmpty(txt_contraseña->Text))
			{
				MessageBox::Show("Por favor, rellene todos los campos");
				return;
			}

			if (dataReader->Read())
			{
				examen_final::ingresar^ segundoForm = gcnew examen_final::ingresar();
				this->Visible = false;
				segundoForm->ShowDialog();
				this->Close();
			}
			else
			{
				this->conn->Close();
				this->conn = gcnew MySqlConnection("datasource=localhost; username=root; password=Proyecto; database=registro;"); //nos conectamos nuevamente a la base de datos
				MessageBox::Show(L"Error");
				//this->Close(); podemos cerrar la conexion al primer error 
			}
		}
		catch (Exception^ x) {
			MessageBox::Show(x->Message);
		}
	}
};
}
