PORTNAME=	ratbox-respond
PORTVERSION=	1.0
PORTREVISION=	3
CATEGORIES=	irc sysutils
MASTER_SITES=	http://www.ratbox.org/download/${PORTNAME}/ \
		http://mirrors.gigenet.com/ratbox/${PORTNAME}/ \
		ZI

MAINTAINER=	zi@FreeBSD.org
COMMENT=	Client-side implementation of the challenge oper system in ircd-ratbox

CONFIGURE_WRKSRC=${WRKSRC}/${PORTNAME}
BUILD_WRKSRC=	${WRKSRC}/${PORTNAME}

USES=		ssl tar:tgz
GNU_CONFIGURE=	yes

PORTDOCS=	challenge.txt
PORTEXAMPLES=	*
PLIST_FILES=	bin/ratbox-respond bin/makekeypair

OPTIONS_DEFINE=	DOCS EXAMPLES

do-install:
	${INSTALL_PROGRAM} ${BUILD_WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/makekeypair ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DOCSDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/challenge.txt ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/client-scripts/* ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
