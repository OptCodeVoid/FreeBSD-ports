PORTNAME=	pinpoint
DISTVERSION=	0.1.4
PORTREVISION=	8
CATEGORIES=	graphics
MASTER_SITES=	GNOME

MAINTAINER=	lichray@gmail.com
COMMENT=	Tool for making hackers do excellent presentations

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libclutter-glx-1.0.so:graphics/clutter

USES=		gl gnome pathfix pkgconfig gmake tar:xz
USE_GL=		gl
USE_GNOME=	librsvg2
GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	GST
GST_DESC=	Live videos as slide backgrounds

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MGST}
LIB_DEPENDS+=	libclutter-gst-1.0.so:multimedia/clutter-gst
.else
CONFIGURE_ARGS+=	--enable-cluttergst=no
.endif

.include <bsd.port.mk>
