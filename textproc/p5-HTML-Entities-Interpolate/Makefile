PORTNAME=	HTML-Entities-Interpolate
PORTVERSION=	1.10
CATEGORIES=	textproc www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Call HTML::Entities::encode_entities, via a hash, within a string

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-Parser>=3.69:www/p5-HTML-Parser \
		p5-Tie-Function>=0.02:devel/p5-Tie-Function
TEST_DEPENDS=	p5-Capture-Tiny>=0.44:devel/p5-Capture-Tiny \
		p5-File-Slurper>=0.009:devel/p5-File-Slurper

USES=		perl5 tar:tgz
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
