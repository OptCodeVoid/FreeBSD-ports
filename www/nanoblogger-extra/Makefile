PORTNAME=	nanoblogger-extra
PORTVERSION=	3.4.2
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	http://nanoblogger.sourceforge.net/downloads/

MAINTAINER=	tobias.rehbein@web.de
COMMENT=	Extras for nanoblogger, a small weblog engine

LICENSE=	GPLv2

RUN_DEPENDS=	nb:www/nanoblogger

WRKSRC=		${WRKDIR}/nanoblogger-${PORTVERSION}
DATADIR=	${PREFIX}/share/nanoblogger

NO_BUILD=	yes

OPTIONS_DEFINE=	DOCS EXAMPLES

do-install:
.for data in default lang plugins
	@( cd ${WRKSRC}/${data} && \
		${COPYTREE_SHARE} \* ${STAGEDIR}${DATADIR}/${data} "! -empty" )
.endfor

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for doc in COPYING ChangeLog README
	@${INSTALL_DATA} ${WRKSRC}/${doc} ${STAGEDIR}${DOCSDIR}
.endfor
	@${MKDIR} ${STAGEDIR}${DOCSDIR}/html
	@${INSTALL_DATA} ${WRKSRC}/docs/*.html ${STAGEDIR}${DOCSDIR}/html

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	@${INSTALL_DATA} ${WRKSRC}/docs/examples/nanoblogger.bash_completion ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
