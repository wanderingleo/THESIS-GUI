﻿#pragma once
#include "camera/camera.hpp"
#include "pid/pid.hpp"
#include <sstream>
#include <string>
#include <iostream>
#include "eFLL/fuzzy_ball_and_plate.h"

namespace BALL_BALANCE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	using namespace ZedGraph;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	Camera camera(0);
	PID pidX;
	PID pidY;
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
#pragma region auto_code
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used->
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  cbCOMLIST;
	private: System::Windows::Forms::TextBox^  txtRECEIVE;

	protected:

	private: System::Windows::Forms::Button^  bCONNECT;
	private: System::IO::Ports::SerialPort^  serialPort;
	private: System::Windows::Forms::Timer^  timerUART_Send;
	private: System::Windows::Forms::TextBox^  txtSEND;
	private: System::Windows::Forms::Timer^  timerUART_Receive;
	private: System::Windows::Forms::Button^  bSEND;
	private: ZedGraph::ZedGraphControl^  zedGraphXY;

	private: System::Windows::Forms::Timer^  timerProcessing;

	private: System::Windows::Forms::TextBox^  txtSetpointX;

	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::TextBox^  txtSetpointY;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtPosX;


	private: System::Windows::Forms::TextBox^  txtPosY;


	private: System::Windows::Forms::TextBox^  txtErrY;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  txtErrX;










	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  bSTART;





	private: System::Windows::Forms::TextBox^  txtANGLE_Y;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  txtANGLE_X;







	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  bSCROLL;
	private: System::Windows::Forms::TextBox^  txtKD2;
	private: System::Windows::Forms::TextBox^  txtKP2;
	private: System::Windows::Forms::TextBox^  txtKI2;
	private: System::Windows::Forms::TextBox^  txtKD1;
	private: System::Windows::Forms::TextBox^  txtKP1;
	private: System::Windows::Forms::TextBox^  txtKI1;
	private: System::Windows::Forms::Button^  bSETBALL;



	private: System::Windows::Forms::Button^  bCALIB;







private: System::Windows::Forms::Button^  bSTART_GRAPH;

private: System::Windows::Forms::Button^  bSTART_PID;
private: System::Windows::Forms::TextBox^  txtTimeProcess;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Button^  bSTART_FUZZY;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::TextBox^  txtScaleOut1;

private: System::Windows::Forms::TextBox^  txtScaleVel1;


private: System::Windows::Forms::TextBox^  txtScaleErr1;




private: System::Windows::Forms::Button^  bGetBall;
private: System::Windows::Forms::Button^  bShowCam;





private: System::Windows::Forms::Button^  bEXPORT_SETTING;
private: System::Windows::Forms::Button^  bIMPORT_SETTING;





private: System::Windows::Forms::TextBox^  txtScaleVel3;

private: System::Windows::Forms::TextBox^  txtScaleVel2;

private: System::Windows::Forms::TextBox^  txtScaleErr3;

private: System::Windows::Forms::TextBox^  txtScaleErr2;
private: System::Windows::Forms::TextBox^  txtScaleOut3;



private: System::Windows::Forms::TextBox^  txtScaleOut2;
private: System::Windows::Forms::Button^  bSetFuzzyScaleXY;
private: System::Windows::Forms::Button^  bSetPIDFactor;
private: System::Windows::Forms::Button^  bClose;
private: System::Windows::Forms::TrackBar^  tbAngleX;
private: System::Windows::Forms::TrackBar^  tbAngleY;
private: System::Windows::Forms::TabControl^  tabControlController;

private: System::Windows::Forms::TabPage^  tabPage1;
private: System::Windows::Forms::TabPage^  tabPage2;
private: System::Windows::Forms::TabControl^  tabControlGraph;
private: System::Windows::Forms::TabPage^  tabPageXYGRAPH;
private: System::Windows::Forms::TabPage^  tabPageTIMEGRAPH;



private: ZedGraph::ZedGraphControl^  zedGraphY;

private: ZedGraph::ZedGraphControl^  zedGraphX;

private: System::Windows::Forms::TabPage^  tabPage5;
private: System::Windows::Forms::TabPage^  tabPage;



private: System::Windows::Forms::TabPage^  tabPage6;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::TextBox^  txtAxisMaxY;

private: System::Windows::Forms::TextBox^  txtAxisMaxX;

private: System::Windows::Forms::TextBox^  txtAxisMinY;

private: System::Windows::Forms::TextBox^  txtAxisMinX;

private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::TrackBar^  trackBar6;
private: System::Windows::Forms::TrackBar^  trackBar4;
private: System::Windows::Forms::TrackBar^  trackBar2;
private: System::Windows::Forms::TrackBar^  trackBar5;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::TrackBar^  trackBar3;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::TrackBar^  trackBar1;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::TextBox^  txtDisplayAngle6;


private: System::Windows::Forms::TextBox^  txtDisplayAngle5;

private: System::Windows::Forms::TextBox^  txtDisplayAngle4;

private: System::Windows::Forms::TextBox^  txtDisplayAngle3;

private: System::Windows::Forms::TextBox^  txtDisplayAngle2;

private: System::Windows::Forms::TextBox^  txtDisplayAngle1;
private: System::Windows::Forms::Button^  bSetScale;
private: System::Windows::Forms::TabPage^  tabPageMOREGRAPH;
private: ZedGraph::ZedGraphControl^  zedGraphDEX;

private: ZedGraph::ZedGraphControl^  zedGraphEX;
private: ZedGraph::ZedGraphControl^  zedGraphEY;
private: ZedGraph::ZedGraphControl^  zedGraphUX;



private: ZedGraph::ZedGraphControl^  zedGraphDEY;
private: ZedGraph::ZedGraphControl^  zedGraphUY;


private: System::Windows::Forms::TextBox^  txtAxisMaxUY;

private: System::Windows::Forms::TextBox^  txtAxisMinDEY;
private: System::Windows::Forms::TextBox^  txtAxisMaxUX;


private: System::Windows::Forms::TextBox^  txtAxisMinDEX;
private: System::Windows::Forms::TextBox^  txtAxisMinUY;


private: System::Windows::Forms::TextBox^  txtAxisMaxEY;
private: System::Windows::Forms::TextBox^  txtAxisMinUX;


private: System::Windows::Forms::TextBox^  txtAxisMaxEX;
private: System::Windows::Forms::TextBox^  txtAxisMAXDEY;


private: System::Windows::Forms::TextBox^  txtAxisMinEY;
private: System::Windows::Forms::TextBox^  txtAxisMaxDEX;


private: System::Windows::Forms::TextBox^  txtAxisMinEX;
private: System::Windows::Forms::TextBox^  txtDErrY;


private: System::Windows::Forms::TextBox^  txtDErrX;

private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::TextBox^  txtSamplingRate;
private: System::Windows::Forms::Label^  label34;















	private: System::ComponentModel::IContainer^  components;


	protected:

	private:
		/// <summary>
		/// Required designer variable->
		/// </summary>
