PORTNAME=	Mail-DeliveryStatus-BounceParser
PORTVERSION=	1.543
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to analyze bounce messages

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-MIME-Tools>=5.418:mail/p5-MIME-Tools \
		p5-Mail-Tools>=2.04:mail/p5-Mail-Tools

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
