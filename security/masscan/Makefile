PORTNAME=	masscan
DISTVERSION=	1.3.2
CATEGORIES=	security

MAINTAINER=	taguchi.ch@gmail.com
COMMENT=	Very fast port scanner

LICENSE=	GPLv3

USES=		gmake
USE_GITHUB=	yes
GH_ACCOUNT=	robertdavidgraham
MAKE_ARGS=	SYS=freebsd CC="${CC}" CFLAGS="${CFLAGS}"
CFLAGS+=	-Wno-format

PLIST_FILES=	bin/masscan man/man8/masscan.8.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/masscan ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/doc/masscan.8 ${STAGEDIR}${MANPREFIX}/man/man8

do-test:
	${WRKSRC}/bin/masscan --selftest

.include <bsd.port.mk>
