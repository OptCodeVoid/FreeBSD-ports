PORTNAME=	HTML-GoogleMaps
PORTVERSION=	10
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple wrapper around the Google Maps API

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Geo-Coder-Google>=0.02:misc/p5-Geo-Coder-Google

USES=		perl5
USE_PERL5=	configure

post-extract:
	@${FIND} ${WRKSRC} -name ".*.pm" -delete

post-patch:
	@${FIND} ${WRKSRC} -name "*.orig" -delete

.include <bsd.port.mk>
