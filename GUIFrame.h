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

///////////////////////////////////////////////////////////////////////////


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
		
		GUIFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("BMA"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 481,466 ), long style = wxDEFAULT_FRAME_STYLE );
		
		~GUIFrame();
	
};

#endif //__GUIFRAME_H__
