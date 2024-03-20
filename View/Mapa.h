#pragma once

namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Model;
	using namespace Controller;
	/// <summary>
	/// Resumen de Mapa
	/// </summary>
	public ref class Mapa : public System::Windows::Forms::Form
	{
	public:
		Mapa(void)
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
		~Mapa()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label42;
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Mapa::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Location = System::Drawing::Point(40, 5);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(560, 831);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Mapa::Paint);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label31);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(624, 5);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(150, 288);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Grupo 1";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(7, 72);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(73, 13);
			this->label31->TabIndex = 10;
			this->label31->Text = L"2.Bellavista";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(5, 266);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(55, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"7.Comas";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(5, 245);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"5.Breña";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(5, 222);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(69, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"4.Barranco";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(5, 197);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"3.Ate ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(5, 50);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"1.Cercado Callao ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(5, 95);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(139, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"3. Carmen de la Legua ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(4, 119);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"4.La Perla";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 143);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"5.La Punta";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 171);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"6.Ventanilla";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 28);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"1.Cercado de Lima ";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(624, 297);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(150, 192);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Grupo 2";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(5, 245);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(105, 13);
			this->label11->TabIndex = 9;
			this->label11->Text = L"22.Puente Piedra";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(5, 222);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(100, 13);
			this->label12->TabIndex = 8;
			this->label12->Text = L"21.Pueblo Libre ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(5, 197);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(80, 13);
			this->label13->TabIndex = 7;
			this->label13->Text = L"18.Miraflores";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(5, 171);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(133, 13);
			this->label14->TabIndex = 6;
			this->label14->Text = L"17.Magdalena del Mar";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(5, 50);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(89, 13);
			this->label15->TabIndex = 5;
			this->label15->Text = L"10.El Agustino";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(5, 72);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(96, 13);
			this->label16->TabIndex = 4;
			this->label16->Text = L"11.Jesus Maria ";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(5, 95);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(84, 13);
			this->label17->TabIndex = 3;
			this->label17->Text = L"12.La Molina ";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(5, 119);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(86, 13);
			this->label18->TabIndex = 2;
			this->label18->Text = L"13.La Victoria";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(5, 143);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(60, 13);
			this->label19->TabIndex = 1;
			this->label19->Text = L"14.Lince ";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(5, 28);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(74, 13);
			this->label20->TabIndex = 0;
			this->label20->Text = L"9.Chorrillos ";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->label22);
			this->groupBox3->Controls->Add(this->label23);
			this->groupBox3->Controls->Add(this->label24);
			this->groupBox3->Controls->Add(this->label25);
			this->groupBox3->Controls->Add(this->label26);
			this->groupBox3->Controls->Add(this->label27);
			this->groupBox3->Controls->Add(this->label28);
			this->groupBox3->Controls->Add(this->label29);
			this->groupBox3->Controls->Add(this->label30);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(778, 5);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(174, 288);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Grupo 3";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(5, 245);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(153, 13);
			this->label21->TabIndex = 9;
			this->label21->Text = L"35.Villa Maria del Triunfo.";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(5, 222);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(78, 13);
			this->label22->TabIndex = 8;
			this->label22->Text = L"34.Surquillo ";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(5, 197);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(134, 13);
			this->label23->TabIndex = 7;
			this->label23->Text = L"33. Santiago de Surco";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(5, 171);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(88, 13);
			this->label24->TabIndex = 6;
			this->label24->Text = L"32.San Miguel";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(5, 50);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(82, 13);
			this->label25->TabIndex = 5;
			this->label25->Text = L"27.San Isidro";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(5, 72);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(117, 13);
			this->label26->TabIndex = 4;
			this->label26->Text = L"28.Independencia  ";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(5, 95);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(155, 13);
			this->label27->TabIndex = 3;
			this->label27->Text = L"29 San Juan de Miraflores";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(5, 119);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(82, 13);
			this->label28->TabIndex = 2;
			this->label28->Text = L"30.San Luis  ";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(5, 143);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(144, 13);
			this->label29->TabIndex = 1;
			this->label29->Text = L"31.San Martin de Porres";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(5, 28);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(60, 13);
			this->label30->TabIndex = 0;
			this->label30->Text = L"25.Rimac";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label35);
			this->groupBox4->Controls->Add(this->label36);
			this->groupBox4->Controls->Add(this->label37);
			this->groupBox4->Controls->Add(this->label38);
			this->groupBox4->Controls->Add(this->label39);
			this->groupBox4->Controls->Add(this->label40);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(778, 297);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2);
			this->groupBox4->Size = System::Drawing::Size(174, 192);
			this->groupBox4->TabIndex = 10;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Grupo 4";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(5, 50);
			this->label35->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(91, 13);
			this->label35->TabIndex = 5;
			this->label35->Text = L"38.Santa Rosa";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(5, 72);
			this->label36->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(88, 13);
			this->label36->TabIndex = 4;
			this->label36->Text = L"39.Los Olivos ";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(5, 95);
			this->label37->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(80, 13);
			this->label37->TabIndex = 3;
			this->label37->Text = L"41.San Borja";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(5, 119);
			this->label38->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(122, 13);
			this->label38->TabIndex = 2;
			this->label38->Text = L"42.Villa El Salvador ";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(5, 143);
			this->label39->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(91, 13);
			this->label39->TabIndex = 1;
			this->label39->Text = L"43.Santa Anita";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(5, 28);
			this->label40->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(163, 13);
			this->label40->TabIndex = 0;
			this->label40->Text = L"36.San Juan de Lurigancho";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(624, 593);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(328, 233);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(625, 532);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(33, 36);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(882, 532);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(33, 36);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 13;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(803, 532);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(33, 36);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 14;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(726, 532);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(33, 36);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 15;
			this->pictureBox5->TabStop = false;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label32->Location = System::Drawing::Point(622, 495);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(157, 22);
			this->label32->TabIndex = 10;
			this->label32->Text = L"- Leyenda Peligro:";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(916, 542);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(28, 13);
			this->label33->TabIndex = 10;
			this->label33->Text = L"Bajo";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(835, 542);
			this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(36, 13);
			this->label34->TabIndex = 11;
			this->label34->Text = L"Medio";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(759, 542);
			this->label41->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(25, 13);
			this->label41->TabIndex = 12;
			this->label41->Text = L"Alto";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(658, 542);
			this->label42->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(48, 13);
			this->label42->TabIndex = 13;
			this->label42->Text = L"Muy Alto";
			// 
			// Mapa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(963, 857);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Mapa";
			this->Text = L"Mapa";
			this->Load += gcnew System::EventHandler(this, &Mapa::Mapa_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Mapa_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ Objgraphics=e->Graphics;
		
		GestorInfraccion^ oGESTOR = gcnew GestorInfraccion();
		oGESTOR->deserializar();
		
		String^ Dis1 = "Cercado Callao";
		String^ D1 = "Cercado de Lima";
		String^ D2 = "Bellavista";
		String^ D3 = "Carmen de la Legua";
		String^ Dis3 = "Ate";
		String^ D4 = "La Perla";
		String^ Dis4 = "Barranco";
		String^ D5 = "La Punta";
		String^ Dis5 = "Breña";
		String^ D6 = "Ventanilla";
		String^ D7 = "Comas";
		String^ D9 = "Chorrillos";
		String^ D10 = "El Agustino";
		String^ D11 = "Jesus Maria";
		String^ D12 = "La Molina";
		String^ D13 = "La Victoria";
		String^ D14 = "Lince";
		String^ D17 = "Magdalena del Mar";
		String^ D18 = "Miraflores";
		String^ D21 = "Pueblo Libre";
		String^ D22 = "Puente Piedra";
		String^ D25 = "Rimac";
		String^ D27 = "San Isidro";
		String^ D28 = "Independencia";
		String^ D29 = "San Juan de Miraflores";
		String^ D30 = "San Luis";
		String^ D31 = "San Martin de Porres";
		String^ D32 = "San Miguel";
		String^ D33 = "Surco";
		String^ D34 = "Surquillo";
		String^ D35 = "Villa Maria del Triunfo";
		String^ D36 = "San Juan de Lurigancho";
		String^ D38 = "Santa Rosa";
		String^ D39 = "Los Olivos";
		String^ D41 = "San Borja";
		String^ D42 = "Villa El Salvador";
		String^ D43 = "Santa Anita";

		int c;
		Color Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz = gcnew Pen(Elco, 2);


		//COORDENADA DEL 38 
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D38);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz38 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz38,35, 38, 35, 35);
		//COORDENADA DEL 6
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D6);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz6 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz6,70, 150, 35, 35);
		//COORDENADA DEL 22
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D22);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz22 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz22, 122, 130, 35, 35);
		//COORDENADA DEL 7 
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D7);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz7 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz7, 200, 180, 35, 35);
		//COORDENADA DEL 39
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D39);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz39 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz39, 148, 258, 30, 30);
		//COORDENADA DEL 31
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D31);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz31 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz31, 170, 358, 30, 30);
		//COORDENADA DEL 25
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D25);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz25 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz25, 240, 350, 30, 30);
		//COORDENADA DEL 28
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D28);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz28 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz28, 212, 290, 30, 30);
		//COORDENADA DEL 36
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D36);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz36 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz36, 302, 268, 30, 30);
		//COORDENADA DEL 10
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D10);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz10 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz10, 320, 368, 30, 30);
		//COORDENADA DEL 3
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D3);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz3 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz3, 498, 360, 30, 30);
		//COORDENADA DEL 43
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D43);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz43 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz43, 374, 380, 30, 30);
		//COORDENADA DEL 1
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D1);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz1 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz1, 170, 408, 30, 30);
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(Dis1);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapizdis1 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapizdis1, 56, 414, 30, 30);
		//COORDENADA DEL 2
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D2);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz2 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz2, 130, 436, 14, 20);
		//COORDENADA DEL 3
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(Dis3);
		Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapizdis3 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapizdis3, 137, 408, 17, 17);
		//COORDENADA DEL 5
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D5);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz5 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz5, 210, 428, 25, 25);
		//COORDENADA DEL 21
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D21);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz21 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz21, 190, 460, 28, 28);
		//COORDENADA DEL 17
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D17);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz17 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz17, 188, 500, 20, 20);
		//COORDENADA DEL 11
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D11);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz11 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz11, 231, 460, 20, 20);
		//COORDENADA DEL 32
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D32);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz32 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz32, 130, 464, 28, 28);
		//COORDENADA DEL 4
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D4);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz4 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz4, 74, 460, 28, 28);
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(Dis4);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapizdis4 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapizdis4, 280, 590, 26, 26);
		//COORDENADA DEL 13
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D13);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz13 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz13, 278, 450, 30, 30);
		//COORDENADA DEL 30
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D30);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz30 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz30, 320, 450, 24, 24);
		//COORDENADA DEL 27
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D27);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz27 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz27, 231, 500, 26, 26);
		//COORDENADA DEL 34
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D34);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz34 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz34, 286, 528, 26, 26);
		//COORDENADA DEL 18
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D18);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz18 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz18, 250, 540, 26, 26);
		//COORDENADA DEL 14
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D14);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz14 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz13, 252, 470, 26, 26);
		//COORDENADA DEL 41
	     c = oGESTOR->catiBuscarinfraccionesxDistrito(D41);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz41 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz41, 322, 494, 24, 24);
		//COORDENADA DEL 12
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D12);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz12 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz12, 454, 472, 24, 24);
		//COORDENADA DEL 9
		c = oGESTOR->catiBuscarinfraccionesxDistrito(D9);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz9 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz9, 320, 680, 24, 24);
		//COORDENADA DEL 33
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D33);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz33 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz33, 352, 550, 24, 24);
		//COORDENADA DEL 29
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D29);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz29 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz29, 382, 616, 28, 28);
		//COORDENADA DEL 35
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D35);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz35 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz35, 484, 620, 24, 24);
		//COORDENADA DEL 42
		 c = oGESTOR->catiBuscarinfraccionesxDistrito(D42);
		 Elco = oGESTOR->Elegircolor(c);
		Pen^ Lapiz42 = gcnew Pen(Elco, 2);
		Objgraphics->DrawEllipse(Lapiz42, 442, 730, 24, 24);
	
	}
	};
}