#pragma endregion

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor->
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->cbCOMLIST = (gcnew System::Windows::Forms::ComboBox());
			this->txtRECEIVE = (gcnew System::Windows::Forms::TextBox());
			this->bCONNECT = (gcnew System::Windows::Forms::Button());
			this->serialPort = (gcnew System::IO::Ports::SerialPort(this->components));
			this->timerUART_Send = (gcnew System::Windows::Forms::Timer(this->components));
			this->txtSEND = (gcnew System::Windows::Forms::TextBox());
			this->timerUART_Receive = (gcnew System::Windows::Forms::Timer(this->components));
			this->bSEND = (gcnew System::Windows::Forms::Button());
			this->zedGraphXY = (gcnew ZedGraph::ZedGraphControl());
			this->timerProcessing = (gcnew System::Windows::Forms::Timer(this->components));
			this->txtSetpointX = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtSetpointY = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPosX = (gcnew System::Windows::Forms::TextBox());
			this->txtPosY = (gcnew System::Windows::Forms::TextBox());
			this->txtErrY = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtErrX = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->bSTART = (gcnew System::Windows::Forms::Button());
			this->txtANGLE_Y = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtANGLE_X = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtSamplingRate = (gcnew System::Windows::Forms::TextBox());
			this->txtDErrY = (gcnew System::Windows::Forms::TextBox());
			this->txtDErrX = (gcnew System::Windows::Forms::TextBox());
			this->txtTimeProcess = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txtAxisMaxUY = (gcnew System::Windows::Forms::TextBox());
			this->txtAxisMinDEY = (gcnew System::Windows::Forms::TextBox());
			this->txtAxisMaxUX = (gcnew System::Windows::Forms::TextBox());
			this->txtAxisMinDEX = (gcnew System::Windows::Forms::TextBox());
			this->txtAxisMinUY = (gcnew System::Windows::Forms::TextBox());
			this->txtAxisMaxEY = (gcnew System::Windows::Forms::TextBox());
			this->txtAxisMinUX = (gcnew System::Windows::Forms::TextBox());
			this->txtAxisMaxEX = (gcnew System::Windows::Forms::TextBox());
			this->txtAxisMAXDEY = (gcnew System::Windows::Forms::TextBox());
			this->txtAxisMinEY = (gcnew System::Windows::Forms::TextBox());
			this->txtAxisMaxDEX = (gcnew System::Windows::Forms::TextBox());
			this->txtAxisMinEX = (gcnew System::Windows::Forms::TextBox());
			this->txtAxisMaxY = (gcnew System::Windows::Forms::TextBox());
			this->txtAxisMaxX = (gcnew System::Windows::Forms::TextBox());
			this->txtAxisMinY = (gcnew System::Windows::Forms::TextBox());
			this->txtAxisMinX = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bSTART_GRAPH = (gcnew System::Windows::Forms::Button());
			this->bSCROLL = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->txtScaleOut1 = (gcnew System::Windows::Forms::TextBox());
			this->txtScaleVel1 = (gcnew System::Windows::Forms::TextBox());
			this->txtScaleErr1 = (gcnew System::Windows::Forms::TextBox());
			this->txtKD2 = (gcnew System::Windows::Forms::TextBox());
			this->txtKP2 = (gcnew System::Windows::Forms::TextBox());
			this->txtKI2 = (gcnew System::Windows::Forms::TextBox());
			this->txtKD1 = (gcnew System::Windows::Forms::TextBox());
			this->txtKP1 = (gcnew System::Windows::Forms::TextBox());
			this->txtKI1 = (gcnew System::Windows::Forms::TextBox());
			this->bSETBALL = (gcnew System::Windows::Forms::Button());
			this->bCALIB = (gcnew System::Windows::Forms::Button());
			this->bClose = (gcnew System::Windows::Forms::Button());
			this->bSTART_FUZZY = (gcnew System::Windows::Forms::Button());
			this->bSTART_PID = (gcnew System::Windows::Forms::Button());
			this->bGetBall = (gcnew System::Windows::Forms::Button());
			this->bShowCam = (gcnew System::Windows::Forms::Button());
			this->bSetPIDFactor = (gcnew System::Windows::Forms::Button());
			this->bSetFuzzyScaleXY = (gcnew System::Windows::Forms::Button());
			this->txtScaleVel3 = (gcnew System::Windows::Forms::TextBox());
			this->txtScaleVel2 = (gcnew System::Windows::Forms::TextBox());
			this->txtScaleErr3 = (gcnew System::Windows::Forms::TextBox());
			this->txtScaleErr2 = (gcnew System::Windows::Forms::TextBox());
			this->txtScaleOut3 = (gcnew System::Windows::Forms::TextBox());
			this->txtScaleOut2 = (gcnew System::Windows::Forms::TextBox());
			this->bEXPORT_SETTING = (gcnew System::Windows::Forms::Button());
			this->bIMPORT_SETTING = (gcnew System::Windows::Forms::Button());
			this->tbAngleX = (gcnew System::Windows::Forms::TrackBar());
			this->tbAngleY = (gcnew System::Windows::Forms::TrackBar());
			this->tabControlController = (gcnew System::Windows::Forms::TabControl());
			this->tabPage = (gcnew System::Windows::Forms::TabPage());
			this->bSetScale = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->trackBar6 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar4 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar5 = (gcnew System::Windows::Forms::TrackBar());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabControlGraph = (gcnew System::Windows::Forms::TabControl());
			this->tabPageXYGRAPH = (gcnew System::Windows::Forms::TabPage());
			this->tabPageTIMEGRAPH = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphY = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphX = (gcnew ZedGraph::ZedGraphControl());
			this->tabPageMOREGRAPH = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphUY = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphDEY = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphEY = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphUX = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphDEX = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphEX = (gcnew ZedGraph::ZedGraphControl());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->txtDisplayAngle6 = (gcnew System::Windows::Forms::TextBox());
			this->txtDisplayAngle5 = (gcnew System::Windows::Forms::TextBox());
			this->txtDisplayAngle4 = (gcnew System::Windows::Forms::TextBox());
			this->txtDisplayAngle3 = (gcnew System::Windows::Forms::TextBox());
			this->txtDisplayAngle2 = (gcnew System::Windows::Forms::TextBox());
			this->txtDisplayAngle1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbAngleX))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbAngleY))->BeginInit();
			this->tabControlController->SuspendLayout();
			this->tabPage->SuspendLayout();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabControlGraph->SuspendLayout();
			this->tabPageXYGRAPH->SuspendLayout();
			this->tabPageTIMEGRAPH->SuspendLayout();
			this->tabPageMOREGRAPH->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// cbCOMLIST
			// 
			this->cbCOMLIST->FormattingEnabled = true;
			this->cbCOMLIST->Location = System::Drawing::Point(7, 20);
			this->cbCOMLIST->Name = L"cbCOMLIST";
			this->cbCOMLIST->Size = System::Drawing::Size(92, 21);
			this->cbCOMLIST->TabIndex = 0;
			// 
			// txtRECEIVE
			// 
			this->txtRECEIVE->Location = System::Drawing::Point(7, 75);
			this->txtRECEIVE->Name = L"txtRECEIVE";
			this->txtRECEIVE->Size = System::Drawing::Size(92, 20);
			this->txtRECEIVE->TabIndex = 1;
			// 
			// bCONNECT
			// 
			this->bCONNECT->Location = System::Drawing::Point(106, 19);
			this->bCONNECT->Name = L"bCONNECT";
			this->bCONNECT->Size = System::Drawing::Size(93, 24);
			this->bCONNECT->TabIndex = 2;
			this->bCONNECT->Text = L"CONNECT";
			this->bCONNECT->UseVisualStyleBackColor = true;
			this->bCONNECT->Click += gcnew System::EventHandler(this, &MyForm::bCONNECT_Click);
			// 
			// serialPort
			// 
			this->serialPort->BaudRate = 115200;
			// 
			// timerUART_Send
			// 
			this->timerUART_Send->Tick += gcnew System::EventHandler(this, &MyForm::eUARTSend);
			// 
			// txtSEND
			// 
			this->txtSEND->Location = System::Drawing::Point(7, 49);
			this->txtSEND->Name = L"txtSEND";
			this->txtSEND->Size = System::Drawing::Size(91, 20);
			this->txtSEND->TabIndex = 3;
			this->txtSEND->Text = L"00";
			this->txtSEND->TextChanged += gcnew System::EventHandler(this, &MyForm::txtSEND_TextChanged);
			// 
			// timerUART_Receive
			// 
			this->timerUART_Receive->Tick += gcnew System::EventHandler(this, &MyForm::eUARTReceive);
			// 
			// bSEND
			// 
			this->bSEND->Location = System::Drawing::Point(106, 48);
			this->bSEND->Name = L"bSEND";
			this->bSEND->Size = System::Drawing::Size(93, 25);
			this->bSEND->TabIndex = 4;
			this->bSEND->Text = L"SEND";
			this->bSEND->UseVisualStyleBackColor = true;
			this->bSEND->Click += gcnew System::EventHandler(this, &MyForm::bSEND_Click);
			// 
			// zedGraphXY
			// 
			this->zedGraphXY->Location = System::Drawing::Point(6, 6);
			this->zedGraphXY->Name = L"zedGraphXY";
			this->zedGraphXY->ScrollGrace = 0;
			this->zedGraphXY->ScrollMaxX = 0;
			this->zedGraphXY->ScrollMaxY = 0;
			this->zedGraphXY->ScrollMaxY2 = 0;
			this->zedGraphXY->ScrollMinX = 0;
			this->zedGraphXY->ScrollMinY = 0;
			this->zedGraphXY->ScrollMinY2 = 0;
			this->zedGraphXY->Size = System::Drawing::Size(536, 501);
			this->zedGraphXY->TabIndex = 5;
			// 
			// timerProcessing
			// 
			this->timerProcessing->Tick += gcnew System::EventHandler(this, &MyForm::etimerProcessing);
			// 
			// txtSetpointX
			// 
			this->txtSetpointX->Location = System::Drawing::Point(107, 27);
			this->txtSetpointX->Name = L"txtSetpointX";
			this->txtSetpointX->Size = System::Drawing::Size(46, 20);
			this->txtSetpointX->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"SET POINT X - Y";

			// 
			// txtSetpointY
			// 
			this->txtSetpointY->Location = System::Drawing::Point(159, 27);
			this->txtSetpointY->Name = L"txtSetpointY";
			this->txtSetpointY->Size = System::Drawing::Size(46, 20);
			this->txtSetpointY->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"POS X - Y";
			// 
			// txtPosX
			// 
			this->txtPosX->Location = System::Drawing::Point(107, 53);
			this->txtPosX->Name = L"txtPosX";
			this->txtPosX->Size = System::Drawing::Size(46, 20);
			this->txtPosX->TabIndex = 10;
			// 
			// txtPosY
			// 
			this->txtPosY->Location = System::Drawing::Point(159, 53);
			this->txtPosY->Name = L"txtPosY";
			this->txtPosY->Size = System::Drawing::Size(46, 20);
			this->txtPosY->TabIndex = 12;
			// 
			// txtErrY
			// 
			this->txtErrY->Location = System::Drawing::Point(159, 79);
			this->txtErrY->Name = L"txtErrY";
			this->txtErrY->Size = System::Drawing::Size(46, 20);
			this->txtErrY->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 82);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"ERROR X - Y";
			// 
			// txtErrX
			// 
			this->txtErrX->Location = System::Drawing::Point(107, 79);
			this->txtErrX->Name = L"txtErrX";
			this->txtErrX->Size = System::Drawing::Size(46, 20);
			this->txtErrX->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(24, 38);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"KP";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(24, 66);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(17, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"KI";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(24, 93);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(22, 13);
			this->label9->TabIndex = 21;
			this->label9->Text = L"KD";
			// 
			// bSTART
			// 
			this->bSTART->Location = System::Drawing::Point(7, 101);
			this->bSTART->Name = L"bSTART";
			this->bSTART->Size = System::Drawing::Size(93, 23);
			this->bSTART->TabIndex = 22;
			this->bSTART->Text = L"START CAM";
			this->bSTART->UseVisualStyleBackColor = true;
			this->bSTART->Click += gcnew System::EventHandler(this, &MyForm::bSTART_Click);
			// 
			// txtANGLE_Y
			// 
			this->txtANGLE_Y->Location = System::Drawing::Point(159, 132);
			this->txtANGLE_Y->Name = L"txtANGLE_Y";
			this->txtANGLE_Y->Size = System::Drawing::Size(46, 20);
			this->txtANGLE_Y->TabIndex = 25;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 19);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(69, 13);
			this->label11->TabIndex = 24;
			this->label11->Text = L"ANGLE X - Y";
			// 
			// txtANGLE_X
			// 
			this->txtANGLE_X->Location = System::Drawing::Point(107, 132);
			this->txtANGLE_X->Name = L"txtANGLE_X";
			this->txtANGLE_X->Size = System::Drawing::Size(46, 20);
			this->txtANGLE_X->TabIndex = 23;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(104, 39);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(21, 13);
			this->label12->TabIndex = 19;
			this->label12->Text = L"KP";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(104, 67);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(17, 13);
			this->label13->TabIndex = 20;
			this->label13->Text = L"KI";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(104, 94);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(22, 13);
			this->label14->TabIndex = 21;
			this->label14->Text = L"KD";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtSamplingRate);
			this->groupBox1->Controls->Add(this->txtDErrY);
			this->groupBox1->Controls->Add(this->txtDErrX);
			this->groupBox1->Controls->Add(this->txtTimeProcess);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->txtPosY);
			this->groupBox1->Controls->Add(this->txtSetpointX);
			this->groupBox1->Controls->Add(this->label34);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->txtANGLE_Y);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txtSetpointY);
			this->groupBox1->Controls->Add(this->txtANGLE_X);
			this->groupBox1->Controls->Add(this->txtPosX);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txtErrX);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->txtErrY);
			this->groupBox1->Location = System::Drawing::Point(12, 264);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(219, 216);
			this->groupBox1->TabIndex = 27;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"PARAM";
			// 
			// txtSamplingRate
			// 
			this->txtSamplingRate->Location = System::Drawing::Point(159, 158);
			this->txtSamplingRate->Name = L"txtSamplingRate";
			this->txtSamplingRate->Size = System::Drawing::Size(46, 20);
			this->txtSamplingRate->TabIndex = 42;
			this->txtSamplingRate->TextChanged += gcnew System::EventHandler(this, &MyForm::txtSamplingRate_TextChanged);
			// 
			// txtDErrY
			// 
			this->txtDErrY->Location = System::Drawing::Point(159, 105);
			this->txtDErrY->Name = L"txtDErrY";
			this->txtDErrY->Size = System::Drawing::Size(46, 20);
			this->txtDErrY->TabIndex = 41;
			// 
			// txtDErrX
			// 
			this->txtDErrX->Location = System::Drawing::Point(107, 105);
			this->txtDErrX->Name = L"txtDErrX";
			this->txtDErrX->Size = System::Drawing::Size(46, 20);
			this->txtDErrX->TabIndex = 40;
			// 
			// txtTimeProcess
			// 
			this->txtTimeProcess->Location = System::Drawing::Point(159, 185);
			this->txtTimeProcess->Name = L"txtTimeProcess";
			this->txtTimeProcess->Size = System::Drawing::Size(46, 20);
			this->txtTimeProcess->TabIndex = 35;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(12, 108);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(95, 13);
			this->label21->TabIndex = 24;
			this->label21->Text = L"DERIV  ERR X - Y";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 13);
			this->label5->TabIndex = 24;
			this->label5->Text = L"ANGLE X - Y";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(12, 186);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(106, 13);
			this->label34->TabIndex = 38;
			this->label34->Text = L"PROCESSING TIME";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(12, 160);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(94, 13);
			this->label15->TabIndex = 38;
			this->label15->Text = L"SAMPLING RATE";
			// 
			// txtAxisMaxUY
			// 
			this->txtAxisMaxUY->Location = System::Drawing::Point(157, 201);
			this->txtAxisMaxUY->Name = L"txtAxisMaxUY";
			this->txtAxisMaxUY->Size = System::Drawing::Size(46, 20);
			this->txtAxisMaxUY->TabIndex = 42;
			// 
			// txtAxisMinDEY
			// 
			this->txtAxisMinDEY->Location = System::Drawing::Point(157, 123);
			this->txtAxisMinDEY->Name = L"txtAxisMinDEY";
			this->txtAxisMinDEY->Size = System::Drawing::Size(46, 20);
			this->txtAxisMinDEY->TabIndex = 42;
			// 
			// txtAxisMaxUX
			// 
			this->txtAxisMaxUX->Location = System::Drawing::Point(105, 201);
			this->txtAxisMaxUX->Name = L"txtAxisMaxUX";
			this->txtAxisMaxUX->Size = System::Drawing::Size(46, 20);
			this->txtAxisMaxUX->TabIndex = 42;
			// 
			// txtAxisMinDEX
			// 
			this->txtAxisMinDEX->Location = System::Drawing::Point(105, 123);
			this->txtAxisMinDEX->Name = L"txtAxisMinDEX";
			this->txtAxisMinDEX->Size = System::Drawing::Size(46, 20);
			this->txtAxisMinDEX->TabIndex = 42;
			// 
			// txtAxisMinUY
			// 
			this->txtAxisMinUY->Location = System::Drawing::Point(157, 175);
			this->txtAxisMinUY->Name = L"txtAxisMinUY";
			this->txtAxisMinUY->Size = System::Drawing::Size(46, 20);
			this->txtAxisMinUY->TabIndex = 42;
			// 
			// txtAxisMaxEY
			// 
			this->txtAxisMaxEY->Location = System::Drawing::Point(157, 97);
			this->txtAxisMaxEY->Name = L"txtAxisMaxEY";
			this->txtAxisMaxEY->Size = System::Drawing::Size(46, 20);
			this->txtAxisMaxEY->TabIndex = 42;
			// 
			// txtAxisMinUX
			// 
			this->txtAxisMinUX->Location = System::Drawing::Point(105, 175);
			this->txtAxisMinUX->Name = L"txtAxisMinUX";
			this->txtAxisMinUX->Size = System::Drawing::Size(46, 20);
			this->txtAxisMinUX->TabIndex = 42;
			// 
			// txtAxisMaxEX
			// 
			this->txtAxisMaxEX->Location = System::Drawing::Point(105, 97);
			this->txtAxisMaxEX->Name = L"txtAxisMaxEX";
			this->txtAxisMaxEX->Size = System::Drawing::Size(46, 20);
			this->txtAxisMaxEX->TabIndex = 42;
			// 
			// txtAxisMAXDEY
			// 
			this->txtAxisMAXDEY->Location = System::Drawing::Point(157, 149);
			this->txtAxisMAXDEY->Name = L"txtAxisMAXDEY";
			this->txtAxisMAXDEY->Size = System::Drawing::Size(46, 20);
			this->txtAxisMAXDEY->TabIndex = 42;
			// 
			// txtAxisMinEY
			// 
			this->txtAxisMinEY->Location = System::Drawing::Point(157, 71);
			this->txtAxisMinEY->Name = L"txtAxisMinEY";
			this->txtAxisMinEY->Size = System::Drawing::Size(46, 20);
			this->txtAxisMinEY->TabIndex = 42;
			// 
			// txtAxisMaxDEX
			// 
			this->txtAxisMaxDEX->Location = System::Drawing::Point(105, 149);
			this->txtAxisMaxDEX->Name = L"txtAxisMaxDEX";
			this->txtAxisMaxDEX->Size = System::Drawing::Size(46, 20);
			this->txtAxisMaxDEX->TabIndex = 42;
			// 
			// txtAxisMinEX
			// 
			this->txtAxisMinEX->Location = System::Drawing::Point(105, 71);
			this->txtAxisMinEX->Name = L"txtAxisMinEX";
			this->txtAxisMinEX->Size = System::Drawing::Size(46, 20);
			this->txtAxisMinEX->TabIndex = 42;
			// 
			// txtAxisMaxY
			// 
			this->txtAxisMaxY->Location = System::Drawing::Point(157, 45);
			this->txtAxisMaxY->Name = L"txtAxisMaxY";
			this->txtAxisMaxY->Size = System::Drawing::Size(46, 20);
			this->txtAxisMaxY->TabIndex = 39;
			// 
			// txtAxisMaxX
			// 
			this->txtAxisMaxX->Location = System::Drawing::Point(105, 45);
			this->txtAxisMaxX->Name = L"txtAxisMaxX";
			this->txtAxisMaxX->Size = System::Drawing::Size(46, 20);
			this->txtAxisMaxX->TabIndex = 39;
			// 
			// txtAxisMinY
			// 
			this->txtAxisMinY->Location = System::Drawing::Point(157, 19);
			this->txtAxisMinY->Name = L"txtAxisMinY";
			this->txtAxisMinY->Size = System::Drawing::Size(46, 20);
			this->txtAxisMinY->TabIndex = 39;
			// 
			// txtAxisMinX
			// 
			this->txtAxisMinX->Location = System::Drawing::Point(105, 19);
			this->txtAxisMinX->Name = L"txtAxisMinX";
			this->txtAxisMinX->Size = System::Drawing::Size(46, 20);
			this->txtAxisMinX->TabIndex = 39;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(15, 204);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(68, 13);
			this->label27->TabIndex = 38;
			this->label27->Text = L"AXIS MAX U";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(15, 178);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(65, 13);
			this->label26->TabIndex = 38;
			this->label26->Text = L"AXIS MIN U";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(15, 126);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(72, 13);
			this->label24->TabIndex = 38;
			this->label24->Text = L"AXIS MIN DE";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(15, 152);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(75, 13);
			this->label25->TabIndex = 38;
			this->label25->Text = L"AXIS MAX DE";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(15, 100);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(83, 13);
			this->label23->TabIndex = 38;
			this->label23->Text = L"AXIS MAX ERR";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(15, 74);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(80, 13);
			this->label22->TabIndex = 38;
			this->label22->Text = L"AXIS MIN ERR";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 48);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 13);
			this->label4->TabIndex = 38;
			this->label4->Text = L"AXIS MAX X - Y";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 13);
			this->label2->TabIndex = 38;
			this->label2->Text = L"AXIS MIN X - Y";
			// 
			// bSTART_GRAPH
			// 
			this->bSTART_GRAPH->Location = System::Drawing::Point(106, 101);
			this->bSTART_GRAPH->Name = L"bSTART_GRAPH";
			this->bSTART_GRAPH->Size = System::Drawing::Size(93, 24);
			this->bSTART_GRAPH->TabIndex = 37;
			this->bSTART_GRAPH->Text = L"START GRAPH";
			this->bSTART_GRAPH->UseVisualStyleBackColor = true;
			this->bSTART_GRAPH->Click += gcnew System::EventHandler(this, &MyForm::bSTART_GRAPH_Click);
			// 
			// bSCROLL
			// 
			this->bSCROLL->Location = System::Drawing::Point(106, 131);
			this->bSCROLL->Name = L"bSCROLL";
			this->bSCROLL->Size = System::Drawing::Size(93, 23);
			this->bSCROLL->TabIndex = 22;
			this->bSCROLL->Text = L"SCROLL";
			this->bSCROLL->UseVisualStyleBackColor = true;
			this->bSCROLL->Click += gcnew System::EventHandler(this, &MyForm::bSCROLL_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(13, 67);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(54, 13);
			this->label18->TabIndex = 34;
			this->label18->Text = L"Scale Out";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(13, 44);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(52, 13);
			this->label17->TabIndex = 34;
			this->label17->Text = L"Scale Vel";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(13, 15);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(50, 13);
			this->label16->TabIndex = 34;
			this->label16->Text = L"Scale Err";
			// 
			// txtScaleOut1
			// 
			this->txtScaleOut1->Location = System::Drawing::Point(74, 67);
			this->txtScaleOut1->Name = L"txtScaleOut1";
			this->txtScaleOut1->Size = System::Drawing::Size(57, 20);
			this->txtScaleOut1->TabIndex = 33;
			this->txtScaleOut1->Text = L"10";
			// 
			// txtScaleVel1
			// 
			this->txtScaleVel1->Location = System::Drawing::Point(74, 41);
			this->txtScaleVel1->Name = L"txtScaleVel1";
			this->txtScaleVel1->Size = System::Drawing::Size(57, 20);
			this->txtScaleVel1->TabIndex = 33;
			this->txtScaleVel1->Text = L"1";
			// 
			// txtScaleErr1
			// 
			this->txtScaleErr1->Location = System::Drawing::Point(74, 15);
			this->txtScaleErr1->Name = L"txtScaleErr1";
			this->txtScaleErr1->Size = System::Drawing::Size(57, 20);
			this->txtScaleErr1->TabIndex = 33;
			this->txtScaleErr1->Text = L"1";
			// 
			// txtKD2
			// 
			this->txtKD2->Location = System::Drawing::Point(131, 87);
			this->txtKD2->Name = L"txtKD2";
			this->txtKD2->Size = System::Drawing::Size(46, 20);
			this->txtKD2->TabIndex = 32;
			// 
			// txtKP2
			// 
			this->txtKP2->Location = System::Drawing::Point(131, 35);
			this->txtKP2->Name = L"txtKP2";
			this->txtKP2->Size = System::Drawing::Size(46, 20);
			this->txtKP2->TabIndex = 30;
			// 
			// txtKI2
			// 
			this->txtKI2->Location = System::Drawing::Point(131, 61);
			this->txtKI2->Name = L"txtKI2";
			this->txtKI2->Size = System::Drawing::Size(46, 20);
			this->txtKI2->TabIndex = 31;
			// 
			// txtKD1
			// 
			this->txtKD1->Location = System::Drawing::Point(51, 87);
			this->txtKD1->Name = L"txtKD1";
			this->txtKD1->Size = System::Drawing::Size(46, 20);
			this->txtKD1->TabIndex = 29;
			// 
			// txtKP1
			// 
			this->txtKP1->Location = System::Drawing::Point(51, 35);
			this->txtKP1->Name = L"txtKP1";
			this->txtKP1->Size = System::Drawing::Size(46, 20);
			this->txtKP1->TabIndex = 27;
			// 
			// txtKI1
			// 
			this->txtKI1->Location = System::Drawing::Point(51, 61);
			this->txtKI1->Name = L"txtKI1";
			this->txtKI1->Size = System::Drawing::Size(46, 20);
			this->txtKI1->TabIndex = 28;
			// 
			// bSETBALL
			// 
			this->bSETBALL->Location = System::Drawing::Point(11, 8);
			this->bSETBALL->Name = L"bSETBALL";
			this->bSETBALL->Size = System::Drawing::Size(93, 24);
			this->bSETBALL->TabIndex = 22;
			this->bSETBALL->Text = L"SET BALL";
			this->bSETBALL->UseVisualStyleBackColor = true;
			this->bSETBALL->Click += gcnew System::EventHandler(this, &MyForm::bSETBALL_Click);
			// 
			// bCALIB
			// 
			this->bCALIB->Location = System::Drawing::Point(7, 160);
			this->bCALIB->Name = L"bCALIB";
			this->bCALIB->Size = System::Drawing::Size(92, 25);
			this->bCALIB->TabIndex = 31;
			this->bCALIB->Text = L"CALIB";
			this->bCALIB->UseVisualStyleBackColor = true;
			this->bCALIB->Click += gcnew System::EventHandler(this, &MyForm::bCALIB_Click);
			// 
			// bClose
			// 
			this->bClose->Location = System::Drawing::Point(205, 100);
			this->bClose->Name = L"bClose";
			this->bClose->Size = System::Drawing::Size(94, 24);
			this->bClose->TabIndex = 43;
			this->bClose->Text = L"CLOSE";
			this->bClose->UseVisualStyleBackColor = true;
			this->bClose->Click += gcnew System::EventHandler(this, &MyForm::bClose_Click);
			// 
			// bSTART_FUZZY
			// 
			this->bSTART_FUZZY->Location = System::Drawing::Point(16, 93);
			this->bSTART_FUZZY->Name = L"bSTART_FUZZY";
			this->bSTART_FUZZY->Size = System::Drawing::Size(90, 23);
			this->bSTART_FUZZY->TabIndex = 39;
			this->bSTART_FUZZY->Text = L"START FUZZY";
			this->bSTART_FUZZY->UseVisualStyleBackColor = true;
			this->bSTART_FUZZY->Click += gcnew System::EventHandler(this, &MyForm::bSTART_FUZZY_Click);
			// 
			// bSTART_PID
			// 
			this->bSTART_PID->Location = System::Drawing::Point(4, 6);
			this->bSTART_PID->Name = L"bSTART_PID";
			this->bSTART_PID->Size = System::Drawing::Size(93, 24);
			this->bSTART_PID->TabIndex = 36;
			this->bSTART_PID->Text = L"START PID";
			this->bSTART_PID->UseVisualStyleBackColor = true;
			this->bSTART_PID->Click += gcnew System::EventHandler(this, &MyForm::bSTART_PID_Click);
			// 
			// bGetBall
			// 
			this->bGetBall->Location = System::Drawing::Point(11, 38);
			this->bGetBall->Name = L"bGetBall";
			this->bGetBall->Size = System::Drawing::Size(93, 26);
			this->bGetBall->TabIndex = 37;
			this->bGetBall->Text = L"GET BALL";
			this->bGetBall->UseVisualStyleBackColor = true;
			this->bGetBall->Click += gcnew System::EventHandler(this, &MyForm::bGetBall_Click);
			// 
			// bShowCam
			// 
			this->bShowCam->Location = System::Drawing::Point(7, 130);
			this->bShowCam->Name = L"bShowCam";
			this->bShowCam->Size = System::Drawing::Size(93, 24);
			this->bShowCam->TabIndex = 36;
			this->bShowCam->Text = L"SHOW CAM";
			this->bShowCam->UseVisualStyleBackColor = true;
			this->bShowCam->Click += gcnew System::EventHandler(this, &MyForm::bShowCam_Click);
			// 
			// bSetPIDFactor
			// 
			this->bSetPIDFactor->Location = System::Drawing::Point(103, 6);
			this->bSetPIDFactor->Name = L"bSetPIDFactor";
			this->bSetPIDFactor->Size = System::Drawing::Size(84, 23);
			this->bSetPIDFactor->TabIndex = 37;
			this->bSetPIDFactor->Text = L"SET";
			this->bSetPIDFactor->UseVisualStyleBackColor = true;
			this->bSetPIDFactor->Click += gcnew System::EventHandler(this, &MyForm::bSetPIDFactor_Click);
			// 
			// bSetFuzzyScaleXY
			// 
			this->bSetFuzzyScaleXY->Location = System::Drawing::Point(116, 94);
			this->bSetFuzzyScaleXY->Name = L"bSetFuzzyScaleXY";
			this->bSetFuzzyScaleXY->Size = System::Drawing::Size(84, 21);
			this->bSetFuzzyScaleXY->TabIndex = 40;
			this->bSetFuzzyScaleXY->Text = L"SET";
			this->bSetFuzzyScaleXY->UseVisualStyleBackColor = true;
			this->bSetFuzzyScaleXY->Click += gcnew System::EventHandler(this, &MyForm::bSetFuzzyScaleXY_Click);
			// 
			// txtScaleVel3
			// 
			this->txtScaleVel3->Location = System::Drawing::Point(200, 40);
			this->txtScaleVel3->Name = L"txtScaleVel3";
			this->txtScaleVel3->Size = System::Drawing::Size(57, 20);
			this->txtScaleVel3->TabIndex = 33;
			this->txtScaleVel3->Text = L"650";
			// 
			// txtScaleVel2
			// 
			this->txtScaleVel2->Location = System::Drawing::Point(137, 40);
			this->txtScaleVel2->Name = L"txtScaleVel2";
			this->txtScaleVel2->Size = System::Drawing::Size(57, 20);
			this->txtScaleVel2->TabIndex = 33;
			this->txtScaleVel2->Text = L"1";
			// 
			// txtScaleErr3
			// 
			this->txtScaleErr3->Location = System::Drawing::Point(200, 14);
			this->txtScaleErr3->Name = L"txtScaleErr3";
			this->txtScaleErr3->Size = System::Drawing::Size(57, 20);
			this->txtScaleErr3->TabIndex = 33;
			this->txtScaleErr3->Text = L"200";
			// 
			// txtScaleErr2
			// 
			this->txtScaleErr2->Location = System::Drawing::Point(137, 14);
			this->txtScaleErr2->Name = L"txtScaleErr2";
			this->txtScaleErr2->Size = System::Drawing::Size(57, 20);
			this->txtScaleErr2->TabIndex = 33;
			this->txtScaleErr2->Text = L"1";
			// 
			// txtScaleOut3
			// 
			this->txtScaleOut3->Location = System::Drawing::Point(200, 66);
			this->txtScaleOut3->Name = L"txtScaleOut3";
			this->txtScaleOut3->Size = System::Drawing::Size(57, 20);
			this->txtScaleOut3->TabIndex = 33;
			this->txtScaleOut3->Text = L"1";
			// 
			// txtScaleOut2
			// 
			this->txtScaleOut2->Location = System::Drawing::Point(137, 66);
			this->txtScaleOut2->Name = L"txtScaleOut2";
			this->txtScaleOut2->Size = System::Drawing::Size(57, 20);
			this->txtScaleOut2->TabIndex = 33;
			this->txtScaleOut2->Text = L"10";
			// 
			// bEXPORT_SETTING
			// 
			this->bEXPORT_SETTING->Location = System::Drawing::Point(205, 49);
			this->bEXPORT_SETTING->Name = L"bEXPORT_SETTING";
			this->bEXPORT_SETTING->Size = System::Drawing::Size(94, 24);
			this->bEXPORT_SETTING->TabIndex = 2;
			this->bEXPORT_SETTING->Text = L"EXPORT";
			this->bEXPORT_SETTING->UseVisualStyleBackColor = true;
			this->bEXPORT_SETTING->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// bIMPORT_SETTING
			// 
			this->bIMPORT_SETTING->Location = System::Drawing::Point(205, 19);
			this->bIMPORT_SETTING->Name = L"bIMPORT_SETTING";
			this->bIMPORT_SETTING->Size = System::Drawing::Size(94, 24);
			this->bIMPORT_SETTING->TabIndex = 2;
			this->bIMPORT_SETTING->Text = L"IMPORT";
			this->bIMPORT_SETTING->UseVisualStyleBackColor = true;
			this->bIMPORT_SETTING->Click += gcnew System::EventHandler(this, &MyForm::bIMPORT_SETTING_Click);
			// 
			// tbAngleX
			// 
			this->tbAngleX->LargeChange = 1;
			this->tbAngleX->Location = System::Drawing::Point(79, 10);
			this->tbAngleX->Minimum = -10;
			this->tbAngleX->Name = L"tbAngleX";
			this->tbAngleX->Size = System::Drawing::Size(110, 45);
			this->tbAngleX->TabIndex = 44;
			this->tbAngleX->Scroll += gcnew System::EventHandler(this, &MyForm::tbAngleX_Scroll);
			// 
			// tbAngleY
			// 
			this->tbAngleY->LargeChange = 1;
			this->tbAngleY->Location = System::Drawing::Point(200, 10);
			this->tbAngleY->Minimum = -10;
			this->tbAngleY->Name = L"tbAngleY";
			this->tbAngleY->Size = System::Drawing::Size(110, 45);
			this->tbAngleY->TabIndex = 44;
			this->tbAngleY->Scroll += gcnew System::EventHandler(this, &MyForm::tbAngleY_Scroll);
			// 
			// tabControlController
			// 
			this->tabControlController->Controls->Add(this->tabPage);
			this->tabControlController->Controls->Add(this->tabPage5);
			this->tabControlController->Controls->Add(this->tabPage1);
			this->tabControlController->Controls->Add(this->tabPage2);
			this->tabControlController->Controls->Add(this->tabPage6);
			this->tabControlController->Location = System::Drawing::Point(12, 12);
			this->tabControlController->Name = L"tabControlController";
			this->tabControlController->SelectedIndex = 0;
			this->tabControlController->Size = System::Drawing::Size(324, 246);
			this->tabControlController->TabIndex = 45;
			// 
			// tabPage
			// 
			this->tabPage->Controls->Add(this->bSetScale);
			this->tabPage->Controls->Add(this->button1);
			this->tabPage->Controls->Add(this->bEXPORT_SETTING);
			this->tabPage->Controls->Add(this->bIMPORT_SETTING);
			this->tabPage->Controls->Add(this->bSTART);
			this->tabPage->Controls->Add(this->cbCOMLIST);
			this->tabPage->Controls->Add(this->bClose);
			this->tabPage->Controls->Add(this->bShowCam);
			this->tabPage->Controls->Add(this->bCONNECT);
			this->tabPage->Controls->Add(this->bSCROLL);
			this->tabPage->Controls->Add(this->txtRECEIVE);
			this->tabPage->Controls->Add(this->bSTART_GRAPH);
			this->tabPage->Controls->Add(this->bSEND);
			this->tabPage->Controls->Add(this->bCALIB);
			this->tabPage->Controls->Add(this->txtSEND);
			this->tabPage->Location = System::Drawing::Point(4, 22);
			this->tabPage->Name = L"tabPage";
			this->tabPage->Padding = System::Windows::Forms::Padding(3);
			this->tabPage->Size = System::Drawing::Size(316, 220);
			this->tabPage->TabIndex = 3;
			this->tabPage->Text = L"SETTING";
			this->tabPage->UseVisualStyleBackColor = true;
			// 
			// bSetScale
			// 
			this->bSetScale->Location = System::Drawing::Point(106, 160);
			this->bSetScale->Name = L"bSetScale";
			this->bSetScale->Size = System::Drawing::Size(93, 25);
			this->bSetScale->TabIndex = 49;
			this->bSetScale->Text = L"SET SCALE";
			this->bSetScale->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(205, 131);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 24);
			this->button1->TabIndex = 47;
			this->button1->Text = L"ABOUT ME";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->trackBar6);
			this->tabPage5->Controls->Add(this->trackBar4);
			this->tabPage5->Controls->Add(this->trackBar2);
			this->tabPage5->Controls->Add(this->tbAngleX);
			this->tabPage5->Controls->Add(this->trackBar5);
			this->tabPage5->Controls->Add(this->label20);
			this->tabPage5->Controls->Add(this->trackBar3);
			this->tabPage5->Controls->Add(this->label19);
			this->tabPage5->Controls->Add(this->trackBar1);
			this->tabPage5->Controls->Add(this->label10);
			this->tabPage5->Controls->Add(this->tbAngleY);
			this->tabPage5->Controls->Add(this->label11);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(316, 220);
			this->tabPage5->TabIndex = 2;
			this->tabPage5->Text = L"MANUAL";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// trackBar6
			// 
			this->trackBar6->LargeChange = 1;
			this->trackBar6->Location = System::Drawing::Point(79, 163);
			this->trackBar6->Minimum = -10;
			this->trackBar6->Name = L"trackBar6";
			this->trackBar6->Size = System::Drawing::Size(110, 45);
			this->trackBar6->TabIndex = 44;
			this->trackBar6->Scroll += gcnew System::EventHandler(this, &MyForm::tbAngleX_Scroll);
			// 
			// trackBar4
			// 
			this->trackBar4->LargeChange = 1;
			this->trackBar4->Location = System::Drawing::Point(79, 112);
			this->trackBar4->Minimum = -10;
			this->trackBar4->Name = L"trackBar4";
			this->trackBar4->Size = System::Drawing::Size(110, 45);
			this->trackBar4->TabIndex = 44;
			this->trackBar4->Scroll += gcnew System::EventHandler(this, &MyForm::tbAngleX_Scroll);
			// 
			// trackBar2
			// 
			this->trackBar2->LargeChange = 1;
			this->trackBar2->Location = System::Drawing::Point(79, 61);
			this->trackBar2->Minimum = -10;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(110, 45);
			this->trackBar2->TabIndex = 44;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &MyForm::tbAngleX_Scroll);
			// 
			// trackBar5
			// 
			this->trackBar5->LargeChange = 1;
			this->trackBar5->Location = System::Drawing::Point(200, 163);
			this->trackBar5->Minimum = -10;
			this->trackBar5->Name = L"trackBar5";
			this->trackBar5->Size = System::Drawing::Size(110, 45);
			this->trackBar5->TabIndex = 44;
			this->trackBar5->Scroll += gcnew System::EventHandler(this, &MyForm::tbAngleY_Scroll);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(6, 172);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(67, 13);
			this->label20->TabIndex = 24;
			this->label20->Text = L"ANGLE 5 - 6";
			// 
			// trackBar3
			// 
			this->trackBar3->LargeChange = 1;
			this->trackBar3->Location = System::Drawing::Point(200, 112);
			this->trackBar3->Minimum = -10;
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(110, 45);
			this->trackBar3->TabIndex = 44;
			this->trackBar3->Scroll += gcnew System::EventHandler(this, &MyForm::tbAngleY_Scroll);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(6, 121);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(67, 13);
			this->label19->TabIndex = 24;
			this->label19->Text = L"ANGLE 3 - 4";
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 1;
			this->trackBar1->Location = System::Drawing::Point(200, 61);
			this->trackBar1->Minimum = -10;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(110, 45);
			this->trackBar1->TabIndex = 44;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::tbAngleY_Scroll);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 70);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 13);
			this->label10->TabIndex = 24;
			this->label10->Text = L"ANGLE 1 - 2";
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->bSetPIDFactor);
			this->tabPage1->Controls->Add(this->bSTART_PID);
			this->tabPage1->Controls->Add(this->txtKD2);
			this->tabPage1->Controls->Add(this->txtKP1);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->txtKI2);
			this->tabPage1->Controls->Add(this->txtKI1);
			this->tabPage1->Controls->Add(this->txtKP2);
			this->tabPage1->Controls->Add(this->txtKD1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(316, 220);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"PID";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->bSetFuzzyScaleXY);
			this->tabPage2->Controls->Add(this->bSTART_FUZZY);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->txtScaleVel3);
			this->tabPage2->Controls->Add(this->txtScaleOut1);
			this->tabPage2->Controls->Add(this->txtScaleVel2);
			this->tabPage2->Controls->Add(this->txtScaleOut2);
			this->tabPage2->Controls->Add(this->txtScaleVel1);
			this->tabPage2->Controls->Add(this->txtScaleOut3);
			this->tabPage2->Controls->Add(this->txtScaleErr3);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->txtScaleErr2);
			this->tabPage2->Controls->Add(this->txtScaleErr1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(316, 220);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"FUZZY";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->bSETBALL);
			this->tabPage6->Controls->Add(this->bGetBall);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(316, 220);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"TRACKING";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// tabControlGraph
			// 
			this->tabControlGraph->Controls->Add(this->tabPageXYGRAPH);
			this->tabControlGraph->Controls->Add(this->tabPageTIMEGRAPH);
			this->tabControlGraph->Controls->Add(this->tabPageMOREGRAPH);
			this->tabControlGraph->Location = System::Drawing::Point(342, 12);
			this->tabControlGraph->Name = L"tabControlGraph";
			this->tabControlGraph->SelectedIndex = 0;
			this->tabControlGraph->Size = System::Drawing::Size(561, 629);
			this->tabControlGraph->TabIndex = 46;
			// 
			// tabPageXYGRAPH
			// 
			this->tabPageXYGRAPH->Controls->Add(this->zedGraphXY);
			this->tabPageXYGRAPH->Location = System::Drawing::Point(4, 22);
			this->tabPageXYGRAPH->Name = L"tabPageXYGRAPH";
			this->tabPageXYGRAPH->Padding = System::Windows::Forms::Padding(3);
			this->tabPageXYGRAPH->Size = System::Drawing::Size(553, 603);
			this->tabPageXYGRAPH->TabIndex = 0;
			this->tabPageXYGRAPH->Text = L"XY GRAPH";
			this->tabPageXYGRAPH->UseVisualStyleBackColor = true;
			// 
			// tabPageTIMEGRAPH
			// 
			this->tabPageTIMEGRAPH->Controls->Add(this->zedGraphY);
			this->tabPageTIMEGRAPH->Controls->Add(this->zedGraphX);
			this->tabPageTIMEGRAPH->Location = System::Drawing::Point(4, 22);
			this->tabPageTIMEGRAPH->Name = L"tabPageTIMEGRAPH";
			this->tabPageTIMEGRAPH->Padding = System::Windows::Forms::Padding(3);
			this->tabPageTIMEGRAPH->Size = System::Drawing::Size(553, 603);
			this->tabPageTIMEGRAPH->TabIndex = 1;
			this->tabPageTIMEGRAPH->Text = L"TIME GRAPH";
			this->tabPageTIMEGRAPH->UseVisualStyleBackColor = true;
			// 
			// zedGraphY
			// 
			this->zedGraphY->Location = System::Drawing::Point(6, 257);
			this->zedGraphY->Name = L"zedGraphY";
			this->zedGraphY->ScrollGrace = 0;
			this->zedGraphY->ScrollMaxX = 0;
			this->zedGraphY->ScrollMaxY = 0;
			this->zedGraphY->ScrollMaxY2 = 0;
			this->zedGraphY->ScrollMinX = 0;
			this->zedGraphY->ScrollMinY = 0;
			this->zedGraphY->ScrollMinY2 = 0;
			this->zedGraphY->Size = System::Drawing::Size(522, 250);
			this->zedGraphY->TabIndex = 1;
			// 
			// zedGraphX
			// 
			this->zedGraphX->Location = System::Drawing::Point(6, 3);
			this->zedGraphX->Name = L"zedGraphX";
			this->zedGraphX->ScrollGrace = 0;
			this->zedGraphX->ScrollMaxX = 0;
			this->zedGraphX->ScrollMaxY = 0;
			this->zedGraphX->ScrollMaxY2 = 0;
			this->zedGraphX->ScrollMinX = 0;
			this->zedGraphX->ScrollMinY = 0;
			this->zedGraphX->ScrollMinY2 = 0;
			this->zedGraphX->Size = System::Drawing::Size(522, 248);
			this->zedGraphX->TabIndex = 0;
			// 
			// tabPageMOREGRAPH
			// 
			this->tabPageMOREGRAPH->Controls->Add(this->zedGraphUY);
			this->tabPageMOREGRAPH->Controls->Add(this->zedGraphDEY);
			this->tabPageMOREGRAPH->Controls->Add(this->zedGraphEY);
			this->tabPageMOREGRAPH->Controls->Add(this->zedGraphUX);
			this->tabPageMOREGRAPH->Controls->Add(this->zedGraphDEX);
			this->tabPageMOREGRAPH->Controls->Add(this->zedGraphEX);
			this->tabPageMOREGRAPH->Location = System::Drawing::Point(4, 22);
			this->tabPageMOREGRAPH->Name = L"tabPageMOREGRAPH";
			this->tabPageMOREGRAPH->Padding = System::Windows::Forms::Padding(3);
			this->tabPageMOREGRAPH->Size = System::Drawing::Size(553, 603);
			this->tabPageMOREGRAPH->TabIndex = 2;
			this->tabPageMOREGRAPH->Text = L"MORE GRAPH";
			this->tabPageMOREGRAPH->UseVisualStyleBackColor = true;
			// 
			// zedGraphUY
			// 
			this->zedGraphUY->Location = System::Drawing::Point(287, 388);
			this->zedGraphUY->Name = L"zedGraphUY";
			this->zedGraphUY->ScrollGrace = 0;
			this->zedGraphUY->ScrollMaxX = 0;
			this->zedGraphUY->ScrollMaxY = 0;
			this->zedGraphUY->ScrollMaxY2 = 0;
			this->zedGraphUY->ScrollMinX = 0;
			this->zedGraphUY->ScrollMinY = 0;
			this->zedGraphUY->ScrollMinY2 = 0;
			this->zedGraphUY->Size = System::Drawing::Size(260, 202);
			this->zedGraphUY->TabIndex = 5;
			// 
			// zedGraphDEY
			// 
			this->zedGraphDEY->Location = System::Drawing::Point(287, 189);
			this->zedGraphDEY->Name = L"zedGraphDEY";
			this->zedGraphDEY->ScrollGrace = 0;
			this->zedGraphDEY->ScrollMaxX = 0;
			this->zedGraphDEY->ScrollMaxY = 0;
			this->zedGraphDEY->ScrollMaxY2 = 0;
			this->zedGraphDEY->ScrollMinX = 0;
			this->zedGraphDEY->ScrollMinY = 0;
			this->zedGraphDEY->ScrollMinY2 = 0;
			this->zedGraphDEY->Size = System::Drawing::Size(260, 193);
			this->zedGraphDEY->TabIndex = 4;
			// 
			// zedGraphEY
			// 
			this->zedGraphEY->Location = System::Drawing::Point(287, 6);
			this->zedGraphEY->Name = L"zedGraphEY";
			this->zedGraphEY->ScrollGrace = 0;
			this->zedGraphEY->ScrollMaxX = 0;
			this->zedGraphEY->ScrollMaxY = 0;
			this->zedGraphEY->ScrollMaxY2 = 0;
			this->zedGraphEY->ScrollMinX = 0;
			this->zedGraphEY->ScrollMinY = 0;
			this->zedGraphEY->ScrollMinY2 = 0;
			this->zedGraphEY->Size = System::Drawing::Size(260, 178);
			this->zedGraphEY->TabIndex = 3;
			// 
			// zedGraphUX
			// 
			this->zedGraphUX->Location = System::Drawing::Point(6, 388);
			this->zedGraphUX->Name = L"zedGraphUX";
			this->zedGraphUX->ScrollGrace = 0;
			this->zedGraphUX->ScrollMaxX = 0;
			this->zedGraphUX->ScrollMaxY = 0;
			this->zedGraphUX->ScrollMaxY2 = 0;
			this->zedGraphUX->ScrollMinX = 0;
			this->zedGraphUX->ScrollMinY = 0;
			this->zedGraphUX->ScrollMinY2 = 0;
			this->zedGraphUX->Size = System::Drawing::Size(275, 202);
			this->zedGraphUX->TabIndex = 2;
			// 
			// zedGraphDEX
			// 
			this->zedGraphDEX->Location = System::Drawing::Point(6, 190);
			this->zedGraphDEX->Name = L"zedGraphDEX";
			this->zedGraphDEX->ScrollGrace = 0;
			this->zedGraphDEX->ScrollMaxX = 0;
			this->zedGraphDEX->ScrollMaxY = 0;
			this->zedGraphDEX->ScrollMaxY2 = 0;
			this->zedGraphDEX->ScrollMinX = 0;
			this->zedGraphDEX->ScrollMinY = 0;
			this->zedGraphDEX->ScrollMinY2 = 0;
			this->zedGraphDEX->Size = System::Drawing::Size(275, 192);
			this->zedGraphDEX->TabIndex = 1;
			// 
			// zedGraphEX
			// 
			this->zedGraphEX->Location = System::Drawing::Point(6, 6);
			this->zedGraphEX->Name = L"zedGraphEX";
			this->zedGraphEX->ScrollGrace = 0;
			this->zedGraphEX->ScrollMaxX = 0;
			this->zedGraphEX->ScrollMaxY = 0;
			this->zedGraphEX->ScrollMaxY2 = 0;
			this->zedGraphEX->ScrollMinX = 0;
			this->zedGraphEX->ScrollMinY = 0;
			this->zedGraphEX->ScrollMinY2 = 0;
			this->zedGraphEX->Size = System::Drawing::Size(275, 178);
			this->zedGraphEX->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label30);
			this->groupBox2->Controls->Add(this->label33);
			this->groupBox2->Controls->Add(this->label32);
			this->groupBox2->Controls->Add(this->label31);
			this->groupBox2->Controls->Add(this->label29);
			this->groupBox2->Controls->Add(this->label28);
			this->groupBox2->Controls->Add(this->txtDisplayAngle6);
			this->groupBox2->Controls->Add(this->txtDisplayAngle5);
			this->groupBox2->Controls->Add(this->txtDisplayAngle4);
			this->groupBox2->Controls->Add(this->txtDisplayAngle3);
			this->groupBox2->Controls->Add(this->txtDisplayAngle2);
			this->groupBox2->Controls->Add(this->txtDisplayAngle1);
			this->groupBox2->Location = System::Drawing::Point(237, 264);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(103, 187);
			this->groupBox2->TabIndex = 48;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"ANGLE";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(3, 79);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(52, 13);
			this->label30->TabIndex = 49;
			this->label30->Text = L"THETA 3";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(3, 157);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(52, 13);
			this->label33->TabIndex = 49;
			this->label33->Text = L"THETA 6";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(3, 131);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(52, 13);
			this->label32->TabIndex = 49;
			this->label32->Text = L"THETA 5";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(3, 105);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(52, 13);
			this->label31->TabIndex = 49;
			this->label31->Text = L"THETA 4";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(3, 53);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(52, 13);
			this->label29->TabIndex = 49;
			this->label29->Text = L"THETA 2";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(3, 27);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(52, 13);
			this->label28->TabIndex = 49;
			this->label28->Text = L"THETA 1";
			// 
			// txtDisplayAngle6
			// 
			this->txtDisplayAngle6->Location = System::Drawing::Point(61, 154);
			this->txtDisplayAngle6->Name = L"txtDisplayAngle6";
			this->txtDisplayAngle6->Size = System::Drawing::Size(34, 20);
			this->txtDisplayAngle6->TabIndex = 0;
			// 
			// txtDisplayAngle5
			// 
			this->txtDisplayAngle5->Location = System::Drawing::Point(61, 128);
			this->txtDisplayAngle5->Name = L"txtDisplayAngle5";
			this->txtDisplayAngle5->Size = System::Drawing::Size(34, 20);
			this->txtDisplayAngle5->TabIndex = 0;
			// 
			// txtDisplayAngle4
			// 
			this->txtDisplayAngle4->Location = System::Drawing::Point(61, 102);
			this->txtDisplayAngle4->Name = L"txtDisplayAngle4";
			this->txtDisplayAngle4->Size = System::Drawing::Size(34, 20);
			this->txtDisplayAngle4->TabIndex = 0;
			// 
			// txtDisplayAngle3
			// 
			this->txtDisplayAngle3->Location = System::Drawing::Point(61, 76);
			this->txtDisplayAngle3->Name = L"txtDisplayAngle3";
			this->txtDisplayAngle3->Size = System::Drawing::Size(34, 20);
			this->txtDisplayAngle3->TabIndex = 0;
			// 
			// txtDisplayAngle2
			// 
			this->txtDisplayAngle2->Location = System::Drawing::Point(62, 50);
			this->txtDisplayAngle2->Name = L"txtDisplayAngle2";
			this->txtDisplayAngle2->Size = System::Drawing::Size(34, 20);
			this->txtDisplayAngle2->TabIndex = 0;
			// 
			// txtDisplayAngle1
			// 
			this->txtDisplayAngle1->Location = System::Drawing::Point(62, 24);
			this->txtDisplayAngle1->Name = L"txtDisplayAngle1";
			this->txtDisplayAngle1->Size = System::Drawing::Size(34, 20);
			this->txtDisplayAngle1->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->txtAxisMaxUY);
			this->groupBox3->Controls->Add(this->txtAxisMinDEY);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->txtAxisMaxUX);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->txtAxisMinDEX);
			this->groupBox3->Controls->Add(this->label22);
			this->groupBox3->Controls->Add(this->txtAxisMinUY);
			this->groupBox3->Controls->Add(this->label23);
			this->groupBox3->Controls->Add(this->txtAxisMaxEY);
			this->groupBox3->Controls->Add(this->label25);
			this->groupBox3->Controls->Add(this->txtAxisMinUX);
			this->groupBox3->Controls->Add(this->label24);
			this->groupBox3->Controls->Add(this->txtAxisMaxEX);
			this->groupBox3->Controls->Add(this->label26);
			this->groupBox3->Controls->Add(this->txtAxisMAXDEY);
			this->groupBox3->Controls->Add(this->label27);
			this->groupBox3->Controls->Add(this->txtAxisMinEY);
			this->groupBox3->Controls->Add(this->txtAxisMinX);
			this->groupBox3->Controls->Add(this->txtAxisMaxDEX);
			this->groupBox3->Controls->Add(this->txtAxisMinY);
			this->groupBox3->Controls->Add(this->txtAxisMinEX);
			this->groupBox3->Controls->Add(this->txtAxisMaxX);
			this->groupBox3->Controls->Add(this->txtAxisMaxY);
			this->groupBox3->Location = System::Drawing::Point(12, 486);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(219, 232);
			this->groupBox3->TabIndex = 49;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"GRAPH";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &MyForm::groupBox3_Enter);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(915, 750);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->tabControlGraph);
			this->Controls->Add(this->tabControlController);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbAngleX))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbAngleY))->EndInit();
			this->tabControlController->ResumeLayout(false);
			this->tabPage->ResumeLayout(false);
			this->tabPage->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabControlGraph->ResumeLayout(false);
			this->tabPageXYGRAPH->ResumeLayout(false);
			this->tabPageTIMEGRAPH->ResumeLayout(false);
			this->tabPageMOREGRAPH->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		//===============================================
		//=====DEFINE====================================
		GraphPane^ myPaneXY = gcnew GraphPane();
		GraphPane^ myPaneX = gcnew GraphPane();
		GraphPane^ myPaneY = gcnew GraphPane();
		GraphPane^ myPaneEX = gcnew GraphPane();
		GraphPane^ myPaneEY = gcnew GraphPane();
		GraphPane^ myPaneDEX = gcnew GraphPane();
		GraphPane^ myPaneDEY = gcnew GraphPane();
		GraphPane^ myPaneUX = gcnew GraphPane();
		GraphPane^ myPaneUY = gcnew GraphPane();

		PointPairList^ PosXList = gcnew PointPairList();
		PointPairList^ PosYList = gcnew PointPairList();
		PointPairList^ PosXYList = gcnew PointPairList();
		PointPairList^ PosEXList = gcnew PointPairList();
		PointPairList^ PosEYList = gcnew PointPairList();
		PointPairList^ PosDEXList = gcnew PointPairList();
		PointPairList^ PosDEYList = gcnew PointPairList();
		PointPairList^ PosUXList = gcnew PointPairList();
		PointPairList^ PosUYList = gcnew PointPairList();
		
		PointPairList^ PosXSetpointList = gcnew PointPairList();
		PointPairList^ PosYSetpointList = gcnew PointPairList();
		PointPairList^ PosXYSetpointList = gcnew PointPairList();
		PointPairList^ PosEXSetpointList = gcnew PointPairList();
		PointPairList^ PosEYSetpointList = gcnew PointPairList();
		PointPairList^ PosDEXSetpointList = gcnew PointPairList();
		PointPairList^ PosDEYSetpointList = gcnew PointPairList();
		PointPairList^ PosUXSetpointList = gcnew PointPairList();
		PointPairList^ PosUYSetpointList = gcnew PointPairList();

		LineItem^ PosXCurve;
		LineItem^ PosYCurve;
		LineItem^ PosXYCurve;
		LineItem^ PosEXCurve;
		LineItem^ PosEYCurve;
		LineItem^ PosDEXCurve;
		LineItem^ PosDEYCurve;
		LineItem^ PosUXCurve;
		LineItem^ PosUYCurve;

		LineItem^ PosXSetpointCurve;
		LineItem^ PosYSetpointCurve;
		LineItem^ PosXYSetpointCurve;
		LineItem^ PosEXSetpointCurve;
		LineItem^ PosEYSetpointCurve;
		LineItem^ PosDEXSetpointCurve;
		LineItem^ PosDEYSetpointCurve;
		LineItem^ PosUXSetpointCurve;
		LineItem^ PosUYSetpointCurve;

		ZedGraph::Scale^ xScaleXY;
		ZedGraph::Scale^ yScaleXY;

		ZedGraph::Scale^ xScaleX;
		ZedGraph::Scale^ yScaleX;

		ZedGraph::Scale^ xScaleY;
		ZedGraph::Scale^ yScaleY;

		ZedGraph::Scale^ xScaleEX;
		ZedGraph::Scale^ yScaleEX;

		ZedGraph::Scale^ xScaleEY;
		ZedGraph::Scale^ yScaleEY;

		ZedGraph::Scale^ xScaleDEX;
		ZedGraph::Scale^ yScaleDEX;

		ZedGraph::Scale^ xScaleDEY;
		ZedGraph::Scale^ yScaleDEY;

		ZedGraph::Scale^ xScaleUX;
		ZedGraph::Scale^ yScaleUX;

		ZedGraph::Scale^ xScaleUY;
		ZedGraph::Scale^ yScaleUY;

	private:
		double posX = 0;
		double posY = 0;
		double errX = 0;
		double errY = 0;
		double pre_errX = 0;
		double pre_errY = 0;
		double velX = 0;
		double velY = 0;
		double angleX = 0;
		double angleY = 0;
		double timeGraph = 0;
		double setpointX = 0;
		double setpointY = 0;
		bool SCROLL_GRAPH = false;
		double scale_errX = 1;
		double scale_errY = 1;
		double scale_velX = 1;
		double scale_velY = 1;
		double scale_outX = 1;
		double scale_outY = 1;
		double KpX = 0;
		double KiX = 0;
		double KdX = 0;
		double KpY = 0;
		double KiY = 0;
		double KdY = 0;
		int processTime = 0;
		int samplingRate = 100;
		//===============================================
		//=======CODE START HERE=========================

