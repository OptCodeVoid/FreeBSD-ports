PORTNAME=	relaxconf
PORTVERSION=	1.1.1
PORTREVISION=	3
CATEGORIES=	sysutils
MASTER_SITES=	SF/relaxbsd/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Set of text menu based utilities for configuring RelaxBSD LiveCD

BUILD_DEPENDS=	cdialog:devel/cdialog
RUN_DEPENDS=	cdialog:devel/cdialog \
		disktype:sysutils/disktype

GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	NLS

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MNLS}
PLIST_SUB+=	NLS=""
USES+=		gettext
.else
PLIST_SUB+=	NLS="@comment "
CONFIGURE_ARGS+=--disable-nls
.endif

.include <bsd.port.mk>
