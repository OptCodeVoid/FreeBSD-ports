PORTNAME=	rsyncbackup
PORTVERSION=	1.1
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	https://BSDforge.com/projects/source/sysutils/rsyncbackup/

MAINTAINER=	portmaster@bsdforge.com
COMMENT=	Rsync frontend written in Perl

LICENSE=	GPLv2+

RUN_DEPENDS=	rsync:net/rsync

CONFIGSRC=	${WRKSRC}/config
CONFIGFILES=	backupset.conf config.conf destinations.conf sources.conf

USES=		perl5 tar:xz
NO_BUILD=	yes
NO_ARCH=	yes

SUB_FILES=	pkg-message

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${ETCDIR}
.for configfile in ${CONFIGFILES}
	${INSTALL_DATA} ${CONFIGSRC}/${configfile} \
		${STAGEDIR}${ETCDIR}/${configfile}.example
.endfor

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC}/doc && ${COPYTREE_SHARE} \* ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
