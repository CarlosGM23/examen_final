#pragma once
#include "ingresar.h"
#include "estudiante.h"
#include "modificador.h"

namespace examen_final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ingresar
	/// </summary>
	public ref class ingresar : public System::Windows::Forms::Form
	{
	public:
		ingresar(void)
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
		~ingresar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_nombre;
	protected:
	private: System::Windows::Forms::TextBox^ txt_edad;
	private: System::Windows::Forms::TextBox^ txt_genero;
	private: System::Windows::Forms::TextBox^ txt_calificaciones;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private:estudiante^ data;								//creamos nuestro objeto privado
	private: System::Windows::Forms::Button^ btn_exit;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->txt_edad = (gcnew System::Windows::Forms::TextBox());
			this->txt_genero = (gcnew System::Windows::Forms::TextBox());
			this->txt_calificaciones = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_nombre
			// 
			
			this->txt_nombre->Location = System::Drawing::Point(175, 21);
			this->txt_nombre->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_nombre->Multiline = true;
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(241, 38);
			this->txt_nombre->TabIndex = 0;
			this->txt_nombre->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_edad
			// 
			this->txt_edad->Location = System::Drawing::Point(175, 89);
			this->txt_edad->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_edad->Multiline = true;
			this->txt_edad->Name = L"txt_edad";
			this->txt_edad->Size = System::Drawing::Size(241, 38);
			this->txt_edad->TabIndex = 1;
			this->txt_edad->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_genero
			// 
			this->txt_genero->Location = System::Drawing::Point(175, 158);
			this->txt_edad->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_genero->Multiline = true;
			this->txt_genero->Name = L"txt_genero";
			this->txt_genero->Size = System::Drawing::Size(241, 38);
			this->txt_genero->TabIndex = 2;
			this->txt_genero->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_calificaciones
			// 
			this->txt_calificaciones->Location = System::Drawing::Point(175, 229);
			this->txt_edad->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_calificaciones->Multiline = true;
			this->txt_calificaciones->Name = L"txt_calificaciones";
			this->txt_calificaciones->Size = System::Drawing::Size(241, 38);
			this->txt_calificaciones->TabIndex = 3;
			this->txt_calificaciones->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(33, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 22);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(33, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 22);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Edad";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(33, 174);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 22);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Genero";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(33, 245);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 22);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Calificaciones";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(12, 302);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(214, 45);
			this->button1->TabIndex = 8;
			this->button1->Text = L"GUARDAR";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ingresar::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(232, 302);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(214, 45);
			this->button2->TabIndex = 9;
			this->button2->Text = L"ELIMINAR";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ingresar::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Blue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(452, 302);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(214, 45);
			this->button3->TabIndex = 10;
			this->button3->Text = L"SALIR";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &ingresar::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(672, 311);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(172, 22);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Seleccionando A:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Yellow;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(422, 21);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(504, 246);
			this->dataGridView1->TabIndex = 12;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ingresar::data_grid_CellClick);
			this->dataGridView1->DoubleClick += gcnew System::EventHandler(this, &ingresar::data_grid_DoubleClick);
			// 
			// ingresar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Yellow;
			this->ClientSize = System::Drawing::Size(943, 371);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_calificaciones);
			this->Controls->Add(this->txt_genero);
			this->Controls->Add(this->txt_edad);
			this->Controls->Add(this->txt_nombre);
			this->Name = L"ingresar";
			this->Text = L"ingresar";
			this->Load += gcnew System::EventHandler(this, &ingresar::ingresar_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ingresar_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Actualizar();
	}
		 public: void Actualizar()
		   {
			   this->data->AbrirConexion();
			   this->dataGridView1->DataSource = this->data->getData();
			   this->data->CerrarConexion();
		   }

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->data->AbrirConexion();
	this->data->Insertar(this->txt_nombre->Text, this->txt_edad->Text, this->txt_genero->Text, this->txt_calificaciones->Text);
	this->data->CerrarConexion();
	this->Actualizar();
}

	   private: System::Void data_grid_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		   String^ idestudiante = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[0]->Value);
		   String^ nombre = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[1]->Value);
		   String^ edad = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[2]->Value);
		   String^ genero = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[3]->Value);
		   String^ calificaciones = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[4]->Value);
		   examen_final::Modificar^ form = gcnew examen_final::Modificar();
		   form->txt_nombre->Text = nombre;
		   form->txt_edad->Text = edad;
		   form->txt_genero->Text = genero;
		   form->txt_calificaciones->Text = calificaciones;
		   this->Visible = false;
		   form->ShowDialog();
		   this->Visible = true;
		   estudiante^ data = gcnew estudiante();
		   data->AbrirConexion();
		   data->Modificar(form->txt_nombre->Text, form->txt_edad->Text, form->txt_genero->Text, form->txt_calificaciones->Text, idestudiante);
		   data->CerrarConexion();

		   this->Actualizar();
	   }

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ idestudiante = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[0]->Value);
	estudiante^ data = gcnew estudiante();
	data->AbrirConexion();
	data->Eliminar(idestudiante);
	data->CerrarConexion();
	this->Actualizar(); //la consulta realiza la actualizacion
}
private: System::Void data_grid_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ idestudiante = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[1]->Value);
	label5->Text = "Eliminando a: " + idestudiante;
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
};
}
