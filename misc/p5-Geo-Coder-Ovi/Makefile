PORTNAME=	Geo-Coder-Ovi
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	misc geography perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Geocode addresses with the Ovi Maps API

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-JSON>=2:converters/p5-JSON \
		p5-JSON-XS>=2:converters/p5-JSON-XS \
		p5-URI>=1.36:net/p5-URI \
		p5-libwww>=0:www/p5-libwww

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
