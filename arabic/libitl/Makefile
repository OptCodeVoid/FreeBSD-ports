PORTNAME=	libitl
PORTVERSION=	0.8.0
DISTVERSIONPREFIX=	v
CATEGORIES=	arabic

MAINTAINER=	ports@FreeBSD.org
COMMENT=	API abstraction to common Islamic calculations

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake:insource pkgconfig
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	arabeyes-org
GH_PROJECT=	ITL
GH_TAGNAME=	f8f41cc

PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	(cd ${WRKSRC}/new_method/references && ${COPYTREE_SHARE} \
		"${PORTDOCS}" ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