#pragma region Declare function 
	private: void findPorts(void)
	{
		// get port names
		array<Object^>^ objectArray = serialPort->GetPortNames();
		// add string array to combobox
		cbCOMLIST->Items->Clear();
		cbCOMLIST->Items->AddRange(objectArray);
	}
	
#pragma endregion

#pragma region PLOTTING GRAPH

	private: void initGraph()
	{
		myPaneXY = zedGraphXY->GraphPane;
		myPaneX = zedGraphX->GraphPane;
		myPaneY = zedGraphY->GraphPane;
		myPaneEX = zedGraphEX->GraphPane;
		myPaneEY = zedGraphEY->GraphPane;
		myPaneDEX = zedGraphDEX->GraphPane;
		myPaneDEY = zedGraphDEY->GraphPane;
		myPaneUX = zedGraphUX->GraphPane;
		myPaneUY = zedGraphUY->GraphPane;
		//==================================================
		xScaleXY = zedGraphXY->GraphPane->XAxis->Scale;
		yScaleXY = zedGraphXY->GraphPane->YAxis->Scale;

		xScaleX = zedGraphX->GraphPane->XAxis->Scale;
		yScaleX = zedGraphX->GraphPane->YAxis->Scale;

		xScaleY = zedGraphY->GraphPane->XAxis->Scale;
		yScaleY = zedGraphY->GraphPane->YAxis->Scale;

		xScaleEX = zedGraphEX->GraphPane->XAxis->Scale;
		yScaleEX = zedGraphEX->GraphPane->YAxis->Scale;

		xScaleEY = zedGraphEY->GraphPane->XAxis->Scale;
		yScaleEY = zedGraphEY->GraphPane->YAxis->Scale;

		xScaleDEX = zedGraphDEX->GraphPane->XAxis->Scale;
		yScaleDEX = zedGraphDEX->GraphPane->YAxis->Scale;

		xScaleDEY = zedGraphDEY->GraphPane->XAxis->Scale;
		yScaleDEY = zedGraphDEY->GraphPane->YAxis->Scale;

		xScaleUX = zedGraphUX->GraphPane->XAxis->Scale;
		yScaleUX = zedGraphUX->GraphPane->YAxis->Scale;

		xScaleUY = zedGraphUY->GraphPane->XAxis->Scale;
		yScaleUY = zedGraphUY->GraphPane->YAxis->Scale;

		//==================================================
		//myPaneXY->Title->Text = "X-Y GRAPH";
		myPaneXY->Title->IsVisible = false;
		myPaneXY->XAxis->Title->Text = "X";
		myPaneXY->YAxis->Title->Text = "Y";

		myPaneX->Title->IsVisible = false;
		myPaneX->XAxis->Title->Text = "Time";
		myPaneX->YAxis->Title->Text = "X";

		myPaneY->Title->IsVisible = false;
		myPaneY->XAxis->Title->Text = "Time";
		myPaneY->YAxis->Title->Text = "Y";

		myPaneEX->Title->IsVisible = false;
		myPaneEX->XAxis->Title->Text = "Time";
		myPaneEX->YAxis->Title->Text = "EX";

		myPaneEY->Title->IsVisible = false;
		myPaneEY->XAxis->Title->Text = "Time";
		myPaneEY->YAxis->Title->Text = "EY";

		myPaneDEX->Title->IsVisible = false;
		myPaneDEX->XAxis->Title->Text = "Time";
		myPaneDEX->YAxis->Title->Text = "DEX";

		myPaneDEY->Title->IsVisible = false;
		myPaneDEY->XAxis->Title->Text = "Time";
		myPaneDEY->YAxis->Title->Text = "DEY";

		myPaneUX->Title->IsVisible = false;
		myPaneUX->XAxis->Title->Text = "Time";
		myPaneUX->YAxis->Title->Text = "UX";

		myPaneUY->Title->IsVisible = false;
		myPaneUY->XAxis->Title->Text = "Time";
		myPaneUY->YAxis->Title->Text = "UY";
		//==================================================

		xScaleXY->Max = 400;
		xScaleXY->Min = 0;
		yScaleXY->Max = 400;
		yScaleXY->Min = 0;

		xScaleX->Max = 1000;
		xScaleX->Min = 0;
		yScaleX->Max = 400;
		yScaleX->Min = 0;

		xScaleY->Max = 1000;
		xScaleY->Min = 0;
		yScaleY->Max = 400;
		yScaleY->Min = 0;

		xScaleEX->Max = 1000;
		xScaleEX->Min = 0;
		yScaleEX->Max = 400;
		yScaleEX->Min = -400;

		xScaleEY->Max = 1000;
		xScaleEY->Min = 0;
		yScaleEY->Max = 400;
		yScaleEY->Min = -400;

		xScaleDEX->Max = 1000;
		xScaleDEX->Min = 0;
		yScaleDEX->Max = 400;
		yScaleDEX->Min = -400;

		xScaleDEY->Max = 1000;
		xScaleDEY->Min = 0;
		yScaleDEY->Max = 400;
		yScaleDEY->Min = -400;

		xScaleUX->Max = 1000;
		xScaleUX->Min = 0;
		yScaleUX->Max = 10;
		yScaleUX->Min = -10;

		xScaleUY->Max = 1000;
		xScaleUY->Min = 0;
		yScaleUY->Max = 10;
		yScaleUY->Min = -10;

		//====================================================
		myPaneXY->IsAlignGrids = true;
		myPaneX->IsAlignGrids = true;
		myPaneY->IsAlignGrids = true;
		myPaneEX->IsAlignGrids = true;
		myPaneEY->IsAlignGrids = true;
		myPaneDEX->IsAlignGrids = true;
		myPaneDEY->IsAlignGrids = true;
		myPaneUX->IsAlignGrids = true;
		myPaneUY->IsAlignGrids = true;

		zedGraphXY->AxisChange();
		zedGraphX->AxisChange();
		zedGraphY->AxisChange();
		zedGraphEX->AxisChange();
		zedGraphEY->AxisChange();
		zedGraphDEX->AxisChange();
		zedGraphDEY->AxisChange();
		zedGraphUX->AxisChange();
		zedGraphUY->AxisChange();
	}
	
	private: void drawXY(double x, double y)
	{
		zedGraphXY->GraphPane->CurveList->Clear();
		PosXYList->Clear();
		PosXYList->Add(x, y);
			
		PosXYSetpointList->Clear();
		PosXYSetpointList->Add(setpointX, setpointY);

		PosXYCurve = myPaneXY->AddCurve("Ball Position", PosXYList, Color::Red, SymbolType::Default);
		PosXYSetpointCurve = myPaneXY->AddCurve("Set point", PosXYSetpointList, Color::Blue, SymbolType::Square);

		zedGraphXY->AxisChange();
		zedGraphXY->Invalidate();
	}
	private: void drawXYT(double x, double y)
	{
		zedGraphX->GraphPane->CurveList->Clear();
		zedGraphY->GraphPane->CurveList->Clear();
		if (timeGraph > xScaleX->Max - 1)
		{
			timeGraph = 0;
			PosXList->Clear();
			PosYList->Clear();

			PosXSetpointList->Clear();
			PosYSetpointList->Clear();
		}
		PosXList->Add(timeGraph, x);
		PosYList->Add(timeGraph, y);

		PosXSetpointList->Add(timeGraph, setpointX);
		PosYSetpointList->Add(timeGraph, setpointY);

		PosXCurve = myPaneX->AddCurve("Pos X", PosXList, Color::Red, SymbolType::None);
		PosXSetpointCurve = myPaneX->AddCurve("Pos Set point X", PosXSetpointList, Color::Blue, SymbolType::None);

		PosYCurve = myPaneY->AddCurve("Pos Y", PosYList, Color::Red, SymbolType::None);
		PosYSetpointCurve = myPaneY->AddCurve("Pos Set point Y", PosYSetpointList, Color::Blue, SymbolType::None);

		timeGraph++;

		zedGraphX->AxisChange();
		zedGraphY->AxisChange();

		zedGraphX->Invalidate();
		zedGraphY->Invalidate();
	}
	private: void drawMORE(double ex, double ey, double dex, double dey, double ux, double uy)
	{
		zedGraphEX->GraphPane->CurveList->Clear();
		zedGraphEY->GraphPane->CurveList->Clear();
		zedGraphDEX->GraphPane->CurveList->Clear();
		zedGraphDEY->GraphPane->CurveList->Clear();
		zedGraphUX->GraphPane->CurveList->Clear();
		zedGraphUY->GraphPane->CurveList->Clear();
		if (timeGraph > xScaleEX->Max - 1)
		{
			timeGraph = 0;
			PosEXList->Clear();
			PosEYList->Clear();
			PosDEXList->Clear();
			PosDEYList->Clear();
			PosUXList->Clear();
			PosUYList->Clear();
		}
		PosEXList->Add(timeGraph, ex);
		PosEYList->Add(timeGraph, ey);
		PosDEXList->Add(timeGraph, dex);
		PosDEYList->Add(timeGraph, dey);
		PosUXList->Add(timeGraph, ux);
		PosUYList->Add(timeGraph, uy);

		PosEXCurve = myPaneEX->AddCurve("Pos EX", PosEXList, Color::Red, SymbolType::None);
		PosEYCurve = myPaneEY->AddCurve("Pos EY", PosEYList, Color::Red, SymbolType::None);
		PosDEXCurve = myPaneDEX->AddCurve("Pos DEX", PosDEXList, Color::Red, SymbolType::None);
		PosDEYCurve = myPaneDEY->AddCurve("Pos DEY", PosDEYList, Color::Red, SymbolType::None);
		PosUXCurve = myPaneUX->AddCurve("Pos UX", PosUXList, Color::Red, SymbolType::None);
		PosUYCurve = myPaneUY->AddCurve("Pos UY", PosUYList, Color::Red, SymbolType::None);

		timeGraph++;

		zedGraphEX->AxisChange();
		zedGraphEY->AxisChange();
		zedGraphDEX->AxisChange();
		zedGraphDEY->AxisChange();
		zedGraphUX->AxisChange();
		zedGraphUY->AxisChange();

		zedGraphEX->Invalidate();
		zedGraphEY->Invalidate();
		zedGraphDEX->Invalidate();
		zedGraphDEY->Invalidate();
		zedGraphUX->Invalidate();
		zedGraphUY->Invalidate();
	}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		findPorts();
		initGraph();
		txtSetpointX->Text = "198";
		txtSetpointY->Text = "214";
		txtErrX->Text = "0";
		txtErrY->Text = "0";
		txtANGLE_X->Text = "0";
		txtANGLE_Y->Text = "0";
		txtSEND->Text = "@0:0$";

		txtKP1->Text = "0";
		txtKI1->Text = "0";
		txtKD1->Text = "0";
		txtKP2->Text = "0";
		txtKI2->Text = "0";
		txtKD2->Text = "0";



		camera.setSize(640, 480);
		camera.setHSVParam(0, 84, 31, 255, 153, 255);
		camera.setCropFrame(118, 16, 400, 400);
		camera.applyCropFrame();
		timerProcessing->Interval = 1;

		Init_Fuzzy();

	}
	private: System::Void bCONNECT_Click(System::Object^  sender, System::EventArgs^  e) {
		if (cbCOMLIST->Text != "")
		{
			if (bCONNECT->Text == "CONNECT")
			{
				bCONNECT->Text = "DISCONNECT";
				cbCOMLIST->Enabled = false;
				serialPort->PortName = cbCOMLIST->Text;
				serialPort->Open();
				//timerUART_Receive->Start();
				//timerUART_Send->Start();
			}
			else
			{
				bCONNECT->Text = "CONNECT";
				cbCOMLIST->Enabled = true;
				serialPort->Close();
				//timerUART_Receive->Stop();
				//timerUART_Send->Stop();
			}
		}
		else
		{
			MessageBox::Show("PLEASE CHOOSE PORT !!!!! ^_^ ");
			//findPorts();
		}
	}

	private: System::Void eUARTSend(System::Object^  sender, System::EventArgs^  e) 
	{
		txtSEND->Text = "@" + txtANGLE_X->Text + ":" + txtANGLE_Y->Text + "$";
	}
	private: System::Void eUARTReceive(System::Object^  sender, System::EventArgs^  e) {
		if (serialPort->IsOpen == true)
		{
			txtRECEIVE->Text = serialPort->ReadLine();
		}
	}


	private: System::Void bSEND_Click(System::Object^  sender, System::EventArgs^  e) {
		if (bSEND->Text == "SEND" && bCONNECT->Text == "DISCONNECT")
		{
			timerUART_Send->Interval = 1;
			timerUART_Send->Start(); 
			bSEND->Text = "STOP SEND";
		}
		else if (bCONNECT->Text == "CONNECT")
		{
			MessageBox::Show("Please connect port !!!");
		}
		else
		{
			bSEND->Text = "SEND";
			timerUART_Send->Stop();
		}
	}


	private: System::Void etimerProcessing(System::Object^  sender, System::EventArgs^  e) {
		camera.getFPS_start();
		camera.getFrame();
		camera.detectBall();

		posX = camera.getX();
		posY = camera.getY();

		errX = setpointX - posX;
		errY = setpointY - posY;

		velX = (errX - pre_errX)*camera.fps_;
		velY = (errY - pre_errY)*camera.fps_;

		pre_errX = errX;
		pre_errY = errY;

		if (bSTART_PID->Text == "STOP PID" && bSTART_FUZZY->Text == "START FUZZY")
		{
			pidX.setPIDPeriod(1 / camera.fps_);
			pidX.setPIDOutputLimit(-10, 10);
			pidX.setPIDParam(System::Convert::ToDouble(txtKP1->Text), System::Convert::ToDouble(txtKI1->Text), System::Convert::ToDouble(txtKD1->Text), 0.01);
			pidX.compute(errX);

			pidY.setPIDPeriod(1 / camera.fps_);
			pidY.setPIDOutputLimit(-10, 10);
			pidY.setPIDParam(System::Convert::ToDouble(txtKP2->Text), System::Convert::ToDouble(txtKI2->Text), System::Convert::ToDouble(txtKD2->Text), 0.01);
			pidY.compute(errY);

			txtANGLE_X->Text = ((int)pidX.getOutput(0)).ToString();
			txtANGLE_Y->Text = (-(int)pidY.getOutput(0)).ToString();
		}
		if (bSTART_PID->Text == "START PID" && bSTART_FUZZY->Text == "STOP FUZZY")
		{
			angleX = Fuzzy_OutPut((float)errX, (float)velX, (float)scale_errX, (float)scale_velX, (float)scale_outX, -10, 10);
			angleY = (-Fuzzy_OutPut((float)errY, (float)velY, (float)scale_errY, (float)scale_velY, (float)scale_outY, -10, 10));
			//txtANGLE_X->Text = Fuzzy_OutPut((float)200, (float)200, (float)scale_errX, (float)scale_velX, (float)scale_outX, -10, 10).ToString();
			//txtANGLE_Y->Text = (-Fuzzy_OutPut((float)200, (float)200, (float)scale_errY, (float)scale_velY, (float)scale_outY, -10, 10)).ToString();
		}
		if (camera.getErrorStr() == "Tracking Object" && bSTART_GRAPH->Text == "STOP GRAPH")
		{
			if (tabPageXYGRAPH->Visible == true)
			{
				drawXY(posX, posY);
			}
			else if (tabPageTIMEGRAPH->Visible == true)
			{
				drawXYT(posX, posY);
			}
			else if (tabPageMOREGRAPH->Visible == true)
			{
				drawMORE(errX, errY, velX, velY, angleX, angleY);
			}
			else {}
		}
		if (bGetBall->Text == "UNGET BALL" /* && camera.getErrorStr() == "Tracking Object" */)
		{
			txtSetpointX->Text = posX.ToString();
			txtSetpointY->Text = posY.ToString();
		}
		txtErrX->Text = errX.ToString();
		txtErrY->Text = errY.ToString();
		txtPosX->Text = posX.ToString();
		txtPosY->Text = posY.ToString();
		txtDErrX->Text = velX.ToString();
		txtDErrY->Text = velY.ToString();
		txtANGLE_X->Text = angleX.ToString();
		txtANGLE_Y->Text = angleY.ToString();
		txtTimeProcess->Text = processTime.ToString() + " ms";
		if (bShowCam->Text == "UNSHOW CAM")
		{
			camera.showCamera(2);
		}
		camera.getFPS_end();
		//camera.fps_ = 30;
		processTime = ((int)(1000 / camera.fps_));
	}
	private: System::Void bSTART_Click(System::Object^  sender, System::EventArgs^  e) {
		if (bSTART->Text == "START CAM")
		{
			timerProcessing->Start();
			bSTART->Text = "STOP CAM";
		}
		else
		{
			bSTART->Text = "START CAM";
			timerProcessing->Stop();
		}
		

	}

	private: System::Void bSCROLL_Click(System::Object^  sender, System::EventArgs^  e) {
		if (bSCROLL->Text == "SCROLL")
		{
			bSCROLL->Text = "BLOCK";

			myPaneXY->Title->Text = "TIMELINE GRAPH";
			myPaneXY->XAxis->Title->Text = "TIME";
			myPaneXY->YAxis->Title->Text = "POSTION";
			xScaleXY->Max = 1000;
			timeGraph = 0;
			PosXList->Clear();
			PosYList->Clear();

			PosXSetpointList->Clear();
			PosYSetpointList->Clear();
		}
		else
		{
			bSCROLL->Text = "SCROLL";

			myPaneXY->Title->Text = "X-Y GRAPH";
			myPaneXY->XAxis->Title->Text = "X";
			myPaneXY->YAxis->Title->Text = "Y";
			xScaleXY->Max = 400;
		}

	}
