PORTNAME=	WWW-Mechanize-FormFiller
PORTVERSION=	0.12
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl framework to automate HTML forms

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Data-Random>=0.05:devel/p5-Data-Random \
		p5-HTML-Form>=1.038:www/p5-HTML-Form \
		p5-HTML-Tagset>=0:www/p5-HTML-Tagset \
		p5-libwww>=0:www/p5-libwww

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
