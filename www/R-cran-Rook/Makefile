PORTNAME=	Rook
DISTVERSION=	1.1-1
PORTREVISION=	4
CATEGORIES=	www
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Web server interface for R

LICENSE=	GPLv2

CRAN_DEPENDS=	R-cran-brew>0:textproc/R-cran-brew
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
