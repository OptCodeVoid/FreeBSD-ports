PORTNAME=	URL-Encode
PORTVERSION=	0.03
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:CHANSEN
PKGNAMEPREFIX=	p5-

MAINTAINER=	dgeo@centrale-marseille.fr
COMMENT=	Encoding and decoding of application/x-www-form-urlencoded encoding

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

OPTIONS_DEFINE=	XS

XS_RUN_DEPENDS=	p5-URL-Encode-XS>=0:www/p5-URL-Encode-XS

.include <bsd.port.mk>
