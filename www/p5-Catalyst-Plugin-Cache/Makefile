PORTNAME=	Catalyst-Plugin-Cache
PORTVERSION=	0.12
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Flexible caching support for Catalyst

LICENSE=	ART10 GPLv1+ MIT
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Runtime>=5.8000:www/p5-Catalyst-Runtime \
		p5-Task-Weaken>=0:devel/p5-Task-Weaken \
		p5-MRO-Compat>=0:devel/p5-MRO-Compat
TEST_DEPENDS=	p5-Test-Deep>=0:devel/p5-Test-Deep \
		p5-Test-Exception>=0:devel/p5-Test-Exception \
		p5-Test-WWW-Mechanize-Catalyst>=0:devel/p5-Test-WWW-Mechanize-Catalyst

USES=		perl5
USE_PERL5=	configure patch
NO_ARCH=	yes

post-patch:
	@${PERL} -i.bak -ne 'print unless m,ok|Test::,' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
