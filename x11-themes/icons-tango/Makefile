PORTNAME=	icons-tango
PORTVERSION=	0.8.90
PORTREVISION=	2
CATEGORIES=	x11-themes
MASTER_SITES=	GENTOO
DISTNAME=	tango-icon-theme-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Basic set of icons for the most common usage

BUILD_DEPENDS=	${LOCALBASE}/libexec/icon-name-mapping:x11-themes/icon-naming-utils

GNU_CONFIGURE=	yes
USE_GNOME=	intlhack
USES+=		gettext-tools gmake gnome magick:build pathfix pkgconfig

.include <bsd.port.mk>
