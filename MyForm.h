#include "addStudent.h"
#include "AddCourse.h"
#include "DeleteStudent.h"
#include "Query.h"
#include "SortShow.h"
#pragma once

namespace Project9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm ժҪ
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(125, 75);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"���ѧ����Ϣ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(125, 142);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"��ѯ��Ϣ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(125, 208);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(155, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"ɾ����Ϣ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(125, 271);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(155, 40);
			this->button4->TabIndex = 3;
			this->button4->Text = L"������ʾ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(301, 274);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 46);
			this->button5->TabIndex = 4;
			this->button5->Text = L"�˳�����";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(125, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(155, 40);
			this->button6->TabIndex = 5;
			this->button6->Text = L"�����γ�";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(404, 323);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		// ���button1(���ѧ����Ϣ)���������γ̵Ĵ���
		addStudent^ ad = gcnew addStudent();  // ����һ���µĴ��ڶ���
		ad->Visible = false;				  // �ڵ�������ѧ����Ϣ��֮ǰ�˴���Ӧ���ǿ�������
		ad->ShowDialog();					  // ���֮����ʾ�ô���
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Query^ query = gcnew Query();
	query->Visible = false;
	query->ShowDialog();
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	// ���button3(ɾ����Ϣ)���������γ̵Ĵ���
	DeleteStudent^ deleteStudent = gcnew DeleteStudent(); // ����һ���µĴ��ڶ���
	deleteStudent->Visible = false;						  // �ٵ����ɾ����Ϣ��֮ǰ����Ϊ���ɼ���
	deleteStudent->ShowDialog();						  // ���֮����ʾ�ô���
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	SortShow^ sortShow = gcnew SortShow();
	sortShow->Visible = false;
	sortShow->ShowDialog();
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	// ���button6(�����γ�)���������γ̵Ĵ���
	AddCourse^ addCourse = gcnew AddCourse(); // ����һ���µĴ��ڶ���
	addCourse->Visible = false;				  // �ڵ���������γ̡�֮ǰ�˴���Ӧ���ǿ�������
	addCourse->ShowDialog();				  // ���֮����ʾ�ô���
}
};
}
