PORTNAME=	Net-Google
PORTVERSION=	1.0.1
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple OOP-ish interface to the Google SOAP API

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-SOAP-Lite>=0:net/p5-SOAP-Lite

USES=		perl5
USE_PERL5=	modbuild

post-patch:
	@${REINPLACE_CMD} -i '' -e 's/CPAN/ExtUtils/g' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
