PORTNAME=	Log-Dispatch-Scribe
PORTVERSION=	0.07
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Logging via Facebook's Scribe server software #'

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Log-Dispatch>0:devel/p5-Log-Dispatch
TEST_DEPENDS=	p5-Test-MockObject>=0:devel/p5-Test-MockObject \
		p5-Test-Timer>=0:devel/p5-Test-Timer

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yese

.include <bsd.port.mk>
