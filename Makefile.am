SUBDIRS = src

EXTRA_DIST =		\
	autogen.sh

# These are files checked into Git that we don't want to distribute
DIST_EXCLUDE =					\
	.gitignore

distcheck-hook:
	@echo "Checking disted files against files in git"
	@failed=false; \
	exclude=`(for p in $(DIST_EXCLUDE) ; do echo --exclude=$$p ; done)`; \
	for f in `cd $(srcdir) && git ls-files $$exclude` ; do \
		if ! test -e $(distdir)/$$f ; then \
			echo File missing from distribution: $$f ; \
			failed=true ; \
		fi \
	done ; \
	if $$failed ; then \
		exit 1 ; \
	fi
