PORTNAME=	Class-Inflate
PORTVERSION=	0.07
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Inflate HASH Object from Values in Database

BUILD_DEPENDS=	${RUN_DEPENDS} \
		p5-DBD-SQLite>=0:databases/p5-DBD-SQLite \
		p5-Test-Debugger>=0:devel/p5-Test-Debugger
RUN_DEPENDS=	p5-Devel-Messenger>=0:devel/p5-Devel-Messenger

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
