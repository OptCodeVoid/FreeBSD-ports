PORTNAME=	makefaq
PORTVERSION=	2.5
PORTREVISION=	1
CATEGORIES=	textproc python
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python program that creates a FAQ

LICENSE=	GPLv2+

USES=		python shebangfix tar:tgz
NO_BUILD=	yes
NO_ARCH=	yes
SHEBANG_FILES=	makefaq.py

PLIST_FILES=	bin/makefaq.py man/man1/makefaq.1.gz
PORTDOCS=	BUGS CREDITS ChangeLog README TODO UPGRADING faq.html

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/makefaq.py ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/makefaq.1  ${STAGEDIR}${MANPREFIX}/man/man1

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for i in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${i} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
