PORTNAME=	nazghul
PORTVERSION=	0.7.1
PORTREVISION=	5
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Computer role-playing game engine

LICENSE=	GPLv2+ # GPLv3 text bundled, but sources mention GPLv2+

LIB_DEPENDS=	libpng.so:graphics/png

BROKEN_aarch64=		fails to compile: no matching function for call to cmdwin_vpush
BROKEN_armv6=		fails to compile: no matching function for call to cmdwin_vpush
BROKEN_armv7=		fails to compile: no matching function for call to cmdwin_vpush

USE_SDL=	sdl image mixer
GNU_CONFIGURE=	yes
USES=		gmake sdl

post-patch:
	${REINPLACE_CMD} -i "" 's|malloc.h|stdlib.h|g' ${WRKSRC}/src/scheme.c

.include <bsd.port.mk>
