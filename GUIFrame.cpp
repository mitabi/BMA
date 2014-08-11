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
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	m_ribbonBar1 = new wxRibbonBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxRIBBON_BAR_DEFAULT_STYLE|wxNO_BORDER );
	m_ribbonBar1->SetArtProvider(new wxRibbonDefaultArtProvider); 
	m_ribbonPage1 = new wxRibbonPage( m_ribbonBar1, wxID_ANY, wxT("MyRibbonPage") , wxNullBitmap , 0 );
	mRibbon_PanelDefault = new wxRibbonPanel( m_ribbonPage1, wxID_ANY, wxT("Narzędzia") , wxNullBitmap , wxDefaultPosition, wxDefaultSize, wxRIBBON_PANEL_DEFAULT_STYLE|wxNO_BORDER );
	mRibbon_ButtonBarTools = new wxRibbonButtonBar( mRibbon_PanelDefault, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	mRibbon_ButtonBarTools->AddButton( wxID_ANY, wxT("Dodaj wpis"), wxArtProvider::GetBitmap( wxART_PASTE, wxART_BUTTON ), wxEmptyString);
	mRibbon_ButtonBarTools->AddButton( wxID_ANY, wxT("Wyjście"), wxArtProvider::GetBitmap( wxART_QUIT, wxART_BUTTON ), wxEmptyString);
	m_ribbonBar1->Realize();
	
	bSizer1->Add( m_ribbonBar1, 0, wxEXPAND, 5 );
	
	m_TableData = new wxDataViewListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0|wxFULL_REPAINT_ON_RESIZE|wxNO_BORDER );
	m_ColumnDate = m_TableData->AppendTextColumn( wxT("Data") ); 
	m_ColumnWeight = m_TableData->AppendTextColumn( wxT("Waga") ); 
	bSizer1->Add( m_TableData, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer1 );
	this->Layout();
	statusBar = this->CreateStatusBar( 2, wxST_SIZEGRIP, wxID_ANY );
	statusBar->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	statusBar->SetBackgroundColour( wxColour( 213, 223, 236 ) );
	
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
	this->Connect( wxID_ANY, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( GUIFrame::OnAddItem ) );
	this->Connect( wxID_ANY, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( GUIFrame::OnQuit ) );
}

GUIFrame::~GUIFrame()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( GUIFrame::OnAddItem ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( GUIFrame::OnQuit ) );
	
}
