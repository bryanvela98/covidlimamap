#pragma once
#include "AgregarInfracion.h"
#include "Edition.h"
#include"Mapa.h"
namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Controller;
	using namespace Model;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Resumen de Policias
	/// </summary>
	public ref class Policias : public System::Windows::Forms::Form
	{
	public:
		Policias(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		this->ObjGestorCivil=gcnew GestorCivil();
		this->ObjGestorFalta=gcnew GestorFalta();
		this->ObjGestorInfraccion=gcnew GestorInfraccion();
		}
		Policias(GestorPolicia^ObjGestorPolicia, String^ N, String^ app, String^ apm, String^ dni,int pass)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->app = app;
			this->apm = apm;
			this->dni = dni;
			this->N = N;
			this->pass = pass;
			this->ObjGestorCivil = gcnew GestorCivil();
			this->ObjGestorFalta = gcnew GestorFalta();
			this->ObjGestorInfraccion = gcnew GestorInfraccion();
			this->ObjGestorPolicia = ObjGestorPolicia;
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Policias()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private:GestorCivil^ ObjGestorCivil;
	private:GestorFalta^ ObjGestorFalta;
	private:GestorInfraccion^ ObjGestorInfraccion;
	private:GestorPolicia^ ObjGestorPolicia;
	private: String^ N;
	private: String^ app;
	private: String^ apm;
	private: String^ dni;
	private: int pass;

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ Nombre;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Policias::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Nombre = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column5,
					this->Column1, this->Column2, this->Column3, this->Column8, this->Column6, this->Column7, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(9, 114);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(800, 292);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"DNI";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Apellido Paterno";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Apellido Materno";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Codigo Infraccion";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Distrito";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Fecha";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Falta";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(253, 423);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(69, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Policias::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(385, 423);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 50);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Policias::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(654, 31);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(73, 45);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Buscar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Policias::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(74, 20);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(206, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 22);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"DNI:";
			this->label1->Click += gcnew System::EventHandler(this, &Policias::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(44, 28);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Nombre Oficial";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 62);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Apellido Paterno Oficial";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(2, 101);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Apellido Materno Oficial";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(96, 135);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"DNI";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(147, 28);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(140, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(147, 59);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(140, 20);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(147, 101);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(140, 20);
			this->textBox4->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(147, 135);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(140, 20);
			this->textBox5->TabIndex = 13;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(817, 11);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(323, 210);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos Oficial";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(517, 423);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 50);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Editar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Policias::button4_Click);
			// 
			// Nombre
			// 
			this->Nombre->AutoSize = true;
			this->Nombre->Location = System::Drawing::Point(19, 67);
			this->Nombre->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Nombre->Name = L"Nombre";
			this->Nombre->Size = System::Drawing::Size(47, 13);
			this->Nombre->TabIndex = 16;
			this->Nombre->Text = L"Nombre:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(295, 64);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Apellido Materno:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(295, 20);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(87, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Apellido Paterno:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(74, 64);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(206, 20);
			this->textBox6->TabIndex = 19;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(403, 20);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(202, 20);
			this->textBox7->TabIndex = 20;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(403, 64);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(202, 20);
			this->textBox8->TabIndex = 21;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(916, 226);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 42);
			this->button5->TabIndex = 22;
			this->button5->Text = L"Ver Mapa Riesgo";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Policias::button5_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(872, 274);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(232, 198);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// Policias
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1148, 484);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Nombre);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Policias";
			this->Text = L"Policias";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Policias::Graba);
			this->Load += gcnew System::EventHandler(this, &Policias::Policias_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Policias_Load(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Text = N;
		textBox3->Text = app;
		textBox4->Text = apm;
		textBox5->Text = dni;
		this->ObjGestorCivil->deserializar();
		this->ObjGestorInfraccion->deserializar();
		for (int i = 1; i < ObjGestorCivil->obtenercantidaddeCiviles(); i++) {
			Civil^ Civilmostrado = ObjGestorCivil->obteneruncivil(i);
			array<String^>^ fila = gcnew array<String^>(8);
			fila[0] = Civilmostrado->DNI;
			fila[1] = Civilmostrado->Nombre;
			fila[2] = Civilmostrado->ApPaterno;
			fila[3] = Civilmostrado->ApMaterno;
			fila[4] = Convert::ToString(Civilmostrado->codigoinfraciion);
			fila[7] = Civilmostrado->objInfraccion->ObjFalta->Tipo;
			fila[5] = Civilmostrado->objInfraccion->Distrito;
			fila[6] = Civilmostrado->objInfraccion->Fecha;
			this->dataGridView1->Rows->Add(fila);
		}

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Civil^>^ ListaBuscada=gcnew List<Civil^>();
	String^Dni=textBox1->Text;
	String^ name = textBox6->Text;
	String^ appat = textBox7->Text;
	String^ apmat=  textBox8->Text;
	GestorCivil^ OBJgestorcivil = gcnew GestorCivil();
	GestorInfraccion^ OBJgestorInfraccion = gcnew GestorInfraccion();
	OBJgestorcivil->LeerCivilesdesdetxt();
	OBJgestorInfraccion->LeerInfracciondesdetxt();
	this->ObjGestorCivil->deserializar();
	this->ObjGestorInfraccion->deserializar();
	this->dataGridView1->Rows->Clear();
	if (Dni != "" && name != "" && appat != "" && apmat != "") {
		 ListaBuscada=OBJgestorcivil->Buscacivilxnombreyapelldiomaternoypaternoydni(Dni, name, appat, apmat);
	}
	
	if (Dni == "" && name != "" && appat != "" && apmat != "") {
		 ListaBuscada = OBJgestorcivil->Buscacivilxnombreyapelldiomaternoypaterno(name, appat, apmat);
	}
	
	if (Dni == "" && name != "" && appat == "" && apmat != "") {
		ListaBuscada = OBJgestorcivil->Buscacivilxnombreyapelldiomaterno(name, apmat);
	}

	if (Dni == "" && name != "" && appat != "" && apmat == "") {
		 ListaBuscada = OBJgestorcivil->Buscacivilxnombreyapelldiopaterno(name, appat);
	}
	
	if (Dni == "" && name != "" && appat == "" && apmat == "") {
		ListaBuscada = OBJgestorcivil->BuscacivilxNombre(name);
	}
	
	if (Dni == "" && name == "" && appat == "" && apmat != "") {
		ListaBuscada = OBJgestorcivil->BuscacivilxApellidomatero(apmat);
	}
	
	if (Dni == "" && name == "" && appat != "" && apmat == "") {
		 ListaBuscada = OBJgestorcivil->BuscacivilxApelidopaterno(appat);
	}

	if (Dni != "" && name == "" && appat == "" && apmat == "") {
		ListaBuscada = OBJgestorcivil->BuscacivilxDNI(Dni);
	}

	for (int i = 0; i < ListaBuscada->Count; i++) {
		Civil^ Civilmostrado = ListaBuscada[i];
		//int codigo = Civilmostrado->objInfraccion->Codigo;
		array<String^>^ fila = gcnew array<String^>(8);
		fila[0] = Civilmostrado->DNI;
		fila[1] = Civilmostrado->Nombre;
		fila[2] = Civilmostrado->ApPaterno;
		fila[3] = Civilmostrado->ApMaterno;
		fila[4] = Convert::ToString(Civilmostrado->codigoinfraciion);
		fila[7] = Civilmostrado->objInfraccion->ObjFalta->Tipo;
		fila[5] = Civilmostrado->objInfraccion->Distrito;
		fila[6] = Civilmostrado->objInfraccion->Fecha;
		this->dataGridView1->Rows->Add(fila);
	}
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	AgregarInfracion^ NuevaVentanaAgregar = gcnew AgregarInfracion(this->ObjGestorCivil, this->ObjGestorFalta, this->ObjGestorInfraccion);
	NuevaVentanaAgregar->ShowDialog();
	this->ObjGestorCivil->serializar();
	this->ObjGestorInfraccion->serializar();
	this->ObjGestorCivil->deserializar();
	this->ObjGestorInfraccion->deserializar();
	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < ObjGestorCivil->obtenercantidaddeCiviles(); i++) {
		Civil^ Civilmostrado = ObjGestorCivil->obteneruncivil(i);
		array<String^>^ fila = gcnew array<String^>(8);
		fila[0] = Civilmostrado->DNI;
		fila[1] = Civilmostrado->Nombre;
		fila[2] = Civilmostrado->ApPaterno;
		fila[3] = Civilmostrado->ApMaterno;
		fila[4] = Convert::ToString(Civilmostrado->codigoinfraciion);
		fila[7] = Civilmostrado->objInfraccion->ObjFalta->Tipo;
		fila[5] = Civilmostrado->objInfraccion->Distrito;
		fila[6] = Civilmostrado->objInfraccion->Fecha;
		this->dataGridView1->Rows->Add(fila);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	int Filaselccionada=this->dataGridView1->SelectedRows[0]->Index;
	String^cod1=this->dataGridView1->Rows[Filaselccionada]->Cells[4]->Value->ToString();
	int codo = Convert::ToInt32(cod1);
	this->ObjGestorCivil->quitarcivil(codo);
	this->ObjGestorInfraccion->quitarinfraccion(codo);
	this->ObjGestorCivil->serializar();
	this->ObjGestorInfraccion->serializar();
	this->ObjGestorCivil->deserializar();
	this->ObjGestorInfraccion->deserializar();
	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < ObjGestorCivil->obtenercantidaddeCiviles(); i++) {
		Civil^ Civilmostrado = ObjGestorCivil->obteneruncivil(i);
		array<String^>^ fila = gcnew array<String^>(8);
		fila[0] = Civilmostrado->DNI;
		fila[1] = Civilmostrado->Nombre;
		fila[2] = Civilmostrado->ApPaterno;
		fila[3] = Civilmostrado->ApMaterno;
		fila[4] = Convert::ToString(Civilmostrado->codigoinfraciion);
		fila[7] = Civilmostrado->objInfraccion->ObjFalta->Tipo;
		fila[5] = Civilmostrado->objInfraccion->Distrito;
		fila[6] = Civilmostrado->objInfraccion->Fecha;
		this->dataGridView1->Rows->Add(fila);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int Filaseleecionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigoeditar = Convert::ToInt32(this->dataGridView1->Rows[Filaseleecionada]->Cells[4]->Value->ToString());
	Edition^ NuevaVentanaEdicion = gcnew Edition(this->ObjGestorCivil, this->ObjGestorFalta, this->ObjGestorInfraccion,codigoeditar);
	NuevaVentanaEdicion->ShowDialog();
	this->ObjGestorCivil->serializar();
	this->ObjGestorInfraccion->serializar();
	ObjGestorCivil->Escribirenciviles();
	ObjGestorInfraccion->EscribirInfraccion();
	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < ObjGestorCivil->obtenercantidaddeCiviles(); i++) {
		Civil^ Civilmostrado = ObjGestorCivil->obteneruncivil(i);
		array<String^>^ fila = gcnew array<String^>(8);
		fila[0] = Civilmostrado->DNI;
		fila[1] = Civilmostrado->Nombre;
		fila[2] = Civilmostrado->ApPaterno;
		fila[3] = Civilmostrado->ApMaterno;
		fila[4] = Convert::ToString(Civilmostrado->codigoinfraciion);
		fila[7] = Civilmostrado->objInfraccion->ObjFalta->Tipo;
		fila[5] = Civilmostrado->objInfraccion->Distrito;
		fila[6] = Civilmostrado->objInfraccion->Fecha;
		this->dataGridView1->Rows->Add(fila);
	}
	

}
private: System::Void Graba(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->ObjGestorCivil->serializar();
	this->ObjGestorInfraccion->serializar();
	ObjGestorCivil->Escribirenciviles();
	ObjGestorInfraccion->EscribirInfraccion();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Mapa^ Mapa2 = gcnew Mapa();
	Mapa2->Show();
}
};
}
