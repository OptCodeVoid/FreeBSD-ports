PORTNAME=	Catalyst-Plugin-Session-Store-Memcached-Fast
PORTVERSION=	0.02
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Memcached storage backend for session data

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Cache-Memcached-Fast>=0:databases/p5-Cache-Memcached-Fast \
		p5-Catalyst-Plugin-Session>=0.01:www/p5-Catalyst-Plugin-Session \
		p5-Catalyst-Runtime>=5.7000:www/p5-Catalyst-Runtime \
		p5-Class-Data-Inheritable>=0:devel/p5-Class-Data-Inheritable

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
