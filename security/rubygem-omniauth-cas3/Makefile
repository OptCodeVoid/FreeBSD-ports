PORTNAME=	omniauth-cas3
PORTVERSION=	1.1.4
PORTREVISION=	1
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	CAS 3.0 Strategy for OmniAuth

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-addressable>=2.3<3:www/rubygem-addressable \
		rubygem-nokogiri>=1.7.1<2:textproc/rubygem-nokogiri \
		rubygem-omniauth1>=1.2<2:security/rubygem-omniauth1

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