private: System::Void bSETBALL_Click(System::Object^  sender, System::EventArgs^  e) {
		setpointX = System::Convert::ToDouble(txtSetpointX->Text);
		setpointY = System::Convert::ToDouble(txtSetpointY->Text);
}
private: System::Void bCALIB_Click(System::Object^  sender, System::EventArgs^  e) {
	camera.createTrackbars();
}
private: System::Void txtSEND_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (txtSEND->Text != "" && serialPort->IsOpen == true)
	{
		serialPort->Write(txtSEND->Text);
	}
}
private: System::Void bSTART_PID_Click(System::Object^  sender, System::EventArgs^  e) {
	if (bSTART_PID->Text == "START PID")
	{
		bSTART_PID->Text = "STOP PID";
	}
	else
	{
		bSTART_PID->Text = "START PID";
	}
}
private: System::Void bSTART_GRAPH_Click(System::Object^  sender, System::EventArgs^  e) {
	if (bSTART_GRAPH->Text == "START GRAPH")
	{
		bSTART_GRAPH->Text = "STOP GRAPH";
	}
	else
	{
		bSTART_GRAPH->Text = "START GRAPH";
	}
}
private: System::Void bSTART_FUZZY_Click(System::Object^  sender, System::EventArgs^  e) {
	if (bSTART_FUZZY->Text == "START FUZZY")
	{
		bSTART_FUZZY->Text = "STOP FUZZY";
	}
	else
	{
		bSTART_FUZZY->Text = "START FUZZY";
	}
}
private: System::Void bSetFuzzyScaleXY_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txtScaleErr1->Text == "" || txtScaleErr2->Text == "" || txtScaleErr3->Text == "" ||
		txtScaleErr1->Text == "0" || txtScaleErr2->Text == "0" || txtScaleErr3->Text == "0" ||
		txtScaleVel1->Text == "" || txtScaleVel2->Text == "" || txtScaleVel3->Text == "" ||
		txtScaleVel1->Text == "0" || txtScaleVel2->Text == "0" || txtScaleVel3->Text == "0" ||
		txtScaleOut1->Text == "" || txtScaleOut2->Text == "" || txtScaleOut3->Text == "" ||
		txtScaleOut1->Text == "0" || txtScaleOut2->Text == "0" || txtScaleOut3->Text == "0"
		)
	{
		MessageBox::Show("Invalid input !!!! 'All input must be not null and zero.");
	}
	else
	{
		scale_errX = System::Convert::ToDouble(txtScaleErr1->Text) / System::Convert::ToDouble(txtScaleErr3->Text);
		scale_errY = System::Convert::ToDouble(txtScaleErr2->Text) / System::Convert::ToDouble(txtScaleErr3->Text);

		scale_velX = System::Convert::ToDouble(txtScaleVel1->Text) / System::Convert::ToDouble(txtScaleVel3->Text);
		scale_velY = System::Convert::ToDouble(txtScaleVel2->Text) / System::Convert::ToDouble(txtScaleVel3->Text);

		scale_outX = System::Convert::ToDouble(txtScaleOut1->Text) / System::Convert::ToDouble(txtScaleOut3->Text);
		scale_outY = System::Convert::ToDouble(txtScaleOut2->Text) / System::Convert::ToDouble(txtScaleOut3->Text);
	}


}

