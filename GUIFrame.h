///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun  5 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUIFRAME_H__
#define __GUIFRAME_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/ribbon/buttonbar.h>
#include <wx/ribbon/panel.h>
#include <wx/ribbon/page.h>
#include <wx/ribbon/control.h>
#include <wx/ribbon/art.h>
#include <wx/ribbon/bar.h>
#include <wx/dataview.h>
#include <wx/sizer.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/slider.h>
#include <wx/textctrl.h>
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/button.h>

///////////////////////////////////////////////////////////////////////////

#define rb_additem 1000
#define ww 1001
#define www 1002
#define rb_close 1003

///////////////////////////////////////////////////////////////////////////////
/// Class GUIFrame
///////////////////////////////////////////////////////////////////////////////
class GUIFrame : public wxFrame 
{
	private:
	
	protected:
		wxRibbonBar* m_ribbonBar1;
		wxRibbonPage* m_ribbonPage1;
		wxRibbonPanel* mRibbon_PanelDefault;
		wxRibbonButtonBar* mRibbon_ButtonBarTools;
		wxDataViewListCtrl* m_TableData;
		wxDataViewColumn* m_ColumnDate;
		wxDataViewColumn* m_ColumnWeight;
		wxStatusBar* statusBar;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnAddItem( wxRibbonButtonBarEvent& event ) { event.Skip(); }
		virtual void OnQuit( wxRibbonButtonBarEvent& event ) { event.Skip(); }
		
	
	public:
		
		GUIFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("BMA"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 481,466 ), long style = wxCAPTION|wxDEFAULT_FRAME_STYLE );
		
		~GUIFrame();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class AddItemFrame
///////////////////////////////////////////////////////////////////////////////
class AddItemFrame : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* lblWeight;
		wxSlider* m_slider2;
		wxTextCtrl* weightValue;
		wxStaticText* m_staticText5;
		wxStaticText* lblDate;
		wxDatePickerCtrl* DateItem;
		wxButton* ButtonAddItem;
		wxButton* m_button3;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnAddItem( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		AddItemFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("test"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 509,134 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~AddItemFrame();
	
};

#endif //__GUIFRAME_H__
