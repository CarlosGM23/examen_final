#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;
ref class estudiante
{
private:
	String^ connectionString;  //objetos 
	MySqlConnection^ Driver;
public:
	estudiante();
	DataTable^ getData();	//aqui debemos de modificar las indicaciones especificas del ing
	void AbrirConexion();	//metodos
	void CerrarConexion();
	void Insertar(String^, String^, String^, String^);
	void Modificar(String^, String^, String^, String^, String^);
	void Eliminar(String^);
};