private: System::Void bGetBall_Click(System::Object^  sender, System::EventArgs^  e) {
	if (bGetBall->Text == "GET BALL")
	{
		bGetBall->Text = "UNGET BALL";
	}
	else
	{
		bGetBall->Text = "GET BALL";
	}
}

private: System::Void bShowCam_Click(System::Object^  sender, System::EventArgs^  e) {
	if (bShowCam->Text == "SHOW CAM")
	{
		bShowCam->Text = "UNSHOW CAM";
	}
	else
	{
		bShowCam->Text = "SHOW CAM";
		camera.unshowCamera(2);
	}
}
private: System::Void bSetPIDFactor_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txtKP1->Text == "" || txtKI1->Text == "" || txtKD1->Text == "" ||
		txtKP2->Text == "" || txtKI2->Text == "" || txtKD2->Text == ""
		)
	{
		MessageBox::Show("Invalid input !!!! 'All input must be not null.");
	}
	else
	{
		KpX = System::Convert::ToDouble(txtKP1->Text);
		KiX = System::Convert::ToDouble(txtKI1->Text);
		KdX = System::Convert::ToDouble(txtKD1->Text);
		KpY = System::Convert::ToDouble(txtKP2->Text);
		KiY = System::Convert::ToDouble(txtKI2->Text);
		KdY = System::Convert::ToDouble(txtKD2->Text);
	}

}
private: System::Void bClose_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void tbAngleX_Scroll(System::Object^  sender, System::EventArgs^  e) {
	if (bSTART_FUZZY->Text == "START FUZZY" && bSTART_PID->Text == "START PID")
	{
		angleX = tbAngleX->Value;
		//txtANGLE_X->Text = tbAngleX->Value.ToString();
	}
}

