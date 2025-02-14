PORTNAME=	noffle
PORTVERSION=	1.1.5
PORTREVISION=	3
CATEGORIES=	news
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}%20%28devel%29/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	News server for low speed dial-up connections

LIB_DEPENDS=	libgdbm.so:databases/gdbm

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		localbase
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-configfile=${LOCALBASE}/etc/noffle.conf \
		--with-usersfile=${LOCALBASE}/etc/noffle.users

PLIST_SUB=	SPOOL_DIR=${SPOOL_DIR}
SUB_FILES=	pkg-message

SPOOL_DIR=	/var/spool/noffle

DOCS=		ChangeLog docs/FAQ docs/INTERNALS README \
		docs/testing.txt docs/noffle.lsm

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e \
		's|/etc/noffle.conf|${PREFIX}/etc/noffle.conf|g' \
		${WRKSRC}/docs/${PORTNAME}.1 \
		${WRKSRC}/docs/${PORTNAME}.conf.5

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/${PORTNAME} \
		${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/docs/noffle.1 \
		${STAGEDIR}${MANPREFIX}/man/man1
	${INSTALL_MAN} ${WRKSRC}/docs/noffle.conf.5 \
		${STAGEDIR}${MANPREFIX}/man/man5
	${INSTALL_DATA} ${WRKSRC}/noffle.conf.example \
		${STAGEDIR}${PREFIX}/etc/noffle.conf.sample
	@${MKDIR} ${STAGEDIR}${SPOOL_DIR}/data \
		${STAGEDIR}${SPOOL_DIR}/lock \
		${STAGEDIR}${SPOOL_DIR}/outgoing \
		${STAGEDIR}${SPOOL_DIR}/overview \
		${STAGEDIR}${SPOOL_DIR}/requested

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${DOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
