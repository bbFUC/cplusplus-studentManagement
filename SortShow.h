#pragma once

namespace Project9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// SortShow 摘要
	/// </summary>
	public ref class SortShow : public System::Windows::Forms::Form
	{
	public:
		SortShow(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~SortShow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  CoursetextBox;

	private: System::Windows::Forms::Label^  label1;






	private: System::ComponentModel::IContainer^  components;
	protected:





	protected:

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->CoursetextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 30;
			this->dataGridView1->Size = System::Drawing::Size(661, 435);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 443);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 44);
			this->button1->TabIndex = 1;
			this->button1->Text = L"学分排序显示";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SortShow::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(512, 443);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(152, 44);
			this->button2->TabIndex = 2;
			this->button2->Text = L"成绩排序显示";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SortShow::button2_Click);
			// 
			// CoursetextBox
			// 
			this->CoursetextBox->Location = System::Drawing::Point(324, 458);
			this->CoursetextBox->Name = L"CoursetextBox";
			this->CoursetextBox->Size = System::Drawing::Size(176, 28);
			this->CoursetextBox->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(202, 461);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 18);
			this->label1->TabIndex = 4;
			this->label1->Text = L"输入课程名称";
			// 
			// SortShow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(696, 496);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CoursetextBox);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"SortShow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SortShow";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	// 连接数据库
	SqlConnection^ sqlConnection = gcnew SqlConnection();
	sqlConnection->ConnectionString = "Server=ROCK;Database=sdb;Integrated Security=true";
	sqlConnection->Open();
	SqlCommand^ sqlCommand = gcnew SqlCommand();
	SqlDataAdapter^ myDataAdapter = gcnew SqlDataAdapter("SELECT * FROM 学生信息", sqlConnection);
	DataTable^ myDataTable = gcnew DataTable();
	myDataAdapter->Fill(myDataTable);

	// 绑定数据库并将数据库信息传入表中
	BindingSource^ bindingSource = gcnew BindingSource();
	bindingSource->DataSource = myDataTable;
	dataGridView1->DataSource = bindingSource;
	myDataAdapter->Update(myDataTable);

	// dataGridView大小随载入的表大小变化
	dataGridView1->AutoResizeColumns(
		DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader);

	sqlConnection->Close();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ courseName = CoursetextBox->Text;

	// 连接数据库
	SqlConnection^ sqlConnection = gcnew SqlConnection();
	sqlConnection->ConnectionString = "Server=ROCK;Database=sdb;Integrated Security=true";
	sqlConnection->Open();
	SqlCommand^ sqlCommand = gcnew SqlCommand();
	SqlDataAdapter^ myDataAdapter = gcnew SqlDataAdapter("SELECT * FROM " + courseName, sqlConnection);
	DataTable^ myDataTable = gcnew DataTable();
	myDataAdapter->Fill(myDataTable);

	// 绑定数据库并将数据库信息传入表中
	BindingSource^ bindingSource = gcnew BindingSource();
	bindingSource->DataSource = myDataTable;
	dataGridView1->DataSource = bindingSource;
	myDataAdapter->Update(myDataTable);

	// dataGridView大小随载入的表大小变化
	dataGridView1->AutoResizeColumns(
		DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader);

	sqlConnection->Close();
}
};
}
