PORTNAME=	libogg
PORTVERSION=	1.3.5
PORTEPOCH=	4
CATEGORIES=	audio
MASTER_SITES=	https://downloads.xiph.org/releases/ogg/ \
		https://ftp.osuosl.org/pub/xiph/releases/ogg/

MAINTAINER=	naddy@FreeBSD.org
COMMENT=	Ogg bitstream library

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		libtool pathfix tar:xz
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
TEST_TARGET=	check

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
