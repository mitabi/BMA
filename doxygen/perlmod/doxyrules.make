DOXY_EXEC_PATH = D:/cpp/Projekty/WxWidgets/BMA/doxygen
DOXYFILE = D:/cpp/Projekty/WxWidgets/BMA/doxygen/doxyfile
DOXYDOCS_PM = D:/cpp/Projekty/WxWidgets/BMA/doxygen/perlmod/DoxyDocs.pm
DOXYSTRUCTURE_PM = D:/cpp/Projekty/WxWidgets/BMA/doxygen/perlmod/DoxyStructure.pm
DOXYRULES = D:/cpp/Projekty/WxWidgets/BMA/doxygen/perlmod/doxyrules.make

.PHONY: clean-perlmod
clean-perlmod::
	rm -f $(DOXYSTRUCTURE_PM) \
	$(DOXYDOCS_PM)

$(DOXYRULES) \
$(DOXYMAKEFILE) \
$(DOXYSTRUCTURE_PM) \
$(DOXYDOCS_PM): \
	$(DOXYFILE)
	cd $(DOXY_EXEC_PATH) ; doxygen "$<"
