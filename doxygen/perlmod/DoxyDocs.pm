$doxydocs=
{
  classes => [
    {
      name => 'AddFrame',
      base => [
        {
          name => 'AddItemFrame',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      includes => {
        local => 'no',
        name => 'BMAMain.h'
      },
      all_members => [
        {
          name => 'AddFrame',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'AddFrame'
        },
        {
          name => 'AddItemFrame',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'AddItemFrame'
        },
        {
          name => 'ButtonAddItem',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'AddItemFrame'
        },
        {
          name => 'DateItem',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'AddItemFrame'
        },
        {
          name => 'lblDate',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'AddItemFrame'
        },
        {
          name => 'lblWeight',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'AddItemFrame'
        },
        {
          name => 'm_button3',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'AddItemFrame'
        },
        {
          name => 'm_slider2',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'AddItemFrame'
        },
        {
          name => 'm_staticText5',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'AddItemFrame'
        },
        {
          name => 'OnAddItem',
          virtualness => 'virtual',
          protection => 'private',
          scope => 'AddFrame'
        },
        {
          name => 'weightValue',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'AddItemFrame'
        },
        {
          name => '~AddFrame',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'AddFrame'
        },
        {
          name => '~AddItemFrame',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'AddItemFrame'
        }
      ],
      public_methods => {
        members => [
          {
            kind => 'function',
            name => 'AddFrame',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'aframe',
                type => 'wxFrame *'
              }
            ]
          },
          {
            kind => 'function',
            name => '~AddFrame',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          }
        ]
      },
      private_methods => {
        members => [
          {
            kind => 'function',
            name => 'OnAddItem',
            virtualness => 'virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'virtual void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'event',
                type => 'wxCommandEvent &'
              }
            ],
            reimplements => {
              name => 'OnAddItem'
            }
          }
        ]
      },
      brief => {},
      detailed => {}
    },
    {
      name => 'AddItemFrame',
      base => [
        {
          name => 'wxFrame',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      derived => [
        {
          name => 'AddFrame',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      includes => {
        local => 'no',
        name => 'GUIFrame.h'
      },
      all_members => [
        {
          name => 'AddItemFrame',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'AddItemFrame'
        },
        {
          name => 'ButtonAddItem',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'AddItemFrame'
        },
        {
          name => 'DateItem',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'AddItemFrame'
        },
        {
          name => 'lblDate',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'AddItemFrame'
        },
        {
          name => 'lblWeight',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'AddItemFrame'
        },
        {
          name => 'm_button3',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'AddItemFrame'
        },
        {
          name => 'm_slider2',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'AddItemFrame'
        },
        {
          name => 'm_staticText5',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'AddItemFrame'
        },
        {
          name => 'OnAddItem',
          virtualness => 'virtual',
          protection => 'protected',
          scope => 'AddItemFrame'
        },
        {
          name => 'weightValue',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'AddItemFrame'
        },
        {
          name => '~AddItemFrame',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'AddItemFrame'
        }
      ],
      public_methods => {
        members => [
          {
            kind => 'function',
            name => 'AddItemFrame',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'parent',
                type => 'wxWindow *'
              },
              {
                declaration_name => 'id',
                type => 'wxWindowID',
                default_value => 'wxID_ANY'
              },
              {
                declaration_name => 'title',
                type => 'const wxString &',
                default_value => 'wxT("Dodaj wynik pomiaru")'
              },
              {
                declaration_name => 'pos',
                type => 'const wxPoint &',
                default_value => 'wxDefaultPosition'
              },
              {
                declaration_name => 'size',
                type => 'const wxSize &',
                default_value => 'wxSize(509, 134)'
              },
              {
                declaration_name => 'style',
                type => 'long',
                default_value => 'wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL'
              }
            ]
          },
          {
            kind => 'function',
            name => '~AddItemFrame',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          }
        ]
      },
      protected_methods => {
        members => [
          {
            kind => 'function',
            name => 'OnAddItem',
            virtualness => 'virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'virtual void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'event',
                type => 'wxCommandEvent &'
              }
            ],
            reimplemented_by => [
              {
                name => 'OnAddItem'
              }
            ]
          }
        ]
      },
      protected_members => {
        members => [
          {
            kind => 'variable',
            name => 'lblWeight',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxStaticText *'
          },
          {
            kind => 'variable',
            name => 'm_slider2',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxSlider *'
          },
          {
            kind => 'variable',
            name => 'weightValue',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxTextCtrl *'
          },
          {
            kind => 'variable',
            name => 'm_staticText5',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxStaticText *'
          },
          {
            kind => 'variable',
            name => 'lblDate',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxStaticText *'
          },
          {
            kind => 'variable',
            name => 'DateItem',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxDatePickerCtrl *'
          },
          {
            kind => 'variable',
            name => 'ButtonAddItem',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxButton *'
          },
          {
            kind => 'variable',
            name => 'm_button3',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxButton *'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'text',
            content => 'Class '
          },
          {
            type => 'url',
            link => 'class_add_item_frame',
            content => 'AddItemFrame'
          },
          {
            type => 'text',
            content => '. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'BMAApp',
      base => [
        {
          name => 'wxApp',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      includes => {
        local => 'no',
        name => 'BMAApp.h'
      },
      all_members => [
        {
          name => 'OnInit',
          virtualness => 'virtual',
          protection => 'public',
          scope => 'BMAApp'
        }
      ],
      public_methods => {
        members => [
          {
            kind => 'function',
            name => 'OnInit',
            virtualness => 'virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'virtual bool',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          }
        ]
      },
      brief => {},
      detailed => {}
    },
    {
      name => 'BMAFrame',
      base => [
        {
          name => 'GUIFrame',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      includes => {
        local => 'no',
        name => 'BMAMain.h'
      },
      all_members => [
        {
          name => 'BMAFrame',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'BMAFrame'
        },
        {
          name => 'GUIFrame',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GUIFrame'
        },
        {
          name => 'm_ColumnDate',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_ColumnWeight',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_panel1',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_panel2',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_panel3',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_panel4',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_ribbonBar1',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_ribbonPage1',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_ribbonPage2',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_splitter1',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_splitter1OnIdle',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GUIFrame'
        },
        {
          name => 'm_splitter2',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_splitter2OnIdle',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GUIFrame'
        },
        {
          name => 'm_TableData',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_textCtrl2',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'mRibbon_ButtonBarTools',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'mRibbon_PanelDefault',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'OnAddItem',
          virtualness => 'virtual',
          protection => 'private',
          scope => 'BMAFrame'
        },
        {
          name => 'OnClose',
          virtualness => 'virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'OnQuit',
          virtualness => 'virtual',
          protection => 'private',
          scope => 'BMAFrame'
        },
        {
          name => 'OnRefresh',
          virtualness => 'virtual',
          protection => 'private',
          scope => 'BMAFrame'
        },
        {
          name => 'RefreshList',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'BMAFrame'
        },
        {
          name => 'statusBar',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'test',
          virtualness => 'virtual',
          protection => 'private',
          scope => 'BMAFrame'
        },
        {
          name => '~BMAFrame',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'BMAFrame'
        },
        {
          name => '~GUIFrame',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GUIFrame'
        }
      ],
      public_methods => {
        members => [
          {
            kind => 'function',
            name => 'RefreshList',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                type => 'void'
              }
            ]
          },
          {
            kind => 'function',
            name => 'BMAFrame',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'frame',
                type => 'wxFrame *'
              }
            ]
          },
          {
            kind => 'function',
            name => '~BMAFrame',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          }
        ]
      },
      private_methods => {
        members => [
          {
            kind => 'function',
            name => 'OnAddItem',
            virtualness => 'virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'virtual void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'event',
                type => 'wxRibbonButtonBarEvent &'
              }
            ],
            reimplements => {
              name => 'OnAddItem'
            }
          },
          {
            kind => 'function',
            name => 'test',
            virtualness => 'virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'virtual void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'event',
                type => 'wxRibbonButtonBarEvent &'
              }
            ]
          },
          {
            kind => 'function',
            name => 'OnQuit',
            virtualness => 'virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'virtual void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'event',
                type => 'wxRibbonButtonBarEvent &'
              }
            ],
            reimplements => {
              name => 'OnQuit'
            }
          },
          {
            kind => 'function',
            name => 'OnRefresh',
            virtualness => 'virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'virtual void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'event',
                type => 'wxRibbonButtonBarEvent &'
              }
            ],
            reimplements => {
              name => 'OnRefresh'
            }
          }
        ]
      },
      brief => {},
      detailed => {}
    },
    {
      name => 'GUIFrame',
      base => [
        {
          name => 'wxFrame',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      derived => [
        {
          name => 'BMAFrame',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      includes => {
        local => 'no',
        name => 'GUIFrame.h'
      },
      all_members => [
        {
          name => 'GUIFrame',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GUIFrame'
        },
        {
          name => 'm_ColumnDate',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_ColumnWeight',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_panel1',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_panel2',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_panel3',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_panel4',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_ribbonBar1',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_ribbonPage1',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_ribbonPage2',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_splitter1',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_splitter1OnIdle',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GUIFrame'
        },
        {
          name => 'm_splitter2',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_splitter2OnIdle',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GUIFrame'
        },
        {
          name => 'm_TableData',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'm_textCtrl2',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'mRibbon_ButtonBarTools',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'mRibbon_PanelDefault',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'OnAddItem',
          virtualness => 'virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'OnClose',
          virtualness => 'virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'OnQuit',
          virtualness => 'virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'OnRefresh',
          virtualness => 'virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => 'statusBar',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GUIFrame'
        },
        {
          name => '~GUIFrame',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GUIFrame'
        }
      ],
      public_methods => {
        members => [
          {
            kind => 'function',
            name => 'GUIFrame',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'parent',
                type => 'wxWindow *'
              },
              {
                declaration_name => 'id',
                type => 'wxWindowID',
                default_value => 'wxID_ANY'
              },
              {
                declaration_name => 'title',
                type => 'const wxString &',
                default_value => 'wxT("BMA")'
              },
              {
                declaration_name => 'pos',
                type => 'const wxPoint &',
                default_value => 'wxDefaultPosition'
              },
              {
                declaration_name => 'size',
                type => 'const wxSize &',
                default_value => 'wxSize(481, 466)'
              },
              {
                declaration_name => 'style',
                type => 'long',
                default_value => 'wxCAPTION|wxDEFAULT_FRAME_STYLE'
              }
            ]
          },
          {
            kind => 'function',
            name => '~GUIFrame',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'm_splitter2OnIdle',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                type => 'wxIdleEvent &'
              }
            ]
          },
          {
            kind => 'function',
            name => 'm_splitter1OnIdle',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                type => 'wxIdleEvent &'
              }
            ]
          }
        ]
      },
      protected_methods => {
        members => [
          {
            kind => 'function',
            name => 'OnClose',
            virtualness => 'virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'virtual void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'event',
                type => 'wxCloseEvent &'
              }
            ]
          },
          {
            kind => 'function',
            name => 'OnAddItem',
            virtualness => 'virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'virtual void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'event',
                type => 'wxRibbonButtonBarEvent &'
              }
            ],
            reimplemented_by => [
              {
                name => 'OnAddItem'
              }
            ]
          },
          {
            kind => 'function',
            name => 'OnRefresh',
            virtualness => 'virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'virtual void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'event',
                type => 'wxRibbonButtonBarEvent &'
              }
            ],
            reimplemented_by => [
              {
                name => 'OnRefresh'
              }
            ]
          },
          {
            kind => 'function',
            name => 'OnQuit',
            virtualness => 'virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'virtual void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'event',
                type => 'wxRibbonButtonBarEvent &'
              }
            ],
            reimplemented_by => [
              {
                name => 'OnQuit'
              }
            ]
          }
        ]
      },
      protected_members => {
        members => [
          {
            kind => 'variable',
            name => 'statusBar',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxStatusBar *'
          },
          {
            kind => 'variable',
            name => 'm_ribbonBar1',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxRibbonBar *'
          },
          {
            kind => 'variable',
            name => 'm_ribbonPage1',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxRibbonPage *'
          },
          {
            kind => 'variable',
            name => 'mRibbon_PanelDefault',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxRibbonPanel *'
          },
          {
            kind => 'variable',
            name => 'mRibbon_ButtonBarTools',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxRibbonButtonBar *'
          },
          {
            kind => 'variable',
            name => 'm_ribbonPage2',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxRibbonPage *'
          },
          {
            kind => 'variable',
            name => 'm_splitter2',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxSplitterWindow *'
          },
          {
            kind => 'variable',
            name => 'm_panel3',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxPanel *'
          },
          {
            kind => 'variable',
            name => 'm_panel4',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxPanel *'
          },
          {
            kind => 'variable',
            name => 'm_splitter1',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxSplitterWindow *'
          },
          {
            kind => 'variable',
            name => 'm_panel1',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxPanel *'
          },
          {
            kind => 'variable',
            name => 'm_TableData',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxDataViewListCtrl *'
          },
          {
            kind => 'variable',
            name => 'm_ColumnDate',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxDataViewColumn *'
          },
          {
            kind => 'variable',
            name => 'm_ColumnWeight',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxDataViewColumn *'
          },
          {
            kind => 'variable',
            name => 'm_panel2',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxPanel *'
          },
          {
            kind => 'variable',
            name => 'm_textCtrl2',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxTextCtrl *'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'text',
            content => 'Class '
          },
          {
            type => 'url',
            link => 'class_g_u_i_frame',
            content => 'GUIFrame'
          },
          {
            type => 'text',
            content => '. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'wxApp',
      derived => [
        {
          name => 'BMAApp',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {},
      detailed => {}
    },
    {
      name => 'wxFrame',
      derived => [
        {
          name => 'AddItemFrame',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'GUIFrame',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {},
      detailed => {}
    }
  ],
  namespaces => [
    {
      name => 'AutoVersion',
      classes => [
      ],
      namespaces => [
      ],
      brief => {},
      detailed => {}
    }
  ],
  files => [
    {
      name => 'BMAApp.cpp',
      includes => [
        {
          name => 'BMAApp.h',
          ref => '_b_m_a_app_8h'
        },
        {
          name => 'BMAMain.h',
          ref => '_b_m_a_main_8h'
        },
        {
          name => 'wx/textfile.h'
        },
        {
          name => 'wx/file.h'
        },
        {
          name => 'wx/string.h'
        },
        {
          name => 'wx/stdpaths.h'
        },
        {
          name => 'wx/msgdlg.h'
        },
        {
          name => 'wx/wxsqlite3.h'
        }
      ],
      included_by => [
      ],
      functions => {
        members => [
          {
            kind => 'function',
            name => 'IMPLEMENT_APP',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                type => 'BMAApp'
              }
            ]
          }
        ]
      },
      brief => {},
      detailed => {}
    },
    {
      name => 'BMAApp.h',
      includes => [
        {
          name => 'wx/app.h'
        }
      ],
      included_by => [
        {
          name => 'BMAMain.h',
          ref => '_b_m_a_main_8h'
        },
        {
          name => 'BMAApp.cpp',
          ref => '_b_m_a_app_8cpp'
        }
      ],
      brief => {},
      detailed => {}
    },
    {
      name => 'BMAMain.cpp',
      includes => [
        {
          name => 'BMAMain.h',
          ref => '_b_m_a_main_8h'
        },
        {
          name => 'wx/msgdlg.h'
        },
        {
          name => 'sqlite.h',
          ref => 'sqlite_8h'
        },
        {
          name => 'wx/debug.h'
        }
      ],
      included_by => [
      ],
      enums => {
        members => [
          {
            kind => 'enum',
            name => 'wxbuildinfoformat',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            values => [
              {
                name => 'short_f',
                brief => {},
                detailed => {}
              },
              {
                name => 'long_f',
                brief => {},
                detailed => {}
              }
            ]
          }
        ]
      },
      functions => {
        members => [
          {
            kind => 'function',
            name => 'wxbuildinfo',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'wxString',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'format',
                type => 'wxbuildinfoformat'
              }
            ]
          }
        ]
      },
      brief => {},
      detailed => {}
    },
    {
      name => 'BMAMain.h',
      includes => [
        {
          name => 'BMAApp.h',
          ref => '_b_m_a_app_8h'
        },
        {
          name => 'GUIFrame.h',
          ref => '_g_u_i_frame_8h'
        },
        {
          name => 'wx/ribbon/buttonbar.h'
        }
      ],
      included_by => [
        {
          name => 'BMAMain.cpp',
          ref => '_b_m_a_main_8cpp'
        },
        {
          name => 'BMAApp.cpp',
          ref => '_b_m_a_app_8cpp'
        }
      ],
      brief => {},
      detailed => {}
    },
    {
      name => 'GUIFrame.cpp',
      includes => [
        {
          name => 'wx/wxprec.h'
        },
        {
          name => 'wx/wx.h'
        },
        {
          name => 'GUIFrame.h',
          ref => '_g_u_i_frame_8h'
        }
      ],
      included_by => [
      ],
      brief => {},
      detailed => {}
    },
    {
      name => 'GUIFrame.h',
      includes => [
        {
          name => 'wx/artprov.h'
        },
        {
          name => 'wx/xrc/xmlres.h'
        },
        {
          name => 'wx/statusbr.h'
        },
        {
          name => 'wx/gdicmn.h'
        },
        {
          name => 'wx/font.h'
        },
        {
          name => 'wx/colour.h'
        },
        {
          name => 'wx/settings.h'
        },
        {
          name => 'wx/string.h'
        },
        {
          name => 'wx/bitmap.h'
        },
        {
          name => 'wx/image.h'
        },
        {
          name => 'wx/icon.h'
        },
        {
          name => 'wx/ribbon/buttonbar.h'
        },
        {
          name => 'wx/ribbon/panel.h'
        },
        {
          name => 'wx/ribbon/page.h'
        },
        {
          name => 'wx/ribbon/control.h'
        },
        {
          name => 'wx/ribbon/art.h'
        },
        {
          name => 'wx/ribbon/bar.h'
        },
        {
          name => 'wx/sizer.h'
        },
        {
          name => 'wx/panel.h'
        },
        {
          name => 'wx/dataview.h'
        },
        {
          name => 'wx/textctrl.h'
        },
        {
          name => 'wx/splitter.h'
        },
        {
          name => 'wx/frame.h'
        },
        {
          name => 'wx/stattext.h'
        },
        {
          name => 'wx/slider.h'
        },
        {
          name => 'wx/datectrl.h'
        },
        {
          name => 'wx/dateevt.h'
        },
        {
          name => 'wx/button.h'
        }
      ],
      included_by => [
        {
          name => 'BMAMain.h',
          ref => '_b_m_a_main_8h'
        },
        {
          name => 'GUIFrame.cpp',
          ref => '_g_u_i_frame_8cpp'
        }
      ],
      defines => {
        members => [
          {
            kind => 'define',
            name => 'rb_additem',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            initializer => '1000'
          },
          {
            kind => 'define',
            name => 'rb_refresh',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            initializer => '1001'
          },
          {
            kind => 'define',
            name => 'www',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            initializer => '1002'
          },
          {
            kind => 'define',
            name => 'rb_close',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            initializer => '1003'
          }
        ]
      },
      brief => {},
      detailed => {}
    },
    {
      name => 'sqlite.h',
      includes => [
        {
          name => 'wx/wxsqlite3.h'
        }
      ],
      included_by => [
        {
          name => 'BMAMain.cpp',
          ref => '_b_m_a_main_8cpp'
        }
      ],
      functions => {
        members => [
          {
            kind => 'function',
            name => 'initDB',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {
              doc => [
                {
                  type => 'text',
                  content => '< Inicjalizacja bazy danych '
                }
              ]
            },
            type => 'wxSQLite3Database *',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          }
        ]
      },
      brief => {},
      detailed => {}
    },
    {
      name => 'version.h',
      includes => [
      ],
      included_by => [
      ],
      defines => {
        members => [
          {
            kind => 'define',
            name => 'DATE',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            initializer => '"25"'
          },
          {
            kind => 'define',
            name => 'MONTH',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            initializer => '"08"'
          },
          {
            kind => 'define',
            name => 'YEAR',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            initializer => '"2014"'
          },
          {
            kind => 'define',
            name => 'UBUNTU_VERSION_STYLE',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            initializer => '"14.08"'
          },
          {
            kind => 'define',
            name => 'STATUS',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            initializer => '"Alpha"'
          },
          {
            kind => 'define',
            name => 'STATUS_SHORT',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            initializer => '"a"'
          },
          {
            kind => 'define',
            name => 'MAJOR',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            initializer => '0'
          },
          {
            kind => 'define',
            name => 'MINOR',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            initializer => '0'
          },
          {
            kind => 'define',
            name => 'BUILD',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            initializer => '0'
          },
          {
            kind => 'define',
            name => 'REVISION',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            initializer => '0'
          },
          {
            kind => 'define',
            name => 'BUILDS_COUNT',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            initializer => '8'
          },
          {
            kind => 'define',
            name => 'RC_FILEVERSION',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            initializer => '0,0,0,0'
          },
          {
            kind => 'define',
            name => 'RC_FILEVERSION_STRING',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            initializer => '"0, 0, 0, 0\\0"'
          },
          {
            kind => 'define',
            name => 'FULLVERSION_STRING',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            initializer => '"0.0.0.0"'
          },
          {
            kind => 'define',
            name => 'BUILD_HISTORY',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            initializer => '0'
          }
        ]
      },
      brief => {},
      detailed => {}
    }
  ],
  groups => [
  ],
  pages => [
  ]
};
1;
