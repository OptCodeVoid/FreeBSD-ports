PORTNAME=	PkgConfig-LibPkgConf
PORTVERSION=	0.11
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PLICEASE
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Interface to .pc file interface via libpkgconf

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	pkgconf>=1.5.0:devel/pkgconf
LIB_DEPENDS=	libpkgconf.so:devel/pkgconf

USES=		perl5
USE_PERL5=	configure

CFLAGS+=	-I${LOCALBASE}/include/pkgconf

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/PkgConfig/LibPkgConf/LibPkgConf.so

.include <bsd.port.mk>
