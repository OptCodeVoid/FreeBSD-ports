PORTNAME=	Net-CUPS
PORTVERSION=	0.64
CATEGORIES=	print perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Interface to the CUPS API

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

LIB_DEPENDS=	libcupsimage.so:print/cups \
		libcupsfilters.so:print/cups-filters

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Net/CUPS/CUPS.so

.include <bsd.port.mk>
