PORTNAME=	Authen-SCRAM
PORTVERSION=	0.011
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Salted Challenge Response Authentication Mechanism (RFC 5802)

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Authen-SASL-SASLprep>=1.100:security/p5-Authen-SASL-SASLprep \
		p5-Crypt-URandom>=0:security/p5-Crypt-URandom \
		p5-Moo>=1.001000:devel/p5-Moo \
		p5-PBKDF2-Tiny>=0.003:security/p5-PBKDF2-Tiny \
		p5-Try-Tiny>=0:lang/p5-Try-Tiny \
		p5-Type-Tiny>=0:devel/p5-Type-Tiny \
		p5-namespace-clean>=0:devel/p5-namespace-clean
TEST_DEPENDS=	p5-Test-FailWarnings>=0:devel/p5-Test-FailWarnings \
		p5-Test-Fatal>=0:devel/p5-Test-Fatal

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
