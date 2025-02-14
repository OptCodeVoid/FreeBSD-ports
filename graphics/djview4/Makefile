PORTNAME=	djview
PORTVERSION=	4.12
PORTREVISION=	2
CATEGORIES=	graphics
MASTER_SITES=	SF/djvu/DjView/${PORTVERSION}

MAINTAINER=	nc@FreeBSD.org
COMMENT=	Standalone Djvu viewer and plugin based on Qt toolkit

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BROKEN_riscv64=		fails to build: ./npsdk/prcpucfg.h:751:2: Unknown CPU architecture

LIB_DEPENDS=	libdjvulibre.so:graphics/djvulibre \
		libtiff.so:graphics/tiff

USES=		autoreconf desktop-file-utils gettext-runtime gl gmake gnome \
		libtool localbase pkgconfig qt:5 webplugin:native xorg
USE_GL=		gl
USE_GNOME=	glib20
USE_QT=		core gui network opengl printsupport widgets \
		buildtools_build linguisttools_build qmake_build
USE_XORG=	sm ice xext xt

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LRELEASE="${LRELEASE}" LUPDATE="${LUPDATE}"

INSTALL_TARGET=	install-strip
WRKSRC=		${WRKDIR}/${PORTNAME}${PORTVERSION:R}-${PORTVERSION}

WEBPLUGIN_DIR=		${PREFIX}/lib/djview4/plugins
WEBPLUGIN_FILES=	nsdejavu.so

BINARY_ALIAS=	qmake=${QMAKE}

post-patch:
# Use prebuilt icons, without using conversion tool
	@${REINPLACE_CMD} -e 's/conversion_tool=[[:alpha:]]*/conversion_tool=no/' \
		${WRKSRC}/configure.ac
	@${REINPLACE_CMD} -e \
		'/CXXFLAGS=$$/s|^|#| ; \
		 /CFLAGS=$$/s|^|#| ; \
		 s|$$OPTS -O2|$$OPTS|' ${WRKSRC}/config/acinclude.m4
	@${REINPLACE_CMD} -e \
		's|FLAGS+=|FLAGS_RELEASE=|' ${WRKSRC}/src/Makefile.am
# Change plugins directory
# Add GLIB cflags and libs (including -lX*)
	@${REINPLACE_CMD} -e '/^pluginsdir/s/mozilla/djview4/ ; \
		/NSDEJAVU_CFLAGS/s|$$| $$(GLIB_CFLAGS)| ; \
		/NSDEJAVU_LIBS/s|$$| $$(GLIB_LIBS) -lXt -lXext|' \
		${WRKSRC}/nsdejavu/Makefile.am

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/djview
# Create a symbolic link to match desktop file exec name
	${LN} -sf djview ${STAGEDIR}${PREFIX}/bin/djview4

.include <bsd.port.mk>