private: System::Void tbAngleY_Scroll(System::Object^  sender, System::EventArgs^  e) {
	if (bSTART_FUZZY->Text == "START FUZZY" && bSTART_PID->Text == "START PID")
	{
		//txtANGLE_Y->Text = tbAngleY->Value.ToString();
		angleY = tbAngleY->Value;
	}
}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter = "Text File|*.txt";
	saveFileDialog1->Title = "Save setting to file";
	saveFileDialog1->ShowDialog();

	// If the file name is not an empty string open it for saving.  
	if (saveFileDialog1->FileName != "")
	{
		StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);
		sw->WriteLine("A text file is born!");
		sw->Write("You can use WriteLine");
		sw->WriteLine("...or just Write");
		sw->WriteLine("and do {0} output too.", "formatted");
		sw->WriteLine("You can also send non-text objects:");
		sw->WriteLine(DateTime::Now);
		sw->Close();
	}
}
private: System::Void bIMPORT_SETTING_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
	openFileDialog1->Filter = "Text File|*.txt";
	openFileDialog1->Title = "Load setting file";
	openFileDialog1->ShowDialog();

	// If the file name is not an empty string open it for saving.  
	if (openFileDialog1->FileName != "")
	{
		try
		{
			StreamReader^ din = File::OpenText(openFileDialog1->FileName);

			String^ str;
			int count = 0;
			while ((str = din->ReadLine()) != nullptr)
			{
				count++;
				str = "line "+count.ToString()+": {1}" + str;
			}
			din->Close();
			MessageBox::Show(str);
		}
		catch (Exception^ e)
		{
			if (dynamic_cast<FileNotFoundException^>(e))
				Console::WriteLine("file '{0}' not found", openFileDialog1->FileName);
			else
				Console::WriteLine("problem reading file '{0}'", openFileDialog1->FileName);
		}
	}
}
private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void txtSamplingRate_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (txtSamplingRate->Text != "")
	{
		samplingRate = System::Convert::ToInt32(txtSamplingRate->Text);
		timerProcessing->Interval = samplingRate;
	}
}
};
}