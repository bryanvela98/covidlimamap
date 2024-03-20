#pragma once
#include "Policias.h"
#include"Consultas.h"
namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Controller;
	using namespace Model;
	/// <summary>
	/// Resumen de LOGIN
	/// </summary>
	public ref class LOGIN : public System::Windows::Forms::Form
	{
	public:
		LOGIN(void)
		{
			InitializeComponent();
			this->ObjGestorPolicia = gcnew GestorPolicia();
			String^ N;  
			String^ app; 
			String^ apm; 
			String^ dni;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~LOGIN()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private:GestorPolicia^ ObjGestorPolicia;
	private: String^ N;
	private:  String^ app;
	private:   String^ apm;
	private:   String^ dni;

	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ BotonIngresar;
	private: System::Windows::Forms::Button^ BotonGuest;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LOGIN::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->BotonIngresar = (gcnew System::Windows::Forms::Button());
			this->BotonGuest = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(94, 36);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(138, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(94, 88);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(138, 20);
			this->textBox2->TabIndex = 1;
			// 
			// BotonIngresar
			// 
			this->BotonIngresar->Location = System::Drawing::Point(107, 127);
			this->BotonIngresar->Margin = System::Windows::Forms::Padding(2);
			this->BotonIngresar->Name = L"BotonIngresar";
			this->BotonIngresar->Size = System::Drawing::Size(78, 25);
			this->BotonIngresar->TabIndex = 2;
			this->BotonIngresar->Text = L"Ingresar";
			this->BotonIngresar->UseVisualStyleBackColor = true;
			this->BotonIngresar->Click += gcnew System::EventHandler(this, &LOGIN::BotonIngresar_Click);
			// 
			// BotonGuest
			// 
			this->BotonGuest->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotonGuest.BackgroundImage")));
			this->BotonGuest->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotonGuest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BotonGuest->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->BotonGuest->Location = System::Drawing::Point(66, 348);
			this->BotonGuest->Margin = System::Windows::Forms::Padding(2);
			this->BotonGuest->Name = L"BotonGuest";
			this->BotonGuest->Size = System::Drawing::Size(125, 51);
			this->BotonGuest->TabIndex = 3;
			this->BotonGuest->Text = L"Consultas";
			this->BotonGuest->UseVisualStyleBackColor = true;
			this->BotonGuest->Click += gcnew System::EventHandler(this, &LOGIN::BotonGuest_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 39);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Usuario:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 91);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Contraseña:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->BotonIngresar);
			this->groupBox1->Location = System::Drawing::Point(318, 257);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(236, 171);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Policias";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &LOGIN::groupBox1_Enter);
			// 
			// LOGIN
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(584, 439);
			this->Controls->Add(this->BotonGuest);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"LOGIN";
			this->Text = L"LOGIN";
			this->Load += gcnew System::EventHandler(this, &LOGIN::LOGIN_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		


private: System::Void BotonIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Usuarioin;
	String^ Usuariocom;
	String^ Passwordin;
	String^ Passwordcom;
	Usuarioin=textBox1->Text;
	Passwordin = textBox2->Text;
	int a, b,c,d;
	c = 1;
	GestorPolicia^ ObjGestorpolicia = gcnew GestorPolicia();
	ObjGestorpolicia->Leerpoliciasdesdetxt();
	int cantidad = ObjGestorpolicia->obtenercantidaddePolis();
	for (int i = 0; i < cantidad;i++) {
		Policia^objPolicia= ObjGestorpolicia->obtenerunpoli(i);
		Usuariocom = objPolicia->Usuario;
		Passwordcom = Convert::ToString(objPolicia->Password);
		a=String::Compare(Usuarioin,Usuariocom);
		b=String::Compare(Passwordin, Passwordcom);	
		if (a == 0 && b == 0) {
			c = 0;
			d = i;
			break;
		}
	}
	if (c==0) {
		Policia^ objPolicia = ObjGestorpolicia->obtenerunpoli(d);
		String^ N = objPolicia->Nombre;
		int  pass = objPolicia->Password;
		String^ app = objPolicia->ApPaterno;
		String^ apm = objPolicia->ApMaterno;
		String^ dni = objPolicia->DNI;
		Policias^ VentanaPolicias = gcnew Policias(this->ObjGestorPolicia,  N, app, apm, dni,pass);
		VentanaPolicias->Show();
	}
	else
	{
		MessageBox::Show("Usuario y/o contraseña incorrecta.");
	}
	
}


private: System::Void LOGIN_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BotonGuest_Click(System::Object^ sender, System::EventArgs^ e) {
	Consultas^ VentanaPolicias = gcnew Consultas();
	VentanaPolicias->Show();

}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
