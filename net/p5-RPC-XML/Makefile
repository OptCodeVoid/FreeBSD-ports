PORTNAME=	RPC-XML
PORTVERSION=	0.82
CATEGORIES=	net www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	XML-RPC client and server library for Perl

LICENSE=	ART20 LGPL21
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-XML-Parser>=2.31:textproc/p5-XML-Parser \
		p5-libwww>=5.834:www/p5-libwww
TEST_DEPENDS=	p5-DateTime-Format-ISO8601>=0.07:devel/p5-DateTime-Format-ISO8601

USES=		gmake perl5
USE_PERL5=	configure

NO_ARCH=	yes

OPTIONS_DEFINE=	XS

XS_BUILD_DEPENDS=	p5-XML-LibXML>=1.85:textproc/p5-XML-LibXML
XS_RUN_DEPENDS=		${XS_BUILD_DEPENDS}

.include <bsd.port.mk>
