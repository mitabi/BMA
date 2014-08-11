///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun  5 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUIDIALOG_H__
#define __GUIDIALOG_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/ribbon/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/ribbon/buttonbar.h>
#include <wx/ribbon/page.h>
#include <wx/ribbon/control.h>
#include <wx/ribbon/art.h>
#include <wx/ribbon/bar.h>
#include <wx/dataview.h>
#include <wx/sizer.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class GUIDialog
///////////////////////////////////////////////////////////////////////////////
class GUIDialog : public wxDialog 
{
	private:
	
	protected:
		wxRibbonBar* RibbonBar;
		wxRibbonPage* RibbonPageDefault;
		wxRibbonPanel* m_ribbonPanel2;
		wxRibbonPanel* RibbonPanelHelp;
		wxRibbonButtonBar* m_ribbonButtonBar3;
		wxRibbonPanel* RibbonPanelExit;
		wxRibbonButtonBar* RibbonButtonBarExit;
		wxDataViewListCtrl* m_dataViewListCtrl2;
		wxDataViewColumn* m_dataViewListColumn1;
		wxDataViewColumn* m_dataViewListColumn2;
		wxDataViewColumn* m_dataViewListColumn3;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnQuit( wxRibbonButtonBarEvent& event ) { event.Skip(); }
		
	
	public:
		
		GUIDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("BMA"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 722,586 ), long style = wxCLOSE_BOX|wxDEFAULT_DIALOG_STYLE|wxDIALOG_NO_PARENT|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~GUIDialog();
	
};

#endif //__GUIDIALOG_H__
