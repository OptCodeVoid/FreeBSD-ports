PORTNAME=	flatzebra
PORTVERSION=	0.1.7
CATEGORIES=	devel games
MASTER_SITES=	http://perso.b2b2c.ca/~sarrazip/dev/

MAINTAINER=	martymac@FreeBSD.org
COMMENT=	Generic game engine for 2D double-buffering animation

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		libtool pathfix pkgconfig sdl
USE_CXXSTD=	gnu++98
GNU_CONFIGURE=	yes
USE_SDL=	sdl mixer image
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

PORTDOCS=	AUTHORS NEWS README

OPTIONS_DEFINE=	DOCS

post-patch-DOCS-off:
	@${REINPLACE_CMD} 's|^install-data-am: .*|install-data-am: install-pkgconfigDATA|' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
