PORTNAME=	Template-Plugin-Clickable
PORTVERSION=	0.06
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	TT plugin to make URLs clickable in HTML

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-URI-Find>=0.13:textproc/p5-URI-Find \
		p5-Template-Toolkit>=2.07:www/p5-Template-Toolkit \
		p5-UNIVERSAL-require>=0:devel/p5-UNIVERSAL-require

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
