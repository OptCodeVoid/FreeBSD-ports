PORTNAME=	bcwipe
PORTVERSION=	1.9.13
CATEGORIES=	security
MASTER_SITES=	http://www.jetico.com/linux/
DISTNAME=	BCWipe-${PORTVERSION:S/./-/g:S/-/./}

MAINTAINER=	cy@FreeBSD.org
COMMENT=	BCWipe securely erases data from magnetic and solid-state memory

# Converted from NO_CDROM
LICENSE=	bcwipe
LICENSE_NAME=	bcwipe
LICENSE_TEXT=	Non-commercial distribution and use only
LICENSE_PERMS=	dist-mirror pkg-mirror auto-accept

USES=		cpe
CPE_VENDOR=	jetico
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION:S/./-/g:S/-/./}
GNU_CONFIGURE=	yes
MAKE_ARGS+=	CFLAGS="${CFLAGS}"

PLIST_FILES=	bin/bcwipe man/man1/bcwipe.1.gz

post-patch:
	@${REINPLACE_CMD} -e "s,fprintf(stderr\,string),fprintf(stderr\,\"%s\"\,string),g" ${WRKSRC}/wipe.c
	@${REINPLACE_CMD} -e "s,if (NULL == mktemp(result)),if (mkstemp(result) == -1),g" ${WRKSRC}/wipe.c
	@${REINPLACE_CMD} -e "s,mktemp,mkstemp,g" ${WRKSRC}/wipe.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bcwipe ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/bcwipe.1 ${STAGEDIR}${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
