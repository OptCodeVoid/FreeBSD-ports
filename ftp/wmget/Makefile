PORTNAME=	wmget
PORTVERSION=	0.6.0
PORTREVISION=	8
CATEGORIES=	ftp
MASTER_SITES=	http://amtrickey.net/download/ \
		LOCAL/uqs
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	uqs@FreeBSD.org
COMMENT=	Dock app for Window Maker providing wget functionality

LICENSE=	MIT

LIB_DEPENDS=	libcurl.so:ftp/curl

USES=		gmake xorg
USE_XORG=	x11 xext xpm
WRKSRC=		${WRKDIR}/${PORTNAME}

MAKE_ENV+=	${CONFIGURE_ENV}

PLIST_FILES=	bin/wmget \
		man/man1/wmget.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wmget ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/wmget.1 ${STAGEDIR}${PREFIX}/man/man1

.include <bsd.port.mk>
