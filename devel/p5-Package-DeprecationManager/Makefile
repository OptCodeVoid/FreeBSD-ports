PORTNAME=	Package-DeprecationManager
PORTVERSION=	0.17
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Manage deprecation warnings for your distribution

LICENSE=	ART20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Package-Stash>0:devel/p5-Package-Stash \
		p5-Params-Util>0:devel/p5-Params-Util \
		p5-Sub-Install>0:devel/p5-Sub-Install \
		p5-Sub-Name>=0:devel/p5-Sub-Name
TEST_DEPENDS=	p5-Test-Fatal>0:devel/p5-Test-Fatal \
		p5-Test-Warnings>0:devel/p5-Test-Warnings

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
