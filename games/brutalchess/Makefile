PORTNAME=	brutalchess
PORTVERSION=	0.5.2
PORTREVISION=	15
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-alpha/${PORTNAME}-alpha-${PORTVERSION}
DISTNAME=	${PORTNAME}-alpha-${PORTVERSION}-src

LIB_DEPENDS=	libfreetype.so:print/freetype2

MAINTAINER=	gustau.perez@gmail.com
COMMENT=	Nice looking OpenGL chess game

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

GNU_CONFIGURE=	yes
USES=		dos2unix gl gmake libtool pkgconfig sdl xorg
USE_GL=		yes
USE_SDL=	sdl image
USE_XORG=	x11 xext xt xmu xi
INSTALL_TARGET=	install-strip
BINARY_ALIAS=	freetype-config=true

pre-build:
	${CHMOD} 0755 ${WRKSRC}/install-sh

.include <bsd.port.mk>
