PORTNAME=	Cache-Memcached-Fast
PORTVERSION=	0.27
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Fast Perl client for memcached, a distributed memory cache daemon

LICENSE=	ART10 GPLv2+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

MAKE_JOBS_UNSAFE=	yes

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Cache/Memcached/Fast/Fast.so

.include <bsd.port.mk>
