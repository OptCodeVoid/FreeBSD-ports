PORTNAME=	nostromo
PORTVERSION=	1.9.6
CATEGORIES=	www
MASTER_SITES=	http://www.nazgul.ch/dev/

MAINTAINER=	loox@e-shell.net
COMMENT=	Fast, secure HTTP/1.1 CGI/1.1 SSL IPv4/IPv6 webserver

LICENSE=	ISCL

NOSTROMO_DIR?=		nostromo
NOSTROMO_LOGDIR?=	${NOSTROMO_DIR}/logs
NOSTROMO_LOGDIR_PERMS?=	0775

USE_RC_SUBR=	nostromo
USES=		uidfix ssl

MAKE_ENV?=	MAKEOBJDIR=. NOSTROMO_DIR=${NOSTROMO_DIR} MANDIR=${PREFIX}/man/man
PLIST_SUB+=	NOSTROMODIR="${NOSTROMO_DIR}" NOSTROMOLOGDIR="${NOSTROMO_LOGDIR}"

# XXX PIE with static libraries is currently unsupported.
MAKE_ENV+=	WITHOUT_PIE=true

post-extract:
	@${REINPLACE_CMD} -e "s@/var/nostromo@${NOSTROMO_DIR}@g" \
		${WRKSRC}/src/nhttpd/nhttpd.8	\
		${WRKSRC}/src/nhttpd/main.c	\
		${WRKSRC}/conf/nhttpd.conf-dist
	@${REINPLACE_CMD} -e "s@/var/nostromo@${STAGEDIR}${PREFIX}/${NOSTROMO_DIR}@g" \
		-e "s@-o [^ ]* -g [^ ]*@ -o ${BINOWN} -g ${BINGRP}@" \
		-e 's@conf-dist$$@conf.sample@'	\
		${WRKSRC}/Makefile

.include <bsd.port.mk>
