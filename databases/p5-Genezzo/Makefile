PORTNAME=	Genezzo
PORTVERSION=	0.72
PORTREVISION=	2
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Extensible database with SQL and DBI

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Parse-RecDescent>=0:devel/p5-Parse-RecDescent

USES=		perl5 shebangfix
SHEBANG_FILES=	lib/Genezzo/*.pl
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
