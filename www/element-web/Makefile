PORTNAME=	element
DISTVERSIONPREFIX=	v
DISTVERSION=	1.11.3
CATEGORIES=	www
MASTER_SITES=	https://github.com/vector-im/element-web/releases/download/${DISTVERSIONFULL}/
PKGNAMESUFFIX=	-web

MAINTAINER=	ports@xanderio.de
COMMENT=	Glossy Matrix collaboration client for the web

LICENSE=	APACHE20

USES=		cpe

CPE_VENDOR=	matrix

NO_ARCH=	yes
NO_BUILD=	yes
SUB_FILES=	pkg-message
PLIST_SUB=	COMMITID=2d0fee22f85dafb0d05f

do-install:
	@${MKDIR} ${STAGEDIR}${WWWDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR}

.include <bsd.port.mk>
