PORTNAME=	bio-shell
PORTVERSION=	1.0.1
CATEGORIES=	biology rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Command-line interface on BioRuby

LICENSE=	BSD2CLAUSE RUBY
LICENSE_COMB=	dual
LICENSE_FILE_BSD2CLAUSE=${WRKSRC}/BSDL
LICENSE_FILE_RUBY=	${WRKSRC}/COPYING

RUN_DEPENDS=	rubygem-bio>=2.0.0:biology/rubygem-bio

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

CONFLICTS_INSTALL=	ruby??-bio

PLIST_FILES=	bin/bioruby

.include <bsd.port.mk>
