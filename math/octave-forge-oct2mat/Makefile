PORTNAME=	octave-forge-oct2mat
PORTVERSION=	1.0.7
PORTREVISION=	27
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes

RUN_DEPENDS+=	${TARBALLS_DIR}/io.tar.gz:math/octave-forge-io

.include "${.CURDIR}/../../Mk/bsd.octave.mk"
.include <bsd.port.mk>
