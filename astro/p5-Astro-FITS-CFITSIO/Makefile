PORTNAME=	Astro-FITS-CFITSIO
PORTVERSION=	1.15
PORTREVISION=	2
CATEGORIES=	astro perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for using the cfitsio library

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

LIB_DEPENDS=	libcfitsio.so:astro/cfitsio

USES=		perl5
USE_PERL5=	configure

CONFIGURE_ENV=	CFITSIO=${LOCALBASE}

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Astro/FITS/CFITSIO/CFITSIO.so

.include <bsd.port.mk>
