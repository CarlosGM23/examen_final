#pragma once

namespace examen_final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de modificador
	/// </summary>
	public ref class modificador : public System::Windows::Forms::Form
	{
	public:
		modificador(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~modificador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_nombre;
	private: System::Windows::Forms::TextBox^ txt_edad;
	private: System::Windows::Forms::TextBox^ txt_genero;
	private: System::Windows::Forms::TextBox^ txt_calificaciones;
	protected:

	protected:



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->txt_edad = (gcnew System::Windows::Forms::TextBox());
			this->txt_genero = (gcnew System::Windows::Forms::TextBox());
			this->txt_calificaciones = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txt_nombre
			// 
			this->txt_calificaciones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nombre->Location = System::Drawing::Point(215, 12);
			this->txt_nombre->Margin = System::Windows::Forms::Padding(2);
			this->txt_nombre->Multiline = true;
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(204, 53);
			this->txt_nombre->TabIndex = 0;
			// 
			// txt_edad
			// 
			this->txt_calificaciones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_edad->Location = System::Drawing::Point(215, 89);
			this->txt_nombre->Margin = System::Windows::Forms::Padding(2);
			this->txt_edad->Multiline = true;
			this->txt_edad->Name = L"txt_edad";
			this->txt_edad->Size = System::Drawing::Size(204, 53);
			this->txt_edad->TabIndex = 1;
			// 
			// txt_genero
			// 
			this->txt_calificaciones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_genero->Location = System::Drawing::Point(215, 168);
			this->txt_nombre->Margin = System::Windows::Forms::Padding(2);
			this->txt_genero->Multiline = true;
			this->txt_genero->Name = L"txt_genero";
			this->txt_genero->Size = System::Drawing::Size(204, 53);
			this->txt_genero->TabIndex = 2;
			// 
			// txt_calificaciones
			// 
			this->txt_calificaciones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_calificaciones->Location = System::Drawing::Point(215, 251);
			this->txt_nombre->Margin = System::Windows::Forms::Padding(2);
			this->txt_calificaciones->Multiline = true;
			this->txt_calificaciones->Name = L"txt_calificaciones";
			this->txt_calificaciones->Size = System::Drawing::Size(204, 53);
			this->txt_calificaciones->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(139, 310);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 49);
			this->button1->TabIndex = 4;
			this->button1->Text = L"GUARDAR";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &modificador::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(324, 310);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(179, 49);
			this->button2->TabIndex = 5;
			this->button2->Text = L"CANCELAR";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &modificador::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(44, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 25);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(44, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Edad";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(44, 196);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 25);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Genero";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(44, 279);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Calificaciones";
			// 
			// modificador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(589, 371);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_calificaciones);
			this->Controls->Add(this->txt_genero);
			this->Controls->Add(this->txt_edad);
			this->Controls->Add(this->txt_nombre);
			this->Name = L"modificador";
			this->Text = L"modificador";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Usuario Modificado Correctamente!");
		this->Close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
