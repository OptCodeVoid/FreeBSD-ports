PORTNAME=	libbpg
PORTVERSION=	0.9.8
CATEGORIES=	graphics
MASTER_SITES=	http://bellard.org/bpg/

MAINTAINER=	mazhe@alkumuna.eu
COMMENT=	BPG (Better Portable Graphics) is a new image format

LICENSE=	BSD2CLAUSE LGPL21
LICENSE_COMB=	multi

LIB_DEPENDS=	libpng.so:graphics/png

USES=		compiler:c++11-lib cpe gmake jpeg localbase:ldflags
CPE_VENDOR=	${PORTNAME}_project
USE_LDCONFIG=	yes

MAKE_ARGS+=	X265_LIBS=${X265_LIBS}
CFLAGS+=	-fPIC

OPTIONS_DEFINE=	SDL JCTVC JCTVCHI X265
OPTIONS_DEFAULT=SDL X265
OPTIONS_SUB=	yes

JCTVC_DESC=	Enable JCTVC (best quality but slow) for the encoder
JCTVCHI_DESC=	Use bit depths > 12 with JCTVC (experimental, need JCTVC)
JCTVCHI_IMPLIES=	JCTVC

SDL_USES=	sdl
SDL_USE=	SDL=image

X265_LIB_DEPENDS=	libx265.so:multimedia/x265
X265_VARS=	x265_libs=${PREFIX}/lib/libx265.so

do-configure-JCTVC-off:
	${REINPLACE_CMD} -e 's/^USE_JCTVC=y$$/#USE_JCTVC=/' ${WRKSRC}/Makefile

do-configure-JCTVCHI-on:
	${REINPLACE_CMD} -e 's/^#USE_JCTVC_HIGH_BIT_DEPTH=y$$/USE_JCTVC_HIGH_BIT_DEPTH=y/' ${WRKSRC}/Makefile

do-configure-SDL-off:
	${REINPLACE_CMD} -e 's/^USE_BPGVIEW=y$$/#USE_BPGVIEW=/' ${WRKSRC}/Makefile

do-configure-X265-off:
	${REINPLACE_CMD} -e 's/^USE_X265=y$$/#USE_X265=/' ${WRKSRC}/Makefile

post-install:
	${INSTALL_DATA} ${WRKSRC}/libbpg.h ${STAGEDIR}${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/libbpg.a ${STAGEDIR}${PREFIX}/lib
	${INSTALL_LIB} ${WRKSRC}/libbpg.so ${STAGEDIR}${PREFIX}/lib/libbpg.so.${DISTVERSION:R}
	${LN} -sf libbpg.so.${DISTVERSION:R} ${STAGEDIR}${PREFIX}/lib/libbpg.so.${DISTVERSION:R:R}
	${LN} -sf libbpg.so.${DISTVERSION:R:R} ${STAGEDIR}${PREFIX}/lib/libbpg.so

post-install-SDL-on:
	${INSTALL_PROGRAM} ${WRKSRC}/bpgview ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
