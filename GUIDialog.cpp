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

#include "GUIDialog.h"

///////////////////////////////////////////////////////////////////////////

GUIDialog::GUIDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* RibbonBarSizer;
	RibbonBarSizer = new wxBoxSizer( wxVERTICAL );
	
	RibbonBar = new wxRibbonBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxRIBBON_BAR_DEFAULT_STYLE );
	RibbonBar->SetArtProvider(new wxRibbonDefaultArtProvider); 
	RibbonPageDefault = new wxRibbonPage( RibbonBar, wxID_ANY, wxT("MyRibbonPage") , wxNullBitmap , 0 );
	m_ribbonPanel2 = new wxRibbonPanel( RibbonPageDefault, wxID_ANY, wxT("MyRibbonPanel") , wxNullBitmap , wxDefaultPosition, wxDefaultSize, wxRIBBON_PANEL_DEFAULT_STYLE );
	RibbonPanelHelp = new wxRibbonPanel( RibbonPageDefault, wxID_ANY, wxT("Pomoc") , wxNullBitmap , wxDefaultPosition, wxDefaultSize, wxRIBBON_PANEL_DEFAULT_STYLE );
	m_ribbonButtonBar3 = new wxRibbonButtonBar( RibbonPanelHelp, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_ribbonButtonBar3->AddDropdownButton( wxID_ANY, wxT("Pomoc"), wxArtProvider::GetBitmap( wxART_HELP_BOOK, wxART_FRAME_ICON ), wxEmptyString);
	RibbonPanelExit = new wxRibbonPanel( RibbonPageDefault, wxID_ANY, wxT("Wyjście") , wxNullBitmap , wxDefaultPosition, wxDefaultSize, wxRIBBON_PANEL_DEFAULT_STYLE );
	RibbonButtonBarExit = new wxRibbonButtonBar( RibbonPanelExit, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	RibbonButtonBarExit->AddButton( wxID_ANY, wxT("Wyjście"), wxArtProvider::GetBitmap( wxART_QUIT, wxART_OTHER ), wxEmptyString);
	RibbonBar->Realize();
	
	RibbonBarSizer->Add( RibbonBar, 0, wxEXPAND, 5 );
	
	m_dataViewListCtrl2 = new wxDataViewListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_dataViewListColumn1 = m_dataViewListCtrl2->AppendTextColumn( wxT("Data") ); 
	m_dataViewListColumn2 = m_dataViewListCtrl2->AppendTextColumn( wxT("Waga") ); 
	m_dataViewListColumn3 = m_dataViewListCtrl2->AppendTextColumn( wxT("BMI") ); 
	RibbonBarSizer->Add( m_dataViewListCtrl2, 0, wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );
	
	
	bSizer3->Add( RibbonBarSizer, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer3 );
	this->Layout();
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIDialog::OnClose ) );
	this->Connect( wxID_ANY, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( GUIDialog::OnQuit ) );
}

GUIDialog::~GUIDialog()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIDialog::OnClose ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( GUIDialog::OnQuit ) );
	
}
