PORTNAME=	DBD-PgLite
PORTVERSION=	0.11
PORTREVISION=	2
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	PostgreSQL emulation mode for SQLite

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DBD-SQLite>=1.0:databases/p5-DBD-SQLite \
		p5-Text-Iconv>=1.0:converters/p5-Text-Iconv \
		p5-DBI>=1.30:databases/p5-DBI

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
