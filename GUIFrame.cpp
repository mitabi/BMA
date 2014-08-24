///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun  5 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif //WX_PRECOMP

#include "GUIFrame.h"

///////////////////////////////////////////////////////////////////////////

GUIFrame::GUIFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
    this->SetSizeHints( wxDefaultSize, wxDefaultSize );
    this->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
    this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

    statusBar = this->CreateStatusBar( 2, wxST_SIZEGRIP, wxID_ANY );
    statusBar->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
    statusBar->SetBackgroundColour( wxColour( 193, 208, 227 ) );

    wxBoxSizer* bSizer1;
    bSizer1 = new wxBoxSizer( wxVERTICAL );

    m_ribbonBar1 = new wxRibbonBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxRIBBON_BAR_DEFAULT_STYLE|wxNO_BORDER );
    m_ribbonBar1->SetArtProvider(new wxRibbonDefaultArtProvider);
    m_ribbonPage1 = new wxRibbonPage( m_ribbonBar1, wxID_ANY, wxT("MyRibbonPage") , wxNullBitmap , 0 );
    m_ribbonBar1->SetActivePage( m_ribbonPage1 );
    mRibbon_PanelDefault = new wxRibbonPanel( m_ribbonPage1, wxID_ANY, wxT("Narzędzia") , wxNullBitmap , wxDefaultPosition, wxDefaultSize, wxRIBBON_PANEL_DEFAULT_STYLE|wxNO_BORDER );
    mRibbon_ButtonBarTools = new wxRibbonButtonBar( mRibbon_PanelDefault, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), 0 );
    mRibbon_ButtonBarTools->AddButton( rb_additem, wxT("Dodaj wpis"), wxArtProvider::GetBitmap( wxART_ADD_BOOKMARK, wxART_MENU ), wxEmptyString);
    mRibbon_ButtonBarTools->AddButton( rb_refresh, wxT("Odśwież"), wxArtProvider::GetBitmap( wxART_HELP_FOLDER, wxART_HELP_BROWSER ), wxEmptyString);
    mRibbon_ButtonBarTools->AddButton( www, wxT("MyRibbonButton"), wxArtProvider::GetBitmap( wxART_GO_FORWARD, wxART_BUTTON ), wxEmptyString);
    mRibbon_ButtonBarTools->AddButton( rb_close, wxT("Zamknij"), wxArtProvider::GetBitmap( wxART_QUIT, wxART_HELP_BROWSER ), wxEmptyString);
    m_ribbonPage2 = new wxRibbonPage( m_ribbonBar1, wxID_ANY, wxT("MyRibbonPage") , wxNullBitmap , 0 );
    m_ribbonBar1->Realize();

    bSizer1->Add( m_ribbonBar1, 0, wxEXPAND, 5 );

    wxBoxSizer* bSizer4;
    bSizer4 = new wxBoxSizer( wxVERTICAL );

    m_splitter2 = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D );
    m_splitter2->Connect( wxEVT_IDLE, wxIdleEventHandler( GUIFrame::m_splitter2OnIdle ), NULL, this );

    m_panel3 = new wxPanel( m_splitter2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    wxBoxSizer* bSizer9;
    bSizer9 = new wxBoxSizer( wxVERTICAL );


    bSizer9->Add( 0, 0, 1, wxEXPAND, 5 );


    m_panel3->SetSizer( bSizer9 );
    m_panel3->Layout();
    bSizer9->Fit( m_panel3 );
    m_panel4 = new wxPanel( m_splitter2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    wxBoxSizer* bSizer10;
    bSizer10 = new wxBoxSizer( wxVERTICAL );

    m_splitter1 = new wxSplitterWindow( m_panel4, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D );
    m_splitter1->Connect( wxEVT_IDLE, wxIdleEventHandler( GUIFrame::m_splitter1OnIdle ), NULL, this );

    m_panel1 = new wxPanel( m_splitter1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    wxBoxSizer* bSizer6;
    bSizer6 = new wxBoxSizer( wxVERTICAL );

    m_TableData = new wxDataViewListCtrl( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxDV_HORIZ_RULES|wxDV_ROW_LINES|wxDV_VARIABLE_LINE_HEIGHT|wxDV_VERT_RULES|wxNO_BORDER );
    m_TableData->SetFont( wxFont( 9, 74, 90, 90, false, wxT("Arial") ) );
    m_TableData->SetForegroundColour( wxColour( 0, 0, 0 ) );
    m_TableData->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

    m_ColumnDate = m_TableData->AppendTextColumn( wxT("Data") );
    m_ColumnWeight = m_TableData->AppendTextColumn( wxT("Waga") );
    bSizer6->Add( m_TableData, 1, wxEXPAND, 5 );


    m_panel1->SetSizer( bSizer6 );
    m_panel1->Layout();
    bSizer6->Fit( m_panel1 );
    m_panel2 = new wxPanel( m_splitter1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    wxBoxSizer* bSizer7;
    bSizer7 = new wxBoxSizer( wxVERTICAL );

    m_textCtrl2 = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_NO_VSCROLL|wxTE_READONLY|wxTE_WORDWRAP );
    bSizer7->Add( m_textCtrl2, 1, wxEXPAND, 5 );


    m_panel2->SetSizer( bSizer7 );
    m_panel2->Layout();
    bSizer7->Fit( m_panel2 );
    m_splitter1->SplitVertically( m_panel1, m_panel2, 0 );
    bSizer10->Add( m_splitter1, 1, wxEXPAND, 5 );


    m_panel4->SetSizer( bSizer10 );
    m_panel4->Layout();
    bSizer10->Fit( m_panel4 );
    m_splitter2->SplitHorizontally( m_panel3, m_panel4, 0 );
    bSizer4->Add( m_splitter2, 1, wxEXPAND, 5 );


    bSizer1->Add( bSizer4, 1, wxEXPAND, 5 );


    this->SetSizer( bSizer1 );
    this->Layout();

    // Connect Events
    this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
    this->Connect( rb_additem, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( GUIFrame::OnAddItem ) );
    this->Connect( rb_refresh, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( GUIFrame::OnRefresh ) );
    this->Connect( rb_close, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( GUIFrame::OnQuit ) );
}

GUIFrame::~GUIFrame()
{
    // Disconnect Events
    this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
    this->Disconnect( rb_additem, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( GUIFrame::OnAddItem ) );
    this->Disconnect( rb_refresh, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( GUIFrame::OnRefresh ) );
    this->Disconnect( rb_close, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( GUIFrame::OnQuit ) );

}

AddItemFrame::AddItemFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
    this->SetSizeHints( wxDefaultSize, wxDefaultSize );
    this->SetBackgroundColour( wxColour( 193, 208, 227 ) );

    wxBoxSizer* bSizer4;
    bSizer4 = new wxBoxSizer( wxVERTICAL );

    wxFlexGridSizer* fgSizer3;
    fgSizer3 = new wxFlexGridSizer( 2, 4, 0, 0 );
    fgSizer3->SetFlexibleDirection( wxBOTH );
    fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

    lblWeight = new wxStaticText( this, wxID_ANY, wxT("Waga"), wxDefaultPosition, wxDefaultSize, 0 );
    lblWeight->Wrap( -1 );
    fgSizer3->Add( lblWeight, 0, wxALL, 5 );

    m_slider2 = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
    m_slider2->SetMinSize( wxSize( 300,-1 ) );

    fgSizer3->Add( m_slider2, 0, wxALL, 5 );

    weightValue = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    fgSizer3->Add( weightValue, 0, wxALL|wxEXPAND, 5 );

    m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("kg"), wxDefaultPosition, wxDefaultSize, 0 );
    m_staticText5->Wrap( -1 );
    fgSizer3->Add( m_staticText5, 0, wxALL|wxEXPAND, 5 );

    lblDate = new wxStaticText( this, wxID_ANY, wxT("Data"), wxDefaultPosition, wxDefaultSize, 0 );
    lblDate->Wrap( -1 );
    fgSizer3->Add( lblDate, 0, wxALL, 5 );


    fgSizer3->Add( 0, 0, 1, wxEXPAND, 5 );

    DateItem = new wxDatePickerCtrl( this, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
    fgSizer3->Add( DateItem, 0, wxALL|wxEXPAND, 5 );


    fgSizer3->Add( 0, 0, 1, wxEXPAND, 5 );


    bSizer4->Add( fgSizer3, 0, wxEXPAND, 5 );

    wxBoxSizer* bSizer5;
    bSizer5 = new wxBoxSizer( wxHORIZONTAL );

    ButtonAddItem = new wxButton( this, wxID_ANY, wxT("Dodaj"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizer5->Add( ButtonAddItem, 1, wxALIGN_CENTER_VERTICAL|wxEXPAND|wxALL, 5 );

    m_button3 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizer5->Add( m_button3, 1, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );


    bSizer4->Add( bSizer5, 0, wxEXPAND, 5 );


    this->SetSizer( bSizer4 );
    this->Layout();

    this->Centre( wxBOTH );

    // Connect Events
    ButtonAddItem->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AddItemFrame::OnAddItem ), NULL, this );
}

AddItemFrame::~AddItemFrame()
{
    // Disconnect Events
    ButtonAddItem->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AddItemFrame::OnAddItem ), NULL, this );

}
