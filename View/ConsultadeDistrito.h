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
	/// Resumen de ConsultadeDistrito
	/// </summary>
	public ref class ConsultadeDistrito : public System::Windows::Forms::Form
	{
	public:
		ConsultadeDistrito(void)
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
		~ConsultadeDistrito()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;








	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ConsultadeDistrito::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 19);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Distrito:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(78, 19);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(154, 20);
			this->textBox1->TabIndex = 1;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::HotTrack;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(26, 74);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(307, 176);
			this->dataGridView1->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Fecha";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Falta";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox2->Location = System::Drawing::Point(134, 257);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(137, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &ConsultadeDistrito::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 260);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Riesgo del Distrito:";
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Transparent;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(348, 14);
			this->chart1->Margin = System::Windows::Forms::Padding(2);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Cantidad de Faltas";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(442, 277);
			this->chart1->TabIndex = 14;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &ConsultadeDistrito::chart1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(236, 14);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 29);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConsultadeDistrito::button1_Click_1);
			// 
			// ConsultadeDistrito
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(771, 288);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ConsultadeDistrito";
			this->Text = L"Consulta de Distrito";
			this->Load += gcnew System::EventHandler(this, &ConsultadeDistrito::ConsultadeDistrito_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int a = 0; 
		int b = 0;
		int c = 0;
		int d = 0;
		String^ Dis = textBox1->Text;
		GestorInfraccion^ OBJgestorInfraccion = gcnew GestorInfraccion();
		OBJgestorInfraccion->LeerInfracciondesdetxt();
		this->dataGridView1->Rows->Clear();
		OBJgestorInfraccion->BuscarinfraccionesxDistrito(Dis);
		for (int i = 0; i < OBJgestorInfraccion->ListaBuscada2->Count; i++) {
			Infraccion^ Infraccionmostrada = OBJgestorInfraccion->ListaBuscada2[i];
			array<String^>^ fila = gcnew array<String^>(2);
			fila[0] = Infraccionmostrada->Fecha;
			fila[1] = Infraccionmostrada->ObjFalta->Tipo;
			this->dataGridView1->Rows->Add(fila);
			if (Infraccionmostrada->ObjFalta->Tipo == "Fiesta COVID") {
				a++;
			}
			if (Infraccionmostrada->ObjFalta->Tipo == "No Mascarilla") {
				b++;
			}
			if (Infraccionmostrada->ObjFalta->Tipo == "Violencia") {
				c++;
			}
			if (Infraccionmostrada->ObjFalta->Tipo == "Fuera de toque de queda") {
				d++;
			}
		}
		if (OBJgestorInfraccion->ListaBuscada2->Count <= 1) {
			textBox2->Text = "Bajo o nulo ";
		}
		if (OBJgestorInfraccion->ListaBuscada2->Count <= 3 && OBJgestorInfraccion->ListaBuscada2->Count >= 2) {
			textBox2->Text = "Medio";
		}
		if (OBJgestorInfraccion->ListaBuscada2->Count > 3) {
			textBox2->Text = "Alto";
		}
		//El reinicio 
		this->chart1->Series["Cantidad de Faltas"]->Points->Clear();
		this->chart1->Series["Cantidad de Faltas"]->Points->AddXY("Fiesta COVID",a);
		this->chart1->Series["Cantidad de Faltas"]->Points->AddXY("No Mascarilla", b);
		this->chart1->Series["Cantidad de Faltas"]->Points->AddXY("Violencia", c);
		this->chart1->Series["Cantidad de Faltas"]->Points->AddXY("Fuera de toque de queda", d);
	
	}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

		int a = 0;
		int b = 0;
		int c = 0;
		int d = 0;
		String^ Dis = textBox1->Text;
		GestorInfraccion^ OBJgestorInfraccion = gcnew GestorInfraccion();
		OBJgestorInfraccion->LeerInfracciondesdetxt();
		this->dataGridView1->Rows->Clear();
		OBJgestorInfraccion->BuscarinfraccionesxDistrito(Dis);
		for (int i = 0; i < OBJgestorInfraccion->ListaBuscada2->Count; i++) {
			Infraccion^ Infraccionmostrada = OBJgestorInfraccion->ListaBuscada2[i];
			array<String^>^ fila = gcnew array<String^>(2);
			fila[0] = Infraccionmostrada->Fecha;
			fila[1] = Infraccionmostrada->ObjFalta->Tipo;
			this->dataGridView1->Rows->Add(fila);
			if (Infraccionmostrada->ObjFalta->Tipo == "Fiesta COVID") {
				a++;
			}
			if (Infraccionmostrada->ObjFalta->Tipo == "No Mascarilla") {
				b++;
			}
			if (Infraccionmostrada->ObjFalta->Tipo == "Violencia") {
				c++;
			}
			if (Infraccionmostrada->ObjFalta->Tipo == "Fuera de toque de queda") {
				d++;
			}
		}
		if (OBJgestorInfraccion->ListaBuscada2->Count <= 1) {
			textBox2->Text = "Bajo o nulo ";
		}
		if (OBJgestorInfraccion->ListaBuscada2->Count <= 3 && OBJgestorInfraccion->ListaBuscada2->Count >= 2) {
			textBox2->Text = "Medio";
		}
		if (OBJgestorInfraccion->ListaBuscada2->Count > 3) {
			textBox2->Text = "Alto";
		}
		//El reinicio 
		this->chart1->Series["Cantidad de Faltas"]->Points->Clear();
		this->chart1->Series["Cantidad de Faltas"]->Points->AddXY("Fiesta COVID", a);
		this->chart1->Series["Cantidad de Faltas"]->Points->AddXY("No Mascarilla", b);
		this->chart1->Series["Cantidad de Faltas"]->Points->AddXY("Violencia", c);
		this->chart1->Series["Cantidad de Faltas"]->Points->AddXY("Fuera de toque de queda", d);
	}

private: System::Void ConsultadeDistrito_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
