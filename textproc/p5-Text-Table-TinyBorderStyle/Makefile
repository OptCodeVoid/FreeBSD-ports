PORTNAME=	Text-Table-TinyBorderStyle
PORTVERSION=	0.005
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Text::Table::Tiny and support for border styles

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-File-ShareDir-Install>=0.06:devel/p5-File-ShareDir-Install \
		${RUN_DEPENDS}
RUN_DEPENDS=	p5-Module-Load-Util>=0.004:devel/p5-Module-Load-Util

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
