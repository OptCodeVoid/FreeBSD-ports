PORTNAME=	Hash-Merge-Simple
PORTVERSION=	0.051
PORTREVISION=	5
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Recursively merge two or more hashes, simply

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

# Do not add p5-Clone to BUILD_DEPENDS and RUN_DEPENDS.
# See r403626 for details.
TEST_DEPENDS=	p5-Test-Deep>=0:devel/p5-Test-Deep \
		p5-Test-Most>=0:devel/p5-Test-Most

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
