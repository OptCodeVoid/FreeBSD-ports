PORTNAME=	libmms
PORTVERSION=	0.6.4
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	SF

MAINTAINER=	kwm@FreeBSD.org
COMMENT=	Library for parsing mms:// and mmsh:// type network streams

LICENSE=	LGPL21

DEPRECATED=	Obsolete, Microsoft deprecated MMS protocol in favour of RTSP in 2003
EXPIRATION_DATE=2022-09-30

USES=		cpe gettext libtool pathfix pkgconfig
CPE_VENDOR=	libmms_project
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
