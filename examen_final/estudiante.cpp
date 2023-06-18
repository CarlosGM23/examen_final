#include "pch.h"
#include "estudiante.h"
#include "ingresar.h"
#include "modificador.h"

estudiante::estudiante() //se iniciliza nuestro metodo constructor
{
	this->connectionString = "datasource=localhost; username=root; password=Proyecto; database=estudiantes;"; //iniciamos nuestra cadena de conexion a la base de datos
	this->Driver = gcnew MySqlConnection(this->connectionString);
}


void estudiante::AbrirConexion()
{
	this->Driver->Open();
}
void estudiante::CerrarConexion()
{
	this->Driver->Close();
}

DataTable^ estudiante::getData()
{
	String^ sql = "select * from estudiante";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->Driver);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void estudiante::Insertar(String^ n, String^ e, String^ g, String^ c) {
	String^ sql = "Insert into estudiante (nombre, edad, genero,calificaciones) values ('" + n + "'," + e + ",'" + g + "','" + c + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->Driver);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ a)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(a->Message);

	}
}

void estudiante::Modificar(String^ n, String^ e, String^ g, String^ c, String^ ref)
{
	String^ sql = "update estudiante set nombre = '" + n + "', edad = '" + e + "', genero = '" + g + "', calificaciones = '" + c + "'where idestudiante = '" + ref + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->Driver);
	try																//este es mi metodo modificar 
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void estudiante::Eliminar(String^ idestudiante) {
	String^ sql = "delete from estudiante where idestudiante = " + idestudiante;
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->Driver);
	try //este es mi metodo eliminar 
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Eliminado correctamente!");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}
