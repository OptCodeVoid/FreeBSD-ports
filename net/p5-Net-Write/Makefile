PORTNAME=	Net-Write
PORTVERSION=	1.05
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	eg@fbsd.lt
COMMENT=	Interface to open and send raw frames to the network

LICENSE=	ART10
LICENSE_FILE=	${WRKSRC}/LICENSE.Artistic

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Gomor>=1.00:devel/p5-Class-Gomor \
		p5-Socket6>=0.19:net/p5-Socket6 \
		p5-Net-Pcap>=0.14:net/p5-Net-Pcap

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
