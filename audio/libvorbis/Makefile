PORTNAME=	libvorbis
PORTVERSION=	1.3.7
PORTREVISION=	2
PORTEPOCH=	3
CATEGORIES=	audio
MASTER_SITES=	https://downloads.xiph.org/releases/vorbis/ \
		https://ftp.osuosl.org/pub/xiph/releases/vorbis/

MAINTAINER=	naddy@FreeBSD.org
COMMENT=	Audio compression codec library

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libogg.so:audio/libogg

USES=		cpe libtool pathfix tar:xz
USE_LDCONFIG=	yes

CPE_VENDOR=	xiph.org

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-ogg=${LOCALBASE}
INSTALL_TARGET=	install-strip
TEST_TARGET=	check

OPTIONS_DEFINE=	DOCS

post-install:
	cd ${STAGEDIR}${PREFIX}/share/doc && ${MV} ${DISTNAME} libvorbis

.include <bsd.port.mk>
