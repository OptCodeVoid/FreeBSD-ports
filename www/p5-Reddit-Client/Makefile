PORTNAME=	Reddit-Client
PORTVERSION=	1.389
PORTEPOCH=	4
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Methods and object wrappers for objects exposed by the Reddit API

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-IO-Capture>=0:devel/p5-IO-Capture \
		p5-JSON>=2.97:converters/p5-JSON \
		p5-URI-Encode>0:www/p5-URI-Encode \
		p5-URI>0:net/p5-URI \
		p5-libwww>0:www/p5-libwww \
		p5-File-Path-Expand>=0:devel/p5-File-Path-Expand
TEST_DEPENDS=	p5-Test-MockModule>=0:devel/p5-Test-MockModule

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
