PORTNAME=	faraday-cookie_jar
PORTVERSION=	0.0.7
PORTREVISION=	2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Cookie jar middleware for Faraday

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-faraday1>=0.8.0:www/rubygem-faraday1 \
		rubygem-http-cookie>=1.0.0<1.1:www/rubygem-http-cookie

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
