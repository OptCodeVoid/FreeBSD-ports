PORTNAME=	wmsolar
PORTVERSION=	1.1
CATEGORIES=	astro windowmaker

MAINTAINER=	tkuiper@inxsoft.net
COMMENT=	Dockapp that displays the Solar System viewed from the top

LICENSE=	GPLv2

USE_GITHUB=	yes
GH_ACCOUNT=	engerim42

PLIST_FILES=	bin/wmSolar
USES=		dos2unix gmake xorg
USE_XORG=	x11 xext xpm
USE_CXXSTD=	gnu++98

pre-patch:
	@${REINPLACE_CMD} -e 's|values.h|float.h|; s|MAXDOUBLE|DBL_MAX|g' \
		${WRKSRC}/wmSolar.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wmSolar ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
