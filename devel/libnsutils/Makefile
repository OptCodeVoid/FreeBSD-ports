PORTNAME=	libnsutils
PORTVERSION=	0.1.0
CATEGORIES=	devel
MASTER_SITES=	http://download.netsurf-browser.org/libs/releases/
EXTRACT_SUFX=	-src.tar.gz

MAINTAINER=	nc@FreeBSD.org
COMMENT=	NetSurf generalised utility library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	netsurf-buildsystem>=1.5:devel/netsurf-buildsystem

USES=		gmake
USE_LDCONFIG=	yes

MAKE_ENV=	BUILD_CC="${CC}" COMPONENT_TYPE="lib-shared"

PLIST_SUB=	VERSION=${PORTVERSION}

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libnsutils.so

.include <bsd.port.mk>
