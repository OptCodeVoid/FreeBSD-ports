PORTNAME=	mlan3
PORTVERSION=	1.00
CATEGORIES=	comms
MASTER_SITES=	http://files.maximintegrated.com/sia_bu/public/
DISTNAME=	owpd300b

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Version 3.00 beta API for Dallas Semiconductors 1-wire lan devices

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/license.txt

BROKEN_FreeBSD_13=	ld: error: duplicate symbol: VERBOSE
BROKEN_FreeBSD_14=	ld: error: duplicate symbol: VERBOSE

NO_WRKSUBDIR=	yes
USES=		dos2unix uidfix zip
DOS2UNIX_GLOB=	*.c *.h

CONFLICTS_INSTALL=	shells/fish

post-patch:
	@${REINPLACE_CMD} -e '/int main/s/short argc/int argc/' \
		${WRKSRC}/apps/gethumd/gethumd.c ${WRKSRC}/apps/shaapp/shaapp.c

.include <bsd.port.mk>
