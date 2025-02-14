PORTNAME=	httrack
PORTVERSION=	3.49.2
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	https://download.httrack.com/ \
		https://mirror.httrack.com/ \
		https://mirror.httrack.com/historical/ \
		http://download.httrack.com/ \
		http://mirror.httrack.com/ \
		http://mirror.httrack.com/historical/ \
		LOCAL/sunpoet

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Easy-to-use offline browser utility and website copier

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

OPTIONS_DEFINE=	DOCS ICONS
OPTIONS_SUB=	yes

CONFIGURE_ARGS=	--docdir=${DOCSDIR} --with-zlib=/usr
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	${PREFIX}/lib/httrack
USES=		alias cpe gmake iconv libtool shebangfix ssl

SHEBANG_FILES=	src/webhttrack

ICONS_USES=	gnome

.include <bsd.port.options.mk>

.if empty(ICONV_LIB)
CONFIGURE_ARGS+=ac_cv_lib_iconv_iconv=no
.else
CONFIGURE_ARGS+=ac_cv_lib_iconv_iconv=yes
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/share|${PREFIX}/share|' ${WRKSRC}/html/server/div/WebHTTrack*
	@${REINPLACE_CMD} -e 's|gcc|${CC}|; s|-ldl ||' ${WRKSRC}/src/coucal/Makefile

post-install:
	${RM} ${STAGEDIR}${DATADIR}/html

post-install-DOCS-off:
# See PR/208875 for details
	${MKDIR} ${STAGEDIR}${DATADIR}/html/

post-install-DOCS-on:
	${INSTALL_DATA} ${WRKSRC}/html/httrack.css ${STAGEDIR}${DOCSDIR}/
	${RLN} ${STAGEDIR}${DOCSDIR} ${STAGEDIR}${DATADIR}/html

.include <bsd.port.mk>
